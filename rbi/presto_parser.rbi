# typed: strong

# rubocop:disable Metrics/ModuleLength, Naming/MethodName
module PrestoParser
  class Parser
    sig { params(input: String).returns(PrestoParser::Parser) }
    def self.parse(input); end

    sig { returns(PrestoParser::QueryContext) }
    def query; end
  end
  class Context
    sig { returns(String) }
    def text; end

    sig { returns(T.untyped) }
    def start; end

    sig { returns(T.untyped) }
    def stop; end

    sig { returns(T::Array[PrestoParser::Context]) }
    def children; end

    sig { returns(T.nilable(PrestoParser::Context)) }
    def parent; end

    sig { returns(Integer) }
    def child_count; end
  end

  class TerminalNodeImpl < PrestoParser::Context; end

  class SingleQueryContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryContext) }
    def query; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EOF; end
  end

  class QueryContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryNoWithContext) }
    def query_no_with; end

    sig { returns(PrestoParser::WithContext) }
    def with; end
  end

  class QueryNoWithContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryTermContext) }
    def query_term; end

    sig { returns(PrestoParser::SortItemContext) }
    def sort_item; end

    sig { params(index: Integer).returns(PrestoParser::SortItemContext) }
    def sort_item_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ORDER; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BY; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LIMIT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INTEGER_VALUE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ALL; end
  end

  class WithContext < PrestoParser::Context
    sig { returns(PrestoParser::NamedQueryContext) }
    def named_query; end

    sig { params(index: Integer).returns(PrestoParser::NamedQueryContext) }
    def named_query_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def WITH; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def RECURSIVE; end
  end

  class NamedQueryContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryContext) }
    def query; end

    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::ColumnAliasesContext) }
    def column_aliases; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AS; end
  end

  class TableElementContext < PrestoParser::Context
    sig { returns(PrestoParser::ColumnDefinitionContext) }
    def column_definition; end

    sig { returns(PrestoParser::LikeClauseContext) }
    def like_clause; end
  end

  class ColumnDefinitionContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::TypeContext) }
    def type; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def COMMENT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def STRING; end
  end

  class LikeClauseContext < PrestoParser::Context
    sig { returns(PrestoParser::QualifiedNameContext) }
    def qualified_name; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LIKE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PROPERTIES; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INCLUDING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EXCLUDING; end
  end

  class IdentifierContext < PrestoParser::Context
  end

  class TypeContext < PrestoParser::Context
    sig { returns(PrestoParser::TypeContext) }
    def type; end

    sig { params(index: Integer).returns(PrestoParser::TypeContext) }
    def type_at(index); end

    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { params(index: Integer).returns(PrestoParser::IdentifierContext) }
    def identifier_at(index); end

    sig { returns(PrestoParser::BaseTypeContext) }
    def base_type; end

    sig { returns(PrestoParser::TypeParameterContext) }
    def type_parameter; end

    sig { params(index: Integer).returns(PrestoParser::TypeParameterContext) }
    def type_parameter_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ARRAY; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def GT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MAP; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ROW; end
  end

  class QualifiedNameContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { params(index: Integer).returns(PrestoParser::IdentifierContext) }
    def identifier_at(index); end
  end

  class TablePropertiesContext < PrestoParser::Context
    sig { returns(PrestoParser::TablePropertyContext) }
    def table_property; end

    sig { params(index: Integer).returns(PrestoParser::TablePropertyContext) }
    def table_property_at(index); end
  end

  class TablePropertyContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EQ; end
  end

  class ExpressionContext < PrestoParser::Context
    sig { returns(PrestoParser::BooleanExpressionContext) }
    def boolean_expression; end
  end

  class QueryTermContext < PrestoParser::Context
  end

  class SortItemContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NULLS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ASC; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DESC; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FIRST; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LAST; end
  end

  class QueryPrimaryContext < PrestoParser::Context
  end

  class QueryTermDefaultContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryPrimaryContext) }
    def query_primary; end
  end

  class SetOperationContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryTermContext) }
    def query_term; end

    sig { params(index: Integer).returns(PrestoParser::QueryTermContext) }
    def query_term_at(index); end

    sig { returns(PrestoParser::SetQuantifierContext) }
    def set_quantifier; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INTERSECT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def UNION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EXCEPT; end
  end

  class SetQuantifierContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DISTINCT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ALL; end
  end

  class SubqueryContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryNoWithContext) }
    def query_no_with; end
  end

  class QuerySpecificationContext < PrestoParser::Context
    sig { returns(PrestoParser::SelectItemContext) }
    def select_item; end

    sig { params(index: Integer).returns(PrestoParser::SelectItemContext) }
    def select_item_at(index); end

    sig { returns(PrestoParser::SetQuantifierContext) }
    def set_quantifier; end

    sig { returns(PrestoParser::RelationContext) }
    def relation; end

    sig { params(index: Integer).returns(PrestoParser::RelationContext) }
    def relation_at(index); end

    sig { returns(PrestoParser::GroupByContext) }
    def group_by; end

    sig { returns(PrestoParser::BooleanExpressionContext) }
    def boolean_expression; end

    sig { params(index: Integer).returns(PrestoParser::BooleanExpressionContext) }
    def boolean_expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SELECT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FROM; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def WHERE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def GROUP; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BY; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def HAVING; end
  end

  class QueryPrimaryDefaultContext < PrestoParser::Context
    sig { returns(PrestoParser::QuerySpecificationContext) }
    def query_specification; end
  end

  class TableContext < PrestoParser::Context
    sig { returns(PrestoParser::QualifiedNameContext) }
    def qualified_name; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TABLE; end
  end

  class InlineTableContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def VALUES; end
  end

  class SelectItemContext < PrestoParser::Context
  end

  class RelationContext < PrestoParser::Context
  end

  class GroupByContext < PrestoParser::Context
    sig { returns(PrestoParser::GroupingElementContext) }
    def grouping_element; end

    sig { params(index: Integer).returns(PrestoParser::GroupingElementContext) }
    def grouping_element_at(index); end

    sig { returns(PrestoParser::SetQuantifierContext) }
    def set_quantifier; end
  end

  class BooleanExpressionContext < PrestoParser::Context
  end

  class GroupingElementContext < PrestoParser::Context
  end

  class MultipleGroupingSetsContext < PrestoParser::Context
    sig { returns(PrestoParser::GroupingSetContext) }
    def grouping_set; end

    sig { params(index: Integer).returns(PrestoParser::GroupingSetContext) }
    def grouping_set_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def GROUPING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SETS; end
  end

  class GroupingSetContext < PrestoParser::Context
    sig { returns(PrestoParser::QualifiedNameContext) }
    def qualified_name; end

    sig { params(index: Integer).returns(PrestoParser::QualifiedNameContext) }
    def qualified_name_at(index); end
  end

  class GroupingExpressionsContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end
  end

  class SingleGroupingSetContext < PrestoParser::Context
    sig { returns(PrestoParser::GroupingExpressionsContext) }
    def grouping_expressions; end
  end

  class CubeContext < PrestoParser::Context
    sig { returns(PrestoParser::QualifiedNameContext) }
    def qualified_name; end

    sig { params(index: Integer).returns(PrestoParser::QualifiedNameContext) }
    def qualified_name_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CUBE; end
  end

  class RollupContext < PrestoParser::Context
    sig { returns(PrestoParser::QualifiedNameContext) }
    def qualified_name; end

    sig { params(index: Integer).returns(PrestoParser::QualifiedNameContext) }
    def qualified_name_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ROLLUP; end
  end

  class ColumnAliasesContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { params(index: Integer).returns(PrestoParser::IdentifierContext) }
    def identifier_at(index); end
  end

  class SelectAllContext < PrestoParser::Context
    sig { returns(PrestoParser::QualifiedNameContext) }
    def qualified_name; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ASTERISK; end
  end

  class SelectSingleContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AS; end
  end

  class SampledRelationContext < PrestoParser::Context
    sig { returns(PrestoParser::AliasedRelationContext) }
    def aliased_relation; end

    sig { returns(PrestoParser::SampleTypeContext) }
    def sample_type; end

    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TABLESAMPLE; end
  end

  class RelationDefaultContext < PrestoParser::Context
    sig { returns(PrestoParser::SampledRelationContext) }
    def sampled_relation; end
  end

  class JoinRelationContext < PrestoParser::Context
    sig { returns(PrestoParser::RelationContext) }
    def relation; end

    sig { params(index: Integer).returns(PrestoParser::RelationContext) }
    def relation_at(index); end

    sig { returns(PrestoParser::JoinTypeContext) }
    def join_type; end

    sig { returns(PrestoParser::JoinCriteriaContext) }
    def join_criteria; end

    sig { returns(PrestoParser::SampledRelationContext) }
    def sampled_relation; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CROSS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def JOIN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NATURAL; end
  end

  class JoinTypeContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INNER; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LEFT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def OUTER; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def RIGHT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FULL; end
  end

  class JoinCriteriaContext < PrestoParser::Context
    sig { returns(PrestoParser::BooleanExpressionContext) }
    def boolean_expression; end

    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { params(index: Integer).returns(PrestoParser::IdentifierContext) }
    def identifier_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ON; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def USING; end
  end

  class AliasedRelationContext < PrestoParser::Context
    sig { returns(PrestoParser::RelationPrimaryContext) }
    def relation_primary; end

    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::ColumnAliasesContext) }
    def column_aliases; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AS; end
  end

  class SampleTypeContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BERNOULLI; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SYSTEM; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def POISSONIZED; end
  end

  class RelationPrimaryContext < PrestoParser::Context
  end

  class SubqueryRelationContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryContext) }
    def query; end
  end

  class ParenthesizedRelationContext < PrestoParser::Context
    sig { returns(PrestoParser::RelationContext) }
    def relation; end
  end

  class UnnestContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def UNNEST; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def WITH; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ORDINALITY; end
  end

  class TableNameContext < PrestoParser::Context
    sig { returns(PrestoParser::QualifiedNameContext) }
    def qualified_name; end
  end

  class LogicalNotContext < PrestoParser::Context
    sig { returns(PrestoParser::BooleanExpressionContext) }
    def boolean_expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NOT; end
  end

  class PredicatedContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { returns(PrestoParser::PredicateContext) }
    def predicate; end
  end

  class BooleanDefaultContext < PrestoParser::Context
    sig { returns(PrestoParser::PredicatedContext) }
    def predicated; end
  end

  class LogicalBinaryContext < PrestoParser::Context
    sig { returns(PrestoParser::BooleanExpressionContext) }
    def boolean_expression; end

    sig { params(index: Integer).returns(PrestoParser::BooleanExpressionContext) }
    def boolean_expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AND; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def OR; end
  end

  class ValueExpressionContext < PrestoParser::Context
  end

  class PredicateContext < PrestoParser::Context
  end

  class ComparisonOperatorContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EQ; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NEQ; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LTE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def GT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def GTE; end
  end

  class ComparisonContext < PrestoParser::Context
    sig { returns(PrestoParser::ComparisonOperatorContext) }
    def comparison_operator; end

    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end
  end

  class LikeContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { params(index: Integer).returns(PrestoParser::ValueExpressionContext) }
    def value_expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LIKE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NOT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ESCAPE; end
  end

  class InSubqueryContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryContext) }
    def query; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def IN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NOT; end
  end

  class DistinctFromContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def IS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DISTINCT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FROM; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NOT; end
  end

  class InListContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def IN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NOT; end
  end

  class NullPredicateContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def IS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NULLTOKEN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NOT; end
  end

  class BetweenContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { params(index: Integer).returns(PrestoParser::ValueExpressionContext) }
    def value_expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BETWEEN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AND; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NOT; end
  end

  class QuantifiedComparisonContext < PrestoParser::Context
    sig { returns(PrestoParser::ComparisonOperatorContext) }
    def comparison_operator; end

    sig { returns(PrestoParser::ComparisonQuantifierContext) }
    def comparison_quantifier; end

    sig { returns(PrestoParser::QueryContext) }
    def query; end
  end

  class ComparisonQuantifierContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ALL; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SOME; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ANY; end
  end

  class PrimaryExpressionContext < PrestoParser::Context
  end

  class ValueExpressionDefaultContext < PrestoParser::Context
    sig { returns(PrestoParser::PrimaryExpressionContext) }
    def primary_expression; end
  end

  class ConcatenationContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { params(index: Integer).returns(PrestoParser::ValueExpressionContext) }
    def value_expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CONCAT; end
  end

  class ArithmeticBinaryContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { params(index: Integer).returns(PrestoParser::ValueExpressionContext) }
    def value_expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ASTERISK; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SLASH; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PERCENT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PLUS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MINUS; end
  end

  class ArithmeticUnaryContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MINUS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PLUS; end
  end

  class AtTimeZoneContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { returns(PrestoParser::TimeZoneSpecifierContext) }
    def time_zone_specifier; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AT; end
  end

  class TimeZoneSpecifierContext < PrestoParser::Context
  end

  class DereferenceContext < PrestoParser::Context
    sig { returns(PrestoParser::PrimaryExpressionContext) }
    def primary_expression; end

    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end
  end

  class TypeConstructorContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def STRING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DOUBLE_PRECISION; end
  end

  class SpecialDateTimeFunctionContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CURRENT_DATE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CURRENT_TIME; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INTEGER_VALUE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CURRENT_TIMESTAMP; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LOCALTIME; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LOCALTIMESTAMP; end
  end

  class SubstringContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { params(index: Integer).returns(PrestoParser::ValueExpressionContext) }
    def value_expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SUBSTRING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FROM; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FOR; end
  end

  class CastContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { returns(PrestoParser::TypeContext) }
    def type; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CAST; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TRY_CAST; end
  end

  class LambdaContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { params(index: Integer).returns(PrestoParser::IdentifierContext) }
    def identifier_at(index); end

    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end
  end

  class ParenthesizedExpressionContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end
  end

  class ParameterContext < PrestoParser::Context
  end

  class NormalizeContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { returns(PrestoParser::NormalFormContext) }
    def normal_form; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NORMALIZE; end
  end

  class NormalFormContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NFD; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NFC; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NFKD; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NFKC; end
  end

  class IntervalContext < PrestoParser::Context
    sig { returns(PrestoParser::IntervalFieldContext) }
    def interval_field; end

    sig { params(index: Integer).returns(PrestoParser::IntervalFieldContext) }
    def interval_field_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INTERVAL; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def STRING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TO; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PLUS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MINUS; end
  end

  class IntervalLiteralContext < PrestoParser::Context
    sig { returns(PrestoParser::IntervalContext) }
    def interval; end
  end

  class NumberContext < PrestoParser::Context
  end

  class NumericLiteralContext < PrestoParser::Context
    sig { returns(PrestoParser::NumberContext) }
    def number; end
  end

  class BooleanValueContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TRUE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FALSE; end
  end

  class BooleanLiteralContext < PrestoParser::Context
    sig { returns(PrestoParser::BooleanValueContext) }
    def boolean_value; end
  end

  class SimpleCaseContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { returns(PrestoParser::WhenClauseContext) }
    def when_clause; end

    sig { params(index: Integer).returns(PrestoParser::WhenClauseContext) }
    def when_clause_at(index); end

    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CASE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def END; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ELSE; end
  end

  class WhenClauseContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def WHEN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def THEN; end
  end

  class ColumnReferenceContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end
  end

  class NullLiteralContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NULLTOKEN; end
  end

  class RowConstructorContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ROW; end
  end

  class SubscriptContext < PrestoParser::Context
    sig { returns(PrestoParser::PrimaryExpressionContext) }
    def primary_expression; end

    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end
  end

  class SubqueryExpressionContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryContext) }
    def query; end
  end

  class BinaryLiteralContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BINARY_LITERAL; end
  end

  class ExtractContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EXTRACT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FROM; end
  end

  class StringLiteralContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def STRING; end
  end

  class ArrayConstructorContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ARRAY; end
  end

  class FunctionCallContext < PrestoParser::Context
    sig { returns(PrestoParser::QualifiedNameContext) }
    def qualified_name; end

    sig { returns(PrestoParser::FilterContext) }
    def filter; end

    sig { returns(PrestoParser::OverContext) }
    def over; end

    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end

    sig { returns(PrestoParser::SetQuantifierContext) }
    def set_quantifier; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ASTERISK; end
  end

  class FilterContext < PrestoParser::Context
    sig { returns(PrestoParser::BooleanExpressionContext) }
    def boolean_expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FILTER; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def WHERE; end
  end

  class OverContext < PrestoParser::Context
    sig { returns(PrestoParser::SortItemContext) }
    def sort_item; end

    sig { params(index: Integer).returns(PrestoParser::SortItemContext) }
    def sort_item_at(index); end

    sig { returns(PrestoParser::WindowFrameContext) }
    def window_frame; end

    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { params(index: Integer).returns(PrestoParser::ExpressionContext) }
    def expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def OVER; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PARTITION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BY; end

    sig { params(index: Integer).returns(PrestoParser::TerminalNodeImpl) }
    def BY_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ORDER; end
  end

  class ExistsContext < PrestoParser::Context
    sig { returns(PrestoParser::QueryContext) }
    def query; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EXISTS; end
  end

  class PositionContext < PrestoParser::Context
    sig { returns(PrestoParser::ValueExpressionContext) }
    def value_expression; end

    sig { params(index: Integer).returns(PrestoParser::ValueExpressionContext) }
    def value_expression_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def POSITION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def IN; end
  end

  class SearchedCaseContext < PrestoParser::Context
    sig { returns(PrestoParser::WhenClauseContext) }
    def when_clause; end

    sig { params(index: Integer).returns(PrestoParser::WhenClauseContext) }
    def when_clause_at(index); end

    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CASE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def END; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ELSE; end
  end

  class TimeZoneIntervalContext < PrestoParser::Context
    sig { returns(PrestoParser::IntervalContext) }
    def interval; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TIME; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ZONE; end
  end

  class TimeZoneStringContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TIME; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ZONE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def STRING; end
  end

  class IntervalFieldContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def YEAR; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MONTH; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DAY; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def HOUR; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MINUTE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SECOND; end
  end

  class BaseTypeContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TIME_WITH_TIME_ZONE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TIMESTAMP_WITH_TIME_ZONE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DOUBLE_PRECISION; end
  end

  class TypeParameterContext < PrestoParser::Context
    sig { returns(PrestoParser::TypeContext) }
    def type; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INTEGER_VALUE; end
  end

  class WindowFrameContext < PrestoParser::Context
    sig { returns(PrestoParser::FrameBoundContext) }
    def frame_bound; end

    sig { params(index: Integer).returns(PrestoParser::FrameBoundContext) }
    def frame_bound_at(index); end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def RANGE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ROWS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BETWEEN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AND; end
  end

  class FrameBoundContext < PrestoParser::Context
  end

  class BoundedFrameContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PRECEDING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FOLLOWING; end
  end

  class UnboundedFrameContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def UNBOUNDED; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PRECEDING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FOLLOWING; end
  end

  class CurrentRowBoundContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CURRENT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ROW; end
  end

  class ExplainOptionContext < PrestoParser::Context
  end

  class ExplainFormatContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FORMAT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TEXT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def GRAPHVIZ; end
  end

  class ExplainTypeContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TYPE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LOGICAL; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DISTRIBUTED; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def VALIDATE; end
  end

  class TransactionModeContext < PrestoParser::Context
  end

  class TransactionAccessModeContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def READ; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ONLY; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def WRITE; end
  end

  class IsolationLevelContext < PrestoParser::Context
    sig { returns(PrestoParser::LevelOfIsolationContext) }
    def level_of_isolation; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ISOLATION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LEVEL; end
  end

  class LevelOfIsolationContext < PrestoParser::Context
  end

  class ReadUncommittedContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def READ; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def UNCOMMITTED; end
  end

  class SerializableContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SERIALIZABLE; end
  end

  class ReadCommittedContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def READ; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def COMMITTED; end
  end

  class RepeatableReadContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def REPEATABLE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def READ; end
  end

  class CallArgumentContext < PrestoParser::Context
  end

  class PositionalArgumentContext < PrestoParser::Context
    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end
  end

  class NamedArgumentContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::ExpressionContext) }
    def expression; end
  end

  class PrivilegeContext < PrestoParser::Context
    sig { returns(PrestoParser::IdentifierContext) }
    def identifier; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SELECT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DELETE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INSERT; end
  end

  class BackQuotedIdentifierContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BACKQUOTED_IDENTIFIER; end
  end

  class QuotedIdentifierContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def QUOTED_IDENTIFIER; end
  end

  class QuotedIdentifierAlternativeContext < PrestoParser::Context
    sig { returns(PrestoParser::QuotedIdentifierContext) }
    def quoted_identifier; end
  end

  class DigitIdentifierContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DIGIT_IDENTIFIER; end
  end

  class UnquotedIdentifierContext < PrestoParser::Context
    sig { returns(PrestoParser::NonReservedContext) }
    def non_reserved; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def IDENTIFIER; end
  end

  class NonReservedContext < PrestoParser::Context
    sig { returns(PrestoParser::NormalFormContext) }
    def normal_form; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SHOW; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TABLES; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def COLUMNS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def COLUMN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PARTITIONS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FUNCTIONS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SCHEMAS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CATALOGS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SESSION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ADD; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FILTER; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def AT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def OVER; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PARTITION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def RANGE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ROWS; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PRECEDING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FOLLOWING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CURRENT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ROW; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MAP; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ARRAY; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TINYINT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SMALLINT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INTEGER; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DATE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TIME; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TIMESTAMP; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INTERVAL; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ZONE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def YEAR; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MONTH; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DAY; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def HOUR; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def MINUTE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SECOND; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EXPLAIN; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ANALYZE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def FORMAT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TYPE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TEXT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def GRAPHVIZ; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LOGICAL; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DISTRIBUTED; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def VALIDATE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TABLESAMPLE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SYSTEM; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def BERNOULLI; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def POISSONIZED; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def USE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TO; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SET; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def RESET; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def VIEW; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def REPLACE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def IF; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NULLIF; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def COALESCE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def POSITION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def NO; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DATA; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def START; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def TRANSACTION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def COMMIT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ROLLBACK; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def WORK; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ISOLATION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def LEVEL; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SERIALIZABLE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def REPEATABLE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def COMMITTED; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def UNCOMMITTED; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def READ; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def WRITE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ONLY; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def COMMENT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CALL; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def GRANT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def REVOKE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PRIVILEGES; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PUBLIC; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def OPTION; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SUBSTRING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SCHEMA; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def CASCADE; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def RESTRICT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INPUT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def OUTPUT; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INCLUDING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def EXCLUDING; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def PROPERTIES; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ALL; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def SOME; end

    sig { returns(PrestoParser::TerminalNodeImpl) }
    def ANY; end
  end

  class DecimalLiteralContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def DECIMAL_VALUE; end
  end

  class IntegerLiteralContext < PrestoParser::Context
    sig { returns(PrestoParser::TerminalNodeImpl) }
    def INTEGER_VALUE; end
  end

  class UnrecognizedContextError < StandardError; end

  class AstVisitor
    sig { params(input: String).returns(T.untyped) }
    def accept(input); end

    protected

    sig { params(context: PrestoParser::Context).returns(T::Array[T.untyped]) }
    def visit_children(context); end

    sig { params(context: PrestoParser::TerminalNodeImpl).returns(T.untyped) }
    def visit_terminal_node(context); end
    sig { params(context: PrestoParser::SingleQueryContext).returns(T.untyped) }
    def visit_single_query(context); end
    sig { params(context: PrestoParser::QueryContext).returns(T.untyped) }
    def visit_query(context); end
    sig { params(context: PrestoParser::QueryNoWithContext).returns(T.untyped) }
    def visit_query_no_with(context); end
    sig { params(context: PrestoParser::WithContext).returns(T.untyped) }
    def visit_with(context); end
    sig { params(context: PrestoParser::NamedQueryContext).returns(T.untyped) }
    def visit_named_query(context); end
    sig { params(context: PrestoParser::TableElementContext).returns(T.untyped) }
    def visit_table_element(context); end
    sig { params(context: PrestoParser::ColumnDefinitionContext).returns(T.untyped) }
    def visit_column_definition(context); end
    sig { params(context: PrestoParser::LikeClauseContext).returns(T.untyped) }
    def visit_like_clause(context); end
    sig { params(context: PrestoParser::IdentifierContext).returns(T.untyped) }
    def visit_identifier(context); end
    sig { params(context: PrestoParser::TypeContext).returns(T.untyped) }
    def visit_type(context); end
    sig { params(context: PrestoParser::QualifiedNameContext).returns(T.untyped) }
    def visit_qualified_name(context); end
    sig { params(context: PrestoParser::TablePropertiesContext).returns(T.untyped) }
    def visit_table_properties(context); end
    sig { params(context: PrestoParser::TablePropertyContext).returns(T.untyped) }
    def visit_table_property(context); end
    sig { params(context: PrestoParser::ExpressionContext).returns(T.untyped) }
    def visit_expression(context); end
    sig { params(context: PrestoParser::QueryTermContext).returns(T.untyped) }
    def visit_query_term(context); end
    sig { params(context: PrestoParser::SortItemContext).returns(T.untyped) }
    def visit_sort_item(context); end
    sig { params(context: PrestoParser::QueryPrimaryContext).returns(T.untyped) }
    def visit_query_primary(context); end
    sig { params(context: PrestoParser::QueryTermDefaultContext).returns(T.untyped) }
    def visit_query_term_default(context); end
    sig { params(context: PrestoParser::SetOperationContext).returns(T.untyped) }
    def visit_set_operation(context); end
    sig { params(context: PrestoParser::SetQuantifierContext).returns(T.untyped) }
    def visit_set_quantifier(context); end
    sig { params(context: PrestoParser::SubqueryContext).returns(T.untyped) }
    def visit_subquery(context); end
    sig { params(context: PrestoParser::QuerySpecificationContext).returns(T.untyped) }
    def visit_query_specification(context); end
    sig { params(context: PrestoParser::QueryPrimaryDefaultContext).returns(T.untyped) }
    def visit_query_primary_default(context); end
    sig { params(context: PrestoParser::TableContext).returns(T.untyped) }
    def visit_table(context); end
    sig { params(context: PrestoParser::InlineTableContext).returns(T.untyped) }
    def visit_inline_table(context); end
    sig { params(context: PrestoParser::SelectItemContext).returns(T.untyped) }
    def visit_select_item(context); end
    sig { params(context: PrestoParser::RelationContext).returns(T.untyped) }
    def visit_relation(context); end
    sig { params(context: PrestoParser::GroupByContext).returns(T.untyped) }
    def visit_group_by(context); end
    sig { params(context: PrestoParser::BooleanExpressionContext).returns(T.untyped) }
    def visit_boolean_expression(context); end
    sig { params(context: PrestoParser::GroupingElementContext).returns(T.untyped) }
    def visit_grouping_element(context); end
    sig { params(context: PrestoParser::MultipleGroupingSetsContext).returns(T.untyped) }
    def visit_multiple_grouping_sets(context); end
    sig { params(context: PrestoParser::GroupingSetContext).returns(T.untyped) }
    def visit_grouping_set(context); end
    sig { params(context: PrestoParser::GroupingExpressionsContext).returns(T.untyped) }
    def visit_grouping_expressions(context); end
    sig { params(context: PrestoParser::SingleGroupingSetContext).returns(T.untyped) }
    def visit_single_grouping_set(context); end
    sig { params(context: PrestoParser::CubeContext).returns(T.untyped) }
    def visit_cube(context); end
    sig { params(context: PrestoParser::RollupContext).returns(T.untyped) }
    def visit_rollup(context); end
    sig { params(context: PrestoParser::ColumnAliasesContext).returns(T.untyped) }
    def visit_column_aliases(context); end
    sig { params(context: PrestoParser::SelectAllContext).returns(T.untyped) }
    def visit_select_all(context); end
    sig { params(context: PrestoParser::SelectSingleContext).returns(T.untyped) }
    def visit_select_single(context); end
    sig { params(context: PrestoParser::SampledRelationContext).returns(T.untyped) }
    def visit_sampled_relation(context); end
    sig { params(context: PrestoParser::RelationDefaultContext).returns(T.untyped) }
    def visit_relation_default(context); end
    sig { params(context: PrestoParser::JoinRelationContext).returns(T.untyped) }
    def visit_join_relation(context); end
    sig { params(context: PrestoParser::JoinTypeContext).returns(T.untyped) }
    def visit_join_type(context); end
    sig { params(context: PrestoParser::JoinCriteriaContext).returns(T.untyped) }
    def visit_join_criteria(context); end
    sig { params(context: PrestoParser::AliasedRelationContext).returns(T.untyped) }
    def visit_aliased_relation(context); end
    sig { params(context: PrestoParser::SampleTypeContext).returns(T.untyped) }
    def visit_sample_type(context); end
    sig { params(context: PrestoParser::RelationPrimaryContext).returns(T.untyped) }
    def visit_relation_primary(context); end
    sig { params(context: PrestoParser::SubqueryRelationContext).returns(T.untyped) }
    def visit_subquery_relation(context); end
    sig { params(context: PrestoParser::ParenthesizedRelationContext).returns(T.untyped) }
    def visit_parenthesized_relation(context); end
    sig { params(context: PrestoParser::UnnestContext).returns(T.untyped) }
    def visit_unnest(context); end
    sig { params(context: PrestoParser::TableNameContext).returns(T.untyped) }
    def visit_table_name(context); end
    sig { params(context: PrestoParser::LogicalNotContext).returns(T.untyped) }
    def visit_logical_not(context); end
    sig { params(context: PrestoParser::PredicatedContext).returns(T.untyped) }
    def visit_predicated(context); end
    sig { params(context: PrestoParser::BooleanDefaultContext).returns(T.untyped) }
    def visit_boolean_default(context); end
    sig { params(context: PrestoParser::LogicalBinaryContext).returns(T.untyped) }
    def visit_logical_binary(context); end
    sig { params(context: PrestoParser::ValueExpressionContext).returns(T.untyped) }
    def visit_value_expression(context); end
    sig { params(context: PrestoParser::PredicateContext).returns(T.untyped) }
    def visit_predicate(context); end
    sig { params(context: PrestoParser::ComparisonOperatorContext).returns(T.untyped) }
    def visit_comparison_operator(context); end
    sig { params(context: PrestoParser::ComparisonContext).returns(T.untyped) }
    def visit_comparison(context); end
    sig { params(context: PrestoParser::LikeContext).returns(T.untyped) }
    def visit_like(context); end
    sig { params(context: PrestoParser::InSubqueryContext).returns(T.untyped) }
    def visit_in_subquery(context); end
    sig { params(context: PrestoParser::DistinctFromContext).returns(T.untyped) }
    def visit_distinct_from(context); end
    sig { params(context: PrestoParser::InListContext).returns(T.untyped) }
    def visit_in_list(context); end
    sig { params(context: PrestoParser::NullPredicateContext).returns(T.untyped) }
    def visit_null_predicate(context); end
    sig { params(context: PrestoParser::BetweenContext).returns(T.untyped) }
    def visit_between(context); end
    sig { params(context: PrestoParser::QuantifiedComparisonContext).returns(T.untyped) }
    def visit_quantified_comparison(context); end
    sig { params(context: PrestoParser::ComparisonQuantifierContext).returns(T.untyped) }
    def visit_comparison_quantifier(context); end
    sig { params(context: PrestoParser::PrimaryExpressionContext).returns(T.untyped) }
    def visit_primary_expression(context); end
    sig { params(context: PrestoParser::ValueExpressionDefaultContext).returns(T.untyped) }
    def visit_value_expression_default(context); end
    sig { params(context: PrestoParser::ConcatenationContext).returns(T.untyped) }
    def visit_concatenation(context); end
    sig { params(context: PrestoParser::ArithmeticBinaryContext).returns(T.untyped) }
    def visit_arithmetic_binary(context); end
    sig { params(context: PrestoParser::ArithmeticUnaryContext).returns(T.untyped) }
    def visit_arithmetic_unary(context); end
    sig { params(context: PrestoParser::AtTimeZoneContext).returns(T.untyped) }
    def visit_at_time_zone(context); end
    sig { params(context: PrestoParser::TimeZoneSpecifierContext).returns(T.untyped) }
    def visit_time_zone_specifier(context); end
    sig { params(context: PrestoParser::DereferenceContext).returns(T.untyped) }
    def visit_dereference(context); end
    sig { params(context: PrestoParser::TypeConstructorContext).returns(T.untyped) }
    def visit_type_constructor(context); end
    sig { params(context: PrestoParser::SpecialDateTimeFunctionContext).returns(T.untyped) }
    def visit_special_date_time_function(context); end
    sig { params(context: PrestoParser::SubstringContext).returns(T.untyped) }
    def visit_substring(context); end
    sig { params(context: PrestoParser::CastContext).returns(T.untyped) }
    def visit_cast(context); end
    sig { params(context: PrestoParser::LambdaContext).returns(T.untyped) }
    def visit_lambda(context); end
    sig { params(context: PrestoParser::ParenthesizedExpressionContext).returns(T.untyped) }
    def visit_parenthesized_expression(context); end
    sig { params(context: PrestoParser::ParameterContext).returns(T.untyped) }
    def visit_parameter(context); end
    sig { params(context: PrestoParser::NormalizeContext).returns(T.untyped) }
    def visit_normalize(context); end
    sig { params(context: PrestoParser::NormalFormContext).returns(T.untyped) }
    def visit_normal_form(context); end
    sig { params(context: PrestoParser::IntervalContext).returns(T.untyped) }
    def visit_interval(context); end
    sig { params(context: PrestoParser::IntervalLiteralContext).returns(T.untyped) }
    def visit_interval_literal(context); end
    sig { params(context: PrestoParser::NumberContext).returns(T.untyped) }
    def visit_number(context); end
    sig { params(context: PrestoParser::NumericLiteralContext).returns(T.untyped) }
    def visit_numeric_literal(context); end
    sig { params(context: PrestoParser::BooleanValueContext).returns(T.untyped) }
    def visit_boolean_value(context); end
    sig { params(context: PrestoParser::BooleanLiteralContext).returns(T.untyped) }
    def visit_boolean_literal(context); end
    sig { params(context: PrestoParser::SimpleCaseContext).returns(T.untyped) }
    def visit_simple_case(context); end
    sig { params(context: PrestoParser::WhenClauseContext).returns(T.untyped) }
    def visit_when_clause(context); end
    sig { params(context: PrestoParser::ColumnReferenceContext).returns(T.untyped) }
    def visit_column_reference(context); end
    sig { params(context: PrestoParser::NullLiteralContext).returns(T.untyped) }
    def visit_null_literal(context); end
    sig { params(context: PrestoParser::RowConstructorContext).returns(T.untyped) }
    def visit_row_constructor(context); end
    sig { params(context: PrestoParser::SubscriptContext).returns(T.untyped) }
    def visit_subscript(context); end
    sig { params(context: PrestoParser::SubqueryExpressionContext).returns(T.untyped) }
    def visit_subquery_expression(context); end
    sig { params(context: PrestoParser::BinaryLiteralContext).returns(T.untyped) }
    def visit_binary_literal(context); end
    sig { params(context: PrestoParser::ExtractContext).returns(T.untyped) }
    def visit_extract(context); end
    sig { params(context: PrestoParser::StringLiteralContext).returns(T.untyped) }
    def visit_string_literal(context); end
    sig { params(context: PrestoParser::ArrayConstructorContext).returns(T.untyped) }
    def visit_array_constructor(context); end
    sig { params(context: PrestoParser::FunctionCallContext).returns(T.untyped) }
    def visit_function_call(context); end
    sig { params(context: PrestoParser::FilterContext).returns(T.untyped) }
    def visit_filter(context); end
    sig { params(context: PrestoParser::OverContext).returns(T.untyped) }
    def visit_over(context); end
    sig { params(context: PrestoParser::ExistsContext).returns(T.untyped) }
    def visit_exists(context); end
    sig { params(context: PrestoParser::PositionContext).returns(T.untyped) }
    def visit_position(context); end
    sig { params(context: PrestoParser::SearchedCaseContext).returns(T.untyped) }
    def visit_searched_case(context); end
    sig { params(context: PrestoParser::TimeZoneIntervalContext).returns(T.untyped) }
    def visit_time_zone_interval(context); end
    sig { params(context: PrestoParser::TimeZoneStringContext).returns(T.untyped) }
    def visit_time_zone_string(context); end
    sig { params(context: PrestoParser::IntervalFieldContext).returns(T.untyped) }
    def visit_interval_field(context); end
    sig { params(context: PrestoParser::BaseTypeContext).returns(T.untyped) }
    def visit_base_type(context); end
    sig { params(context: PrestoParser::TypeParameterContext).returns(T.untyped) }
    def visit_type_parameter(context); end
    sig { params(context: PrestoParser::WindowFrameContext).returns(T.untyped) }
    def visit_window_frame(context); end
    sig { params(context: PrestoParser::FrameBoundContext).returns(T.untyped) }
    def visit_frame_bound(context); end
    sig { params(context: PrestoParser::BoundedFrameContext).returns(T.untyped) }
    def visit_bounded_frame(context); end
    sig { params(context: PrestoParser::UnboundedFrameContext).returns(T.untyped) }
    def visit_unbounded_frame(context); end
    sig { params(context: PrestoParser::CurrentRowBoundContext).returns(T.untyped) }
    def visit_current_row_bound(context); end
    sig { params(context: PrestoParser::ExplainOptionContext).returns(T.untyped) }
    def visit_explain_option(context); end
    sig { params(context: PrestoParser::ExplainFormatContext).returns(T.untyped) }
    def visit_explain_format(context); end
    sig { params(context: PrestoParser::ExplainTypeContext).returns(T.untyped) }
    def visit_explain_type(context); end
    sig { params(context: PrestoParser::TransactionModeContext).returns(T.untyped) }
    def visit_transaction_mode(context); end
    sig { params(context: PrestoParser::TransactionAccessModeContext).returns(T.untyped) }
    def visit_transaction_access_mode(context); end
    sig { params(context: PrestoParser::IsolationLevelContext).returns(T.untyped) }
    def visit_isolation_level(context); end
    sig { params(context: PrestoParser::LevelOfIsolationContext).returns(T.untyped) }
    def visit_level_of_isolation(context); end
    sig { params(context: PrestoParser::ReadUncommittedContext).returns(T.untyped) }
    def visit_read_uncommitted(context); end
    sig { params(context: PrestoParser::SerializableContext).returns(T.untyped) }
    def visit_serializable(context); end
    sig { params(context: PrestoParser::ReadCommittedContext).returns(T.untyped) }
    def visit_read_committed(context); end
    sig { params(context: PrestoParser::RepeatableReadContext).returns(T.untyped) }
    def visit_repeatable_read(context); end
    sig { params(context: PrestoParser::CallArgumentContext).returns(T.untyped) }
    def visit_call_argument(context); end
    sig { params(context: PrestoParser::PositionalArgumentContext).returns(T.untyped) }
    def visit_positional_argument(context); end
    sig { params(context: PrestoParser::NamedArgumentContext).returns(T.untyped) }
    def visit_named_argument(context); end
    sig { params(context: PrestoParser::PrivilegeContext).returns(T.untyped) }
    def visit_privilege(context); end
    sig { params(context: PrestoParser::BackQuotedIdentifierContext).returns(T.untyped) }
    def visit_back_quoted_identifier(context); end
    sig { params(context: PrestoParser::QuotedIdentifierContext).returns(T.untyped) }
    def visit_quoted_identifier(context); end
    sig { params(context: PrestoParser::QuotedIdentifierAlternativeContext).returns(T.untyped) }
    def visit_quoted_identifier_alternative(context); end
    sig { params(context: PrestoParser::DigitIdentifierContext).returns(T.untyped) }
    def visit_digit_identifier(context); end
    sig { params(context: PrestoParser::UnquotedIdentifierContext).returns(T.untyped) }
    def visit_unquoted_identifier(context); end
    sig { params(context: PrestoParser::NonReservedContext).returns(T.untyped) }
    def visit_non_reserved(context); end
    sig { params(context: PrestoParser::DecimalLiteralContext).returns(T.untyped) }
    def visit_decimal_literal(context); end
    sig { params(context: PrestoParser::IntegerLiteralContext).returns(T.untyped) }
    def visit_integer_literal(context); end

    private

    sig { params(input: String).returns(PrestoParser::Context) }
    def parse(input); end

    sig { params(context: PrestoParser::Context).returns(T.untyped) }
    def visit(context); end
  end
end
# rubocop:enable Metrics/ModuleLength, Naming/MethodName
