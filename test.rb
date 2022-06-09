require 'presto_parser'

class CustomVisitor < ::PrestoParser::AstVisitor
  def visit_terminal_node(context)
    context.text
  end
end

query = <<~SQL_QUERY
  with recursive dates_function(x) as (
    select 0
    union all
    select x+1 from dates_function
  --   limit (select ((julianday(strftime('%Y-%m-%d', '{{End_date}}')) - julianday(strftime('%Y-%m-%d', '{{Start_date}}')))) + 1)
    limit (select ((julianday('2022-12-31') - julianday('2021-01-01'))) + 1)
  ),
  dates as (
  --   select date(julianday(strftime('%Y-%m-%d', '{{Start_date}}')), '+' || x || ' days') as date
    select date(julianday('2021-01-01'), '+' || x || ' days') as date
    from dates_function
  ),
  dates_rich as (
  select d.date,
          case cast (strftime('%w', d.date) as integer)
          when 0 then 'sunday'
          when 1 then 'monday'
          when 2 then 'tuesday'
          when 3 then 'wednesday'
          when 4 then 'thursday'
          when 5 then 'friday'
        else 'saturday' end as day_of_week
    from dates d
  ),
  emp as (
    select *
    from employees e
    inner join contracts c on c.employee_id = e.id
  --   where e.office like '%{{Workplace}}%'
    -- where e.id = 436250
    -- where e.status = 'active'
    --   and c.current_contract = 'TRUE'
  ),
  leav as (
    SELECT *
    from leaves
    where leaves.status like 'approved'
    -- and leaves.leave_type_name in ()
  )
  ,
  merge_shifts as(
    select 
    s.employee_id as `Employee id`,
    s.date as `TT Date`,
    sum(s.duration) as `Hours worked`,
    s.observations as `Shift observations`,
    s.attendance_shift_state as `Shift status`
    from shifts s
    group by 1, 2
  )
  ,
  merge_shifts_management as(
    select 
    sum(sm.shift_duration) as `Shift mgnt duration`,
    sm.employee_id as `Employee id`,
    sm.date_of_shift as `Date of shift mgnt`,
    l.leave_type_name as `Leave type`,
    l.duration as `Leave duration`,
    l.duration_type as `Leave duration type`,
    l.start_on as `Leave start`,
    l.finish_on as `Leave end`,
    l.status as `Leaves status`,
    l.description as `Leave observations`
    from shift_management_shifts sm
    LEFT outer JOIN leav l on sm.employee_id = l.employee_id AND sm.date_of_shift BETWEEN l.start_on AND l.finish_on
    group by 2,3
  )
  ,
  merge as (
    select 
    d.date as `Date regular`,
    e.id as `Employee id`,
    -- sm.`Shift mgnt id`,
    e.full_name as `Employee name`,
    e.office as `Workplace`,
    e.daily_workschedule_hours as `Daily workschedule hours`,
    sm.`Shift mgnt duration`,
    s.`Hours worked`,
    s.`Shift status`,
    s.`Shift observations`,
    sm.`Leave type`,
    sm.`Leave duration`,
    sm.`Leave duration type`,
    sm.`Leave start`,
    sm.`Leave end`,
    sm.`Leaves status`,
    sm.`Leave observations`,
    e.working_week_days as `Working days`,
    d.day_of_week,
    case
      when e.working_week_days like '%' || d.day_of_week || '%' and sm.`Leave type` is null then 'Working day'
      when e.working_week_days like '%' || d.day_of_week || '%' and sm.`Leave type` like 'hours' then 'Partial working day hours'
      when e.working_week_days like '%' || d.day_of_week || '%' and sm.`Leave type` like 'days' and sm.`Leave duration` = 0.5 then 'Partial working day days'
      when e.working_week_days like '%' || d.day_of_week || '%' and sm.`Leave type` is not null then 'Holidays'
      when e.working_week_days not like '%' || d.day_of_week || '%' then 'No working day'
    end as `Working Day`
    from dates_rich d
    cross join emp e
    left outer join merge_shifts_management sm on sm.`Employee id` = e.id and sm.`Date of shift mgnt` = d.date
    left outer join merge_shifts s on s.`Employee id` = e.id  and s.`TT Date` = d.date
    -- left outer join shifts s on e.employee_id = s.employee_id and s.date = d.date
    -- left outer join shift_management_shifts sm on e.employee_id = sm.employee_id AND sm.date_of_shift = d.date
    -- LEFT outer JOIN leav l on e.employee_id = l.employee_id
    group by 1, 2
  )
    ,

  schedules_time_tracking as(
    SELECT
      d.date as `Date regular`,
      e.id as `Employee id`,
      s.clock_in || ' - ' || s.clock_out as `TT hours`
    from dates_rich d
    cross join emp e
    left outer join shifts s on e.employee_id = s.employee_id and s.date = d.date
  ),
  schedule_grouped_time_tracking as(
    
    SELECT s.`Date regular`, s.`Employee id`,  group_concat(s.`TT hours`, ' / ') as `Hours worked ranges`
    FROM schedules_time_tracking s
    GROUP by 1, 2
  ) ,
  schedules_shift as(
    SELECT
      d.date as `Date regular`,
      e.id as `Employee id`,
      sm.start_at || ' - ' || sm.end_at as `Shift mgnt hours`
    from dates_rich d
    cross join emp e
    left outer join shift_management_shifts sm on e.employee_id = sm.employee_id AND sm.date_of_shift = d.date
  )
    ,
  schedule_grouped_shifts as(
    
    SELECT ss.`Date regular`, ss.`Employee id`,  group_concat(ss.`Shift mgnt hours`, ' / ') as `Hours planned shifts`
    FROM schedules_shift ss
    GROUP by 1, 2
  ) 
    ,
  preview as( 
    SELECT
      m.`Date regular`,
      m.`Employee id`,
      m.`Employee name`,
      m.`Workplace`,
      -- m.`Daily workschedule hours`,
      -- case
      --   when m.`Working days` like '%' || m.`Day of week` || '%' and m.`Leave type` is null then m.`Daily workschedule hours`
      --   when m.`Working days` like '%' || m.`Day of week` || '%' and m.`Leave duration type` like 'hours' then round(m.`Daily workschedule hours` - m.`Leave duration`, 2)
      --   when m.`Working days` like '%' || m.`Day of week` || '%' and m.`Leave duration type` like 'days' and m.`Leave duration` = 0.5 then round(m.`Daily workschedule hours` / 2, 2)
      --   else 0
      -- end as `Expected hours contract`,
      case
        -- when m.`Shift mgnt duration` is not null then sum(m.`Shift mgnt duration`)
        when m.`Shift mgnt duration` is not null and m.`Leave type` is null then sum(m.`Shift mgnt duration`)
        when m.`Shift mgnt duration` = 0 and m.`Leave duration type` like 'hours' then round(0 - m.`Leave duration`, 2)
        when m.`Shift mgnt duration` > 0 and m.`Leave duration type` like 'hours' then round(sum(m.`Shift mgnt duration`) - m.`Leave duration`, 2)
        when m.`Shift mgnt duration` is not null and m.`Leave duration type` like 'days' and m.`Leave duration` = 0.5 then round(sum(m.`Shift mgnt duration`) / 2, 2)
        else 0
      end as `Expected hours real`,
      -- s.`Shifts hours planed`,
    -- ss.`Hours planned shifts`,
      CASE
        when ss.`Hours planned shifts`is null then '—'
        when ss.`Hours planned shifts` is not null then ss.`Hours planned shifts`
      end as `Hours planned shifts`,
    -- CASE
    --   when m.`Shift mgnt duration` is null then 0
    --   when m.`Shift mgnt duration` is not null then sum(m.`Shift mgnt duration`)
    -- end as `Shift mgnt estimated`,
    
      -- sum(m.`Shift mgnt duration`) as `Shift mgnt estimated`,
      round(sum(m.`Hours worked`),2) as `Hours worked`,
      -- s.`Hours worked ranges`,
    CASE
      when m.`Shift status` is null then '–'
    else m.`Shift status`
    end as `Shift status`,
      m.`Shift observations`,
      -- m.`Hours worked`,
      m.`Working Day`,
      m.`Leave type`,
      m.`Leave duration`,
      m.`Leave duration type`,
      m.`Leave observations`
    FROM merge m
    LEFT JOIN schedule_grouped_shifts ss on m.`Employee id` = ss.`Employee id` and m.`Date regular` = ss.`Date regular`
    LEFT JOIN schedule_grouped_time_tracking st on m.`Employee id` = st.`Employee id` and m.`Date regular` = st.`Date regular`
    GROUP BY 1, 2
    ORDER BY 1
  )
    SELECT *, 
    -- case
    --   WHEN p.`Hours worked` = 0 and p.`Expected hours contract` > 0  then '👀 Clock in missed'
    --   WHEN p.`Hours worked` > 0 and p.`Working Day` in ('Holidays', 'No working day') then '❌ Working on a holiday'
    --   WHEN p.`Hours worked` < p.`Expected hours contract` then '☝️ Less hours'
    --   WHEN p.`Hours worked` > p.`Expected hours contract` then '🔥 More hours'
    --   else '✅ Ok'
    -- end as 'Contract status',
    case
      WHEN p.`Hours worked` = 0 and p.`Expected hours real` > 0  then '👀 Clock in missed'
      WHEN p.`Hours worked` > 0 and p.`Working Day` in ('Holidays', 'No working day')  then '❌ Working on a holiday'
      WHEN p.`Hours worked` < p.`Expected hours real` then '☝️ Less hours'
      WHEN p.`Hours worked` > p.`Expected hours real` then '🔥 More hours'
      else '✅ Ok'
    end as 'Shifts status'
    FROM preview p
SQL_QUERY

CustomVisitor.new.accept(query).inspect
