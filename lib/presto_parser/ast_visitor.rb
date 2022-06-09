# typed: strict
# frozen_string_literal: true

require 'sorbet'

module PrestoParser
  class AstVisitor
    extend T::Sig

    UnrecognizedContextError = Class.new(StandardError)

    puts 'hola'

    sig { params(input: String).returns(T.untyped) }
    def accept(input)
      context = parse(input)
      visit(context)
    end

    protected

    sig { params(context: PrestoParser::Context).returns(T::Array[T.untyped]) }
    def visit_children(context)
      context.children.map { |child| visit(child) }
    end

    sig { params(context: PrestoParser::QueryContext).returns(T.untyped) }
    def visit_query(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::WithContext).returns(T.untyped) }
    def visit_with(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::TableElementContext).returns(T.untyped) }
    def visit_table_element(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::ColumnDefinitionContext).returns(T.untyped) }
    def visit_column_definition(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::LikeClauseContext).returns(T.untyped) }
    def visit_like_clause(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::TablePropertiesContext).returns(T.untyped) }
    def visit_table_properties(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::TablePropertyContext).returns(T.untyped) }
    def visit_table_property(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::QueryNoWithContext).returns(T.untyped) }
    def visit_query_no_with(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::QueryTermContext).returns(T.untyped) }
    def visit_query_term(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::QueryPrimaryContext).returns(T.untyped) }
    def visit_query_primary(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::SortItemContext).returns(T.untyped) }
    def visit_sort_item(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::QuerySpecificationContext).returns(T.untyped) }
    def visit_query_specification(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::GroupByContext).returns(T.untyped) }
    def visit_group_by(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::GroupingElementContext).returns(T.untyped) }
    def visit_grouping_element(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::GroupingExpressionsContext).returns(T.untyped) }
    def visit_grouping_expressions(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::GroupingSetContext).returns(T.untyped) }
    def visit_grouping_set(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::NamedQueryContext).returns(T.untyped) }
    def visit_named_query(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::SetQuantifierContext).returns(T.untyped) }
    def visit_set_quantifier(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::SelectItemContext).returns(T.untyped) }
    def visit_select_item(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::RelationContext).returns(T.untyped) }
    def visit_relation(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::JoinTypeContext).returns(T.untyped) }
    def visit_join_type(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::JoinCriteriaContext).returns(T.untyped) }
    def visit_join_criteria(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::SampledRelationContext).returns(T.untyped) }
    def visit_sampled_relation(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::SampleTypeContext).returns(T.untyped) }
    def visit_sample_type(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::AliasedRelationContext).returns(T.untyped) }
    def visit_aliased_relation(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::ColumnAliasesContext).returns(T.untyped) }
    def visit_column_aliases(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::RelationPrimaryContext).returns(T.untyped) }
    def visit_relation_primary(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::ExpressionContext).returns(T.untyped) }
    def visit_expression(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::BooleanExpressionContext).returns(T.untyped) }
    def visit_boolean_expression(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::PredicatedContext).returns(T.untyped) }
    def visit_predicated(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::PredicateContext).returns(T.untyped) }
    def visit_predicate(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::ValueExpressionContext).returns(T.untyped) }
    def visit_value_expression(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::PrimaryExpressionContext).returns(T.untyped) }
    def visit_primary_expression(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::TimeZoneSpecifierContext).returns(T.untyped) }
    def visit_time_zone_specifier(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::ComparisonOperatorContext).returns(T.untyped) }
    def visit_comparison_operator(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::ComparisonQuantifierContext).returns(T.untyped) }
    def visit_comparison_quantifier(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::BooleanValueContext).returns(T.untyped) }
    def visit_boolean_value(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::IntervalContext).returns(T.untyped) }
    def visit_interval(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::IntervalFieldContext).returns(T.untyped) }
    def visit_interval_field(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::TypeContext).returns(T.untyped) }
    def visit_type(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::TypeParameterContext).returns(T.untyped) }
    def visit_type_parameter(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::BaseTypeContext).returns(T.untyped) }
    def visit_base_type(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::WhenClauseContext).returns(T.untyped) }
    def visit_when_clause(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::FilterContext).returns(T.untyped) }
    def visit_filter(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::OverContext).returns(T.untyped) }
    def visit_over(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::WindowFrameContext).returns(T.untyped) }
    def visit_window_frame(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::FrameBoundContext).returns(T.untyped) }
    def visit_frame_bound(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::ExplainOptionContext).returns(T.untyped) }
    def visit_explain_option(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::TransactionModeContext).returns(T.untyped) }
    def visit_transaction_mode(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::LevelOfIsolationContext).returns(T.untyped) }
    def visit_level_of_isolation(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::CallArgumentContext).returns(T.untyped) }
    def visit_call_argument(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::PrivilegeContext).returns(T.untyped) }
    def visit_privilege(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::QualifiedNameContext).returns(T.untyped) }
    def visit_qualified_name(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::IdentifierContext).returns(T.untyped) }
    def visit_identifier(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::QuotedIdentifierContext).returns(T.untyped) }
    def visit_quoted_identifier(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::NumberContext).returns(T.untyped) }
    def visit_number(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::NonReservedContext).returns(T.untyped) }
    def visit_non_reserved(context)
      visit_children(context)
    end

    sig { params(context: PrestoParser::NormalFormContext).returns(T.untyped) }
    def visit_normal_form(context)
      visit_children(context)
    end

    private

    sig { params(input: String).returns(PrestoParser::Context) }
    def parse(input)
      PrestoParser::Parser.parse(input).query
    end

    # rubocop:disable Metrics/AbcSize, Metrics/CyclomaticComplexity, Metrics/MethodLength, Metrics/PerceivedComplexity
    sig { params(context: PrestoParser::Context).returns(T.untyped) }
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
        visit_explain_option(context)
      when PrestoParser::TransactionModeContext
        visit_transaction_mode(context)
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
    # rubocop:enable Metrics/AbcSize, Metrics/CyclomaticComplexity, Metrics/MethodLength, Metrics/PerceivedComplexity
  end
end
