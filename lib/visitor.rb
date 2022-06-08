# typed: strict
# frozen_string_literal: true

module PrestoParser
  class Visitor
    UnrecognizedContextError = Class.new(StandardError)

    def accept(input)
      parser = parse(input)
    end

    protected

    def visit(context)
      case context
      when PrestoParser::QueryContext
        visit_query(context)
      when PrestoParser::WithContext
        visit_with(context)
      when PrestoParser::TableElementContext
        visit_table_element(context)
      when PrestoParser::ColumnDefinitionContext
        visit_column_definition(context)
      when PrestoParser::LikeClauseContext
        visit_like_clause(context)
      when PrestoParser::TablePropertiesContext
        visit_table_properties(context)
      when PrestoParser::TablePropertyContext
        visit_table_property(context)
      when PrestoParser::QueryNoWithContext
        visit_query_no_with(context)
      when PrestoParser::QueryTermContext
        visit_query_term(context)
      when PrestoParser::QueryPrimaryContext
        visit_query_primary(context)
      when PrestoParser::SortItemContext
        visit_sort_item(context)
      when PrestoParser::QuerySpecificationContext
        visit_query_specification(context)
      when PrestoParser::GroupByContext
        visit_group_by(context)
      when PrestoParser::GroupingElementContext
        visit_grouping_element(context)
      when PrestoParser::GroupingExpressionsContext
        visit_grouping_expressions(context)
      when PrestoParser::GroupingSetContext
        visit_grouping_set(context)
      when PrestoParser::NamedQueryContext
        visit_named_query(context)
      when PrestoParser::SetQuantifierContext
        visit_set_quantifier(context)
      when PrestoParser::SelectItemContext
        visit_select_item(context)
      when PrestoParser::RelationContext
        visit_relation(context)
      when PrestoParser::JoinTypeContext
        visit_join_type(context)
      when PrestoParser::JoinCriteriaContext
        visit_join_criteria(context)
      when PrestoParser::SampledRelationContext
        visit_sampled_relation(context)
      when PrestoParser::SampleTypeContext
        visit_sample_type(context)
      when PrestoParser::AliasedRelationContext
        visit_aliased_relation(context)
      when PrestoParser::ColumnAliasesContext
        visit_column_aliases(context)
      when PrestoParser::RelationPrimaryContext
        visit_relation_primary(context)
      when PrestoParser::ExpressionContext
        visit_expression(context)
      when PrestoParser::BooleanExpressionContext
        visit_boolean_expression(context)
      when PrestoParser::PredicatedContext
        visit_predicated(context)
      when PrestoParser::PredicateContext
        visit_predicate(context)
      when PrestoParser::ValueExpressionContext
        visit_value_expression(context)
      when PrestoParser::PrimaryExpressionContext
        visit_primary_expression(context)
      when PrestoParser::TimeZoneSpecifierContext
        visit_time_zone_specifier(context)
      when PrestoParser::ComparisonOperatorContext
        visit_comparison_operator(context)
      when PrestoParser::ComparisonQuantifierContext
        visit_comparison_quantifier(context)
      when PrestoParser::BooleanValueContext
        visit_boolean_value(context)
      when PrestoParser::IntervalContext
        visit_interval(context)
      when PrestoParser::IntervalFieldContext
        visit_interval_field(context)
      when PrestoParser::TypeContext
        visit_type(context)
      when PrestoParser::TypeParameterContext
        visit_type_parameter(context)
      when PrestoParser::BaseTypeContext
        visit_base_type(context)
      when PrestoParser::WhenClauseContext
        visit_when_clause(context)
      when PrestoParser::FilterContext
        visit_filter(context)
      when PrestoParser::OverContext
        visit_over(context)
      when PrestoParser::WindowFrameContext
        visit_window_frame(context)
      when PrestoParser::FrameBoundContext
        visit_frame_bound(context)
      when PrestoParser::ExplainOptionContext
        visit_transaction_mode(context)
      when PrestoParser::TransactionModeContext
        visit_level_of_isolation(context)
      when PrestoParser::LevelOfIsolationContext
        visit_level_of_isolation(context)
      when PrestoParser::CallArgumentContext
        visit_call_argument(context)
      when PrestoParser::PrivilegeContext
        visit_privilege(context)
      when PrestoParser::QualifiedNameContext
        visit_qualified_name(context)
      when PrestoParser::IdentifierContext
        visit_identifier(context)
      when PrestoParser::QuotedIdentifierContext
        visit_quoted_identifier(context)
      when PrestoParser::NumberContext
        visit_number(context)
      when PrestoParser::NonReservedContext
        visit_non_reserved(context)
      when PrestoParser::NormalFormContext
        visit_normal_form(context)
      else raise UnrecognizedContextError
      end
    end

    def visit_children(context)
      context.children.map { |child| visit(child) }
    end

    def visit_query(context)
      visit_children(context)
    end

    def visit_with(context)
      visit_children(context)
    end

    def visit_table_element(context)
      visit_children(context)
    end

    def visit_column_definition(context)
      visit_children(context)
    end

    def visit_like_clause(context)
      visit_children(context)
    end

    def visit_table_properties(context)
      visit_children(context)
    end

    def visit_table_property(context)
      visit_children(context)
    end

    def visit_query_no_with(context)
      visit_children(context)
    end

    def visit_query_term_default(context)
      visit_children(context)
    end

    def visit_set_operation(context)
      visit_children(context)
    end

    def visit_query_primary(context)
      visit_children(context)
    end

    def visit_table(context)
      visit_children(context)
    end

    def visit_inline_table(context)
      visit_children(context)
    end

    def visit_subquery(context)
      visit_children(context)
    end

    def visit_sort_item(context)
      visit_children(context)
    end

    def visit_query_specification(context)
      visit_children(context)
    end

    def visit_group_by(context)
      visit_children(context)
    end

    def visit_grouping_element(context)
      visit_children(context)
    end

    def visit_single_grouping_set(context)
      visit_children(context)
    end

    def visit_rollup(context)
      visit_children(context)
    end

    def visit_cube(context)
      visit_children(context)
    end

    def visit_multiple_grouping_sets(context)
      visit_children(context)
    end

    def visit_grouping_expressions(context)
      visit_children(context)
    end

    def visit_grouping_set(context)
      visit_children(context)
    end

    def visit_named_query(context)
      visit_children(context)
    end

    def visit_set_quantifier(context)
      visit_children(context)
    end

    def visit_select_item(context)
      visit_children(context)
    end

    def visit_relation_default(context)
      visit_children(context)
    end

    def visit_join_relation(context)
      visit_children(context)
    end

    def visit_join_type(context)
      visit_children(context)
    end

    def visit_join_criteria(context)
      visit_children(context)
    end

    def visit_sampled_relation(context)
      visit_children(context)
    end

    def visit_sample_type(context)
      visit_children(context)
    end

    def visit_aliased_relation(context)
      visit_children(context)
    end

    def visit_column_aliases(context)
      visit_children(context)
    end

    def visit_table_name(context)
      visit_children(context)
    end

    def visit_subquery_relation(context)
      visit_children(context)
    end

    def visit_unnest(context)
      visit_children(context)
    end

    def visit_parenthesized_relation(context)
      visit_children(context)
    end

    def visit_expression(context)
      visit_children(context)
    end

    def visit_logical_not(context)
      visit_children(context)
    end

    def visit_boolean_default(context)
      visit_children(context)
    end

    def visit_logical_binary(context)
      visit_children(context)
    end

    def visit_predicated(context)
      visit_children(context)
    end

    def visit_comparison(context)
      visit_children(context)
    end

    def visit_quantified_comparison(context)
      visit_children(context)
    end

    def visit_between(context)
      visit_children(context)
    end

    def visit_in_list(context)
      visit_children(context)
    end

    def visit_in_subquery(context)
      visit_children(context)
    end

    def visit_like(context)
      visit_children(context)
    end

    def visit_null_predicate(context)
      visit_children(context)
    end

    def visit_distinct_from(context)
      visit_children(context)
    end

    def visit_value_expression(context)
      visit_children(context)
    end

    def visit_concatenation(context)
      visit_children(context)
    end

    def visit_arithmetic_binary(context)
      visit_children(context)
    end

    def visit_arithmetic_unary(context)
      visit_children(context)
    end

    def visit_at_time_zone(context)
      visit_children(context)
    end

    def visit_dereference(context)
      visit_children(context)
    end

    def visit_type_constructor(context)
      visit_children(context)
    end

    def visit_special_date_time_function(context)
      visit_children(context)
    end

    def visit_substring(context)
      visit_children(context)
    end

    def visit_cast(context)
      visit_children(context)
    end

    def visit_lambda(context)
      visit_children(context)
    end

    def visit_parenthesized_expression(context)
      visit_children(context)
    end

    def visit_parameter(context)
      visit_children(context)
    end

    def visit_normalize(context)
      visit_children(context)
    end

    def visit_interval_literal(context)
      visit_children(context)
    end

    def visit_numeric_literal(context)
      visit_children(context)
    end

    def visit_boolean_literal(context)
      visit_children(context)
    end

    def visit_simple_case(context)
      visit_children(context)
    end

    def visit_column_reference(context)
      visit_children(context)
    end

    def visit_null_literal(context)
      visit_children(context)
    end

    def visit_row_constructor(context)
      visit_children(context)
    end

    def visit_subscript(context)
      visit_children(context)
    end

    def visit_subquery_expression(context)
      visit_children(context)
    end

    def visit_binary_literal(context)
      visit_children(context)
    end

    def visit_extract(context)
      visit_children(context)
    end

    def visit_string_literal(context)
      visit_children(context)
    end

    def visit_array_constructor(context)
      visit_children(context)
    end

    def visit_function_call(context)
      visit_children(context)
    end

    def visit_exists(context)
      visit_children(context)
    end

    def visit_position(context)
      visit_children(context)
    end

    def visit_searched_case(context)
      visit_children(context)
    end

    def visit_time_zone_interval(context)
      visit_children(context)
    end

    def visit_time_zone_string(context)
      visit_children(context)
    end

    def visit_comparison_operator(context)
      visit_children(context)
    end

    def visit_comparison_quantifier(context)
      visit_children(context)
    end

    def visit_boolean_value(context)
      visit_children(context)
    end

    def visit_interval(context)
      visit_children(context)
    end

    def visit_interval_field(context)
      visit_children(context)
    end

    def visit_type(context)
      visit_children(context)
    end

    def visit_type_parameter(context)
      visit_children(context)
    end

    def visit_base_type(context)
      visit_children(context)
    end

    def visit_when_clause(context)
      visit_children(context)
    end

    def visit_filter(context)
      visit_children(context)
    end

    def visit_over(context)
      visit_children(context)
    end

    def visit_window_frame(context)
      visit_children(context)
    end

    def visit_unbounded_frame(context)
      visit_children(context)
    end

    def visit_current_row_bound(context)
      visit_children(context)
    end

    def visit_bounded_frame(context)
      visit_children(context)
    end

    def visit_explain_format(context)
      visit_children(context)
    end

    def visit_explain_type(context)
      visit_children(context)
    end

    def visit_isolation_level(context)
      visit_children(context)
    end

    def visit_transaction_access_mode(context)
      visit_children(context)
    end

    def visit_read_uncommitted(context)
      visit_children(context)
    end

    def visit_read_committed(context)
      visit_children(context)
    end

    def visit_repeatable_read(context)
      visit_children(context)
    end

    def visit_serializable(context)
      visit_children(context)
    end

    def visit_positional_argument(context)
      visit_children(context)
    end

    def visit_named_argument(context)
      visit_children(context)
    end

    def visit_privilege(context)
      visit_children(context)
    end

    def visit_qualified_name(context)
      visit_children(context)
    end

    def visit_unquoted_identifier(context)
      visit_children(context)
    end

    def visit_quoted_identifier_alternative(context)
      visit_children(context)
    end

    def visit_back_quoted_identifier(context)
      visit_children(context)
    end

    def visit_digit_identifier(context)
      visit_children(context)
    end

    def visit_quoted_identifier(context)
      visit_children(context)
    end

    def visit_decimal_literal(context)
      visit_children(context)
    end

    def visit_integer_literal(context)
      visit_children(context)
    end

    def visit_non_reserved(context)
      visit_children(context)
    end

    def visit_normal_form(context)
      visit_children(context)
    end

    private

    def parse(input)
      PrestoParser::Parser.parse(input).query
    end
  end
end
