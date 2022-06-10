# frozen_string_literal: true

module PrestoParser
  class AstVisitor
    UnrecognizedContextError = Class.new(StandardError)

    def accept(input)
      context = parse(input)
      visit(context)
    end

    protected

    def visit_children(context)
      context.children.map { |child| visit(child) }
    end

    def visit_terminal_node(context)
      visit_children(context)
    end
    def visit_single_query(context)
      visit_children(context)
    end
    def visit_query(context)
      visit_children(context)
    end
    def visit_query_no_with(context)
      visit_children(context)
    end
    def visit_with(context)
      visit_children(context)
    end
    def visit_named_query(context)
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
    def visit_identifier(context)
      visit_children(context)
    end
    def visit_type(context)
      visit_children(context)
    end
    def visit_qualified_name(context)
      visit_children(context)
    end
    def visit_table_properties(context)
      visit_children(context)
    end
    def visit_table_property(context)
      visit_children(context)
    end
    def visit_expression(context)
      visit_children(context)
    end
    def visit_query_term(context)
      visit_children(context)
    end
    def visit_sort_item(context)
      visit_children(context)
    end
    def visit_query_primary(context)
      visit_children(context)
    end
    def visit_query_term_default(context)
      visit_children(context)
    end
    def visit_set_operation(context)
      visit_children(context)
    end
    def visit_set_quantifier(context)
      visit_children(context)
    end
    def visit_subquery(context)
      visit_children(context)
    end
    def visit_query_specification(context)
      visit_children(context)
    end
    def visit_query_primary_default(context)
      visit_children(context)
    end
    def visit_table(context)
      visit_children(context)
    end
    def visit_inline_table(context)
      visit_children(context)
    end
    def visit_select_item(context)
      visit_children(context)
    end
    def visit_relation(context)
      visit_children(context)
    end
    def visit_group_by(context)
      visit_children(context)
    end
    def visit_boolean_expression(context)
      visit_children(context)
    end
    def visit_grouping_element(context)
      visit_children(context)
    end
    def visit_multiple_grouping_sets(context)
      visit_children(context)
    end
    def visit_grouping_set(context)
      visit_children(context)
    end
    def visit_grouping_expressions(context)
      visit_children(context)
    end
    def visit_single_grouping_set(context)
      visit_children(context)
    end
    def visit_cube(context)
      visit_children(context)
    end
    def visit_rollup(context)
      visit_children(context)
    end
    def visit_column_aliases(context)
      visit_children(context)
    end
    def visit_select_all(context)
      visit_children(context)
    end
    def visit_select_single(context)
      visit_children(context)
    end
    def visit_sampled_relation(context)
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
    def visit_aliased_relation(context)
      visit_children(context)
    end
    def visit_sample_type(context)
      visit_children(context)
    end
    def visit_relation_primary(context)
      visit_children(context)
    end
    def visit_subquery_relation(context)
      visit_children(context)
    end
    def visit_parenthesized_relation(context)
      visit_children(context)
    end
    def visit_unnest(context)
      visit_children(context)
    end
    def visit_table_name(context)
      visit_children(context)
    end
    def visit_logical_not(context)
      visit_children(context)
    end
    def visit_predicated(context)
      visit_children(context)
    end
    def visit_boolean_default(context)
      visit_children(context)
    end
    def visit_logical_binary(context)
      visit_children(context)
    end
    def visit_value_expression(context)
      visit_children(context)
    end
    def visit_predicate(context)
      visit_children(context)
    end
    def visit_comparison_operator(context)
      visit_children(context)
    end
    def visit_comparison(context)
      visit_children(context)
    end
    def visit_like(context)
      visit_children(context)
    end
    def visit_in_subquery(context)
      visit_children(context)
    end
    def visit_distinct_from(context)
      visit_children(context)
    end
    def visit_in_list(context)
      visit_children(context)
    end
    def visit_null_predicate(context)
      visit_children(context)
    end
    def visit_between(context)
      visit_children(context)
    end
    def visit_quantified_comparison(context)
      visit_children(context)
    end
    def visit_comparison_quantifier(context)
      visit_children(context)
    end
    def visit_primary_expression(context)
      visit_children(context)
    end
    def visit_value_expression_default(context)
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
    def visit_time_zone_specifier(context)
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
    def visit_normal_form(context)
      visit_children(context)
    end
    def visit_interval(context)
      visit_children(context)
    end
    def visit_interval_literal(context)
      visit_children(context)
    end
    def visit_number(context)
      visit_children(context)
    end
    def visit_numeric_literal(context)
      visit_children(context)
    end
    def visit_boolean_value(context)
      visit_children(context)
    end
    def visit_boolean_literal(context)
      visit_children(context)
    end
    def visit_simple_case(context)
      visit_children(context)
    end
    def visit_when_clause(context)
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
    def visit_filter(context)
      visit_children(context)
    end
    def visit_over(context)
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
    def visit_interval_field(context)
      visit_children(context)
    end
    def visit_base_type(context)
      visit_children(context)
    end
    def visit_type_parameter(context)
      visit_children(context)
    end
    def visit_window_frame(context)
      visit_children(context)
    end
    def visit_frame_bound(context)
      visit_children(context)
    end
    def visit_bounded_frame(context)
      visit_children(context)
    end
    def visit_unbounded_frame(context)
      visit_children(context)
    end
    def visit_current_row_bound(context)
      visit_children(context)
    end
    def visit_explain_option(context)
      visit_children(context)
    end
    def visit_explain_format(context)
      visit_children(context)
    end
    def visit_explain_type(context)
      visit_children(context)
    end
    def visit_transaction_mode(context)
      visit_children(context)
    end
    def visit_transaction_access_mode(context)
      visit_children(context)
    end
    def visit_isolation_level(context)
      visit_children(context)
    end
    def visit_level_of_isolation(context)
      visit_children(context)
    end
    def visit_read_uncommitted(context)
      visit_children(context)
    end
    def visit_serializable(context)
      visit_children(context)
    end
    def visit_read_committed(context)
      visit_children(context)
    end
    def visit_repeatable_read(context)
      visit_children(context)
    end
    def visit_call_argument(context)
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
    def visit_back_quoted_identifier(context)
      visit_children(context)
    end
    def visit_quoted_identifier(context)
      visit_children(context)
    end
    def visit_quoted_identifier_alternative(context)
      visit_children(context)
    end
    def visit_digit_identifier(context)
      visit_children(context)
    end
    def visit_unquoted_identifier(context)
      visit_children(context)
    end
    def visit_non_reserved(context)
      visit_children(context)
    end
    def visit_decimal_literal(context)
      visit_children(context)
    end
    def visit_integer_literal(context)
      visit_children(context)
    end

    private

    def parse(input)
      PrestoParser::Parser.parse(input).singleQuery
    end

    # rubocop:disable Metrics/AbcSize, Metrics/CyclomaticComplexity, Metrics/MethodLength, Metrics/PerceivedComplexity
    def visit(context)
      case context
      when PrestoParser::TerminalNodeImpl
        visit_terminal_node(context)
      when PrestoParser::SingleQueryContext
        visit_single_query(context)
      when PrestoParser::QueryContext
        visit_query(context)
      when PrestoParser::QueryNoWithContext
        visit_query_no_with(context)
      when PrestoParser::WithContext
        visit_with(context)
      when PrestoParser::NamedQueryContext
        visit_named_query(context)
      when PrestoParser::TableElementContext
        visit_table_element(context)
      when PrestoParser::ColumnDefinitionContext
        visit_column_definition(context)
      when PrestoParser::LikeClauseContext
        visit_like_clause(context)
      when PrestoParser::IdentifierContext
        visit_identifier(context)
      when PrestoParser::TypeContext
        visit_type(context)
      when PrestoParser::QualifiedNameContext
        visit_qualified_name(context)
      when PrestoParser::TablePropertiesContext
        visit_table_properties(context)
      when PrestoParser::TablePropertyContext
        visit_table_property(context)
      when PrestoParser::ExpressionContext
        visit_expression(context)
      when PrestoParser::QueryTermContext
        visit_query_term(context)
      when PrestoParser::SortItemContext
        visit_sort_item(context)
      when PrestoParser::QueryPrimaryContext
        visit_query_primary(context)
      when PrestoParser::QueryTermDefaultContext
        visit_query_term_default(context)
      when PrestoParser::SetOperationContext
        visit_set_operation(context)
      when PrestoParser::SetQuantifierContext
        visit_set_quantifier(context)
      when PrestoParser::SubqueryContext
        visit_subquery(context)
      when PrestoParser::QuerySpecificationContext
        visit_query_specification(context)
      when PrestoParser::QueryPrimaryDefaultContext
        visit_query_primary_default(context)
      when PrestoParser::TableContext
        visit_table(context)
      when PrestoParser::InlineTableContext
        visit_inline_table(context)
      when PrestoParser::SelectItemContext
        visit_select_item(context)
      when PrestoParser::RelationContext
        visit_relation(context)
      when PrestoParser::GroupByContext
        visit_group_by(context)
      when PrestoParser::BooleanExpressionContext
        visit_boolean_expression(context)
      when PrestoParser::GroupingElementContext
        visit_grouping_element(context)
      when PrestoParser::MultipleGroupingSetsContext
        visit_multiple_grouping_sets(context)
      when PrestoParser::GroupingSetContext
        visit_grouping_set(context)
      when PrestoParser::GroupingExpressionsContext
        visit_grouping_expressions(context)
      when PrestoParser::SingleGroupingSetContext
        visit_single_grouping_set(context)
      when PrestoParser::CubeContext
        visit_cube(context)
      when PrestoParser::RollupContext
        visit_rollup(context)
      when PrestoParser::ColumnAliasesContext
        visit_column_aliases(context)
      when PrestoParser::SelectAllContext
        visit_select_all(context)
      when PrestoParser::SelectSingleContext
        visit_select_single(context)
      when PrestoParser::SampledRelationContext
        visit_sampled_relation(context)
      when PrestoParser::RelationDefaultContext
        visit_relation_default(context)
      when PrestoParser::JoinRelationContext
        visit_join_relation(context)
      when PrestoParser::JoinTypeContext
        visit_join_type(context)
      when PrestoParser::JoinCriteriaContext
        visit_join_criteria(context)
      when PrestoParser::AliasedRelationContext
        visit_aliased_relation(context)
      when PrestoParser::SampleTypeContext
        visit_sample_type(context)
      when PrestoParser::RelationPrimaryContext
        visit_relation_primary(context)
      when PrestoParser::SubqueryRelationContext
        visit_subquery_relation(context)
      when PrestoParser::ParenthesizedRelationContext
        visit_parenthesized_relation(context)
      when PrestoParser::UnnestContext
        visit_unnest(context)
      when PrestoParser::TableNameContext
        visit_table_name(context)
      when PrestoParser::LogicalNotContext
        visit_logical_not(context)
      when PrestoParser::PredicatedContext
        visit_predicated(context)
      when PrestoParser::BooleanDefaultContext
        visit_boolean_default(context)
      when PrestoParser::LogicalBinaryContext
        visit_logical_binary(context)
      when PrestoParser::ValueExpressionContext
        visit_value_expression(context)
      when PrestoParser::PredicateContext
        visit_predicate(context)
      when PrestoParser::ComparisonOperatorContext
        visit_comparison_operator(context)
      when PrestoParser::ComparisonContext
        visit_comparison(context)
      when PrestoParser::LikeContext
        visit_like(context)
      when PrestoParser::InSubqueryContext
        visit_in_subquery(context)
      when PrestoParser::DistinctFromContext
        visit_distinct_from(context)
      when PrestoParser::InListContext
        visit_in_list(context)
      when PrestoParser::NullPredicateContext
        visit_null_predicate(context)
      when PrestoParser::BetweenContext
        visit_between(context)
      when PrestoParser::QuantifiedComparisonContext
        visit_quantified_comparison(context)
      when PrestoParser::ComparisonQuantifierContext
        visit_comparison_quantifier(context)
      when PrestoParser::PrimaryExpressionContext
        visit_primary_expression(context)
      when PrestoParser::ValueExpressionDefaultContext
        visit_value_expression_default(context)
      when PrestoParser::ConcatenationContext
        visit_concatenation(context)
      when PrestoParser::ArithmeticBinaryContext
        visit_arithmetic_binary(context)
      when PrestoParser::ArithmeticUnaryContext
        visit_arithmetic_unary(context)
      when PrestoParser::AtTimeZoneContext
        visit_at_time_zone(context)
      when PrestoParser::TimeZoneSpecifierContext
        visit_time_zone_specifier(context)
      when PrestoParser::DereferenceContext
        visit_dereference(context)
      when PrestoParser::TypeConstructorContext
        visit_type_constructor(context)
      when PrestoParser::SpecialDateTimeFunctionContext
        visit_special_date_time_function(context)
      when PrestoParser::SubstringContext
        visit_substring(context)
      when PrestoParser::CastContext
        visit_cast(context)
      when PrestoParser::LambdaContext
        visit_lambda(context)
      when PrestoParser::ParenthesizedExpressionContext
        visit_parenthesized_expression(context)
      when PrestoParser::ParameterContext
        visit_parameter(context)
      when PrestoParser::NormalizeContext
        visit_normalize(context)
      when PrestoParser::NormalFormContext
        visit_normal_form(context)
      when PrestoParser::IntervalContext
        visit_interval(context)
      when PrestoParser::IntervalLiteralContext
        visit_interval_literal(context)
      when PrestoParser::NumberContext
        visit_number(context)
      when PrestoParser::NumericLiteralContext
        visit_numeric_literal(context)
      when PrestoParser::BooleanValueContext
        visit_boolean_value(context)
      when PrestoParser::BooleanLiteralContext
        visit_boolean_literal(context)
      when PrestoParser::SimpleCaseContext
        visit_simple_case(context)
      when PrestoParser::WhenClauseContext
        visit_when_clause(context)
      when PrestoParser::ColumnReferenceContext
        visit_column_reference(context)
      when PrestoParser::NullLiteralContext
        visit_null_literal(context)
      when PrestoParser::RowConstructorContext
        visit_row_constructor(context)
      when PrestoParser::SubscriptContext
        visit_subscript(context)
      when PrestoParser::SubqueryExpressionContext
        visit_subquery_expression(context)
      when PrestoParser::BinaryLiteralContext
        visit_binary_literal(context)
      when PrestoParser::ExtractContext
        visit_extract(context)
      when PrestoParser::StringLiteralContext
        visit_string_literal(context)
      when PrestoParser::ArrayConstructorContext
        visit_array_constructor(context)
      when PrestoParser::FunctionCallContext
        visit_function_call(context)
      when PrestoParser::FilterContext
        visit_filter(context)
      when PrestoParser::OverContext
        visit_over(context)
      when PrestoParser::ExistsContext
        visit_exists(context)
      when PrestoParser::PositionContext
        visit_position(context)
      when PrestoParser::SearchedCaseContext
        visit_searched_case(context)
      when PrestoParser::TimeZoneIntervalContext
        visit_time_zone_interval(context)
      when PrestoParser::TimeZoneStringContext
        visit_time_zone_string(context)
      when PrestoParser::IntervalFieldContext
        visit_interval_field(context)
      when PrestoParser::BaseTypeContext
        visit_base_type(context)
      when PrestoParser::TypeParameterContext
        visit_type_parameter(context)
      when PrestoParser::WindowFrameContext
        visit_window_frame(context)
      when PrestoParser::FrameBoundContext
        visit_frame_bound(context)
      when PrestoParser::BoundedFrameContext
        visit_bounded_frame(context)
      when PrestoParser::UnboundedFrameContext
        visit_unbounded_frame(context)
      when PrestoParser::CurrentRowBoundContext
        visit_current_row_bound(context)
      when PrestoParser::ExplainOptionContext
        visit_explain_option(context)
      when PrestoParser::ExplainFormatContext
        visit_explain_format(context)
      when PrestoParser::ExplainTypeContext
        visit_explain_type(context)
      when PrestoParser::TransactionModeContext
        visit_transaction_mode(context)
      when PrestoParser::TransactionAccessModeContext
        visit_transaction_access_mode(context)
      when PrestoParser::IsolationLevelContext
        visit_isolation_level(context)
      when PrestoParser::LevelOfIsolationContext
        visit_level_of_isolation(context)
      when PrestoParser::ReadUncommittedContext
        visit_read_uncommitted(context)
      when PrestoParser::SerializableContext
        visit_serializable(context)
      when PrestoParser::ReadCommittedContext
        visit_read_committed(context)
      when PrestoParser::RepeatableReadContext
        visit_repeatable_read(context)
      when PrestoParser::CallArgumentContext
        visit_call_argument(context)
      when PrestoParser::PositionalArgumentContext
        visit_positional_argument(context)
      when PrestoParser::NamedArgumentContext
        visit_named_argument(context)
      when PrestoParser::PrivilegeContext
        visit_privilege(context)
      when PrestoParser::BackQuotedIdentifierContext
        visit_back_quoted_identifier(context)
      when PrestoParser::QuotedIdentifierContext
        visit_quoted_identifier(context)
      when PrestoParser::QuotedIdentifierAlternativeContext
        visit_quoted_identifier_alternative(context)
      when PrestoParser::DigitIdentifierContext
        visit_digit_identifier(context)
      when PrestoParser::UnquotedIdentifierContext
        visit_unquoted_identifier(context)
      when PrestoParser::NonReservedContext
        visit_non_reserved(context)
      when PrestoParser::DecimalLiteralContext
        visit_decimal_literal(context)
      when PrestoParser::IntegerLiteralContext
        visit_integer_literal(context)
      when PrestoParser::Context
        raise UnrecognizedContextError, context
      else T.absurd(context)
      end
    end
    # rubocop:enable Metrics/AbcSize, Metrics/CyclomaticComplexity, Metrics/MethodLength, Metrics/PerceivedComplexity
  end
end
