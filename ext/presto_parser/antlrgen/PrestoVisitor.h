
// Generated from ./Presto.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "PrestoParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PrestoParser.
 */
class  PrestoVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PrestoParser.
   */
    virtual std::any visitSingleQuery(PrestoParser::SingleQueryContext *context) = 0;

    virtual std::any visitQuery(PrestoParser::QueryContext *context) = 0;

    virtual std::any visitWith(PrestoParser::WithContext *context) = 0;

    virtual std::any visitTableElement(PrestoParser::TableElementContext *context) = 0;

    virtual std::any visitColumnDefinition(PrestoParser::ColumnDefinitionContext *context) = 0;

    virtual std::any visitLikeClause(PrestoParser::LikeClauseContext *context) = 0;

    virtual std::any visitTableProperties(PrestoParser::TablePropertiesContext *context) = 0;

    virtual std::any visitTableProperty(PrestoParser::TablePropertyContext *context) = 0;

    virtual std::any visitQueryNoWith(PrestoParser::QueryNoWithContext *context) = 0;

    virtual std::any visitQueryTermDefault(PrestoParser::QueryTermDefaultContext *context) = 0;

    virtual std::any visitSetOperation(PrestoParser::SetOperationContext *context) = 0;

    virtual std::any visitQueryPrimaryDefault(PrestoParser::QueryPrimaryDefaultContext *context) = 0;

    virtual std::any visitTable(PrestoParser::TableContext *context) = 0;

    virtual std::any visitInlineTable(PrestoParser::InlineTableContext *context) = 0;

    virtual std::any visitSubquery(PrestoParser::SubqueryContext *context) = 0;

    virtual std::any visitSortItem(PrestoParser::SortItemContext *context) = 0;

    virtual std::any visitQuerySpecification(PrestoParser::QuerySpecificationContext *context) = 0;

    virtual std::any visitGroupBy(PrestoParser::GroupByContext *context) = 0;

    virtual std::any visitSingleGroupingSet(PrestoParser::SingleGroupingSetContext *context) = 0;

    virtual std::any visitRollup(PrestoParser::RollupContext *context) = 0;

    virtual std::any visitCube(PrestoParser::CubeContext *context) = 0;

    virtual std::any visitMultipleGroupingSets(PrestoParser::MultipleGroupingSetsContext *context) = 0;

    virtual std::any visitGroupingExpressions(PrestoParser::GroupingExpressionsContext *context) = 0;

    virtual std::any visitGroupingSet(PrestoParser::GroupingSetContext *context) = 0;

    virtual std::any visitNamedQuery(PrestoParser::NamedQueryContext *context) = 0;

    virtual std::any visitSetQuantifier(PrestoParser::SetQuantifierContext *context) = 0;

    virtual std::any visitSelectSingle(PrestoParser::SelectSingleContext *context) = 0;

    virtual std::any visitSelectAll(PrestoParser::SelectAllContext *context) = 0;

    virtual std::any visitRelationDefault(PrestoParser::RelationDefaultContext *context) = 0;

    virtual std::any visitJoinRelation(PrestoParser::JoinRelationContext *context) = 0;

    virtual std::any visitJoinType(PrestoParser::JoinTypeContext *context) = 0;

    virtual std::any visitJoinCriteria(PrestoParser::JoinCriteriaContext *context) = 0;

    virtual std::any visitSampledRelation(PrestoParser::SampledRelationContext *context) = 0;

    virtual std::any visitSampleType(PrestoParser::SampleTypeContext *context) = 0;

    virtual std::any visitAliasedRelation(PrestoParser::AliasedRelationContext *context) = 0;

    virtual std::any visitColumnAliases(PrestoParser::ColumnAliasesContext *context) = 0;

    virtual std::any visitTableName(PrestoParser::TableNameContext *context) = 0;

    virtual std::any visitSubqueryRelation(PrestoParser::SubqueryRelationContext *context) = 0;

    virtual std::any visitUnnest(PrestoParser::UnnestContext *context) = 0;

    virtual std::any visitParenthesizedRelation(PrestoParser::ParenthesizedRelationContext *context) = 0;

    virtual std::any visitExpression(PrestoParser::ExpressionContext *context) = 0;

    virtual std::any visitLogicalNot(PrestoParser::LogicalNotContext *context) = 0;

    virtual std::any visitBooleanDefault(PrestoParser::BooleanDefaultContext *context) = 0;

    virtual std::any visitLogicalBinary(PrestoParser::LogicalBinaryContext *context) = 0;

    virtual std::any visitPredicated(PrestoParser::PredicatedContext *context) = 0;

    virtual std::any visitComparison(PrestoParser::ComparisonContext *context) = 0;

    virtual std::any visitQuantifiedComparison(PrestoParser::QuantifiedComparisonContext *context) = 0;

    virtual std::any visitBetween(PrestoParser::BetweenContext *context) = 0;

    virtual std::any visitInList(PrestoParser::InListContext *context) = 0;

    virtual std::any visitInSubquery(PrestoParser::InSubqueryContext *context) = 0;

    virtual std::any visitLike(PrestoParser::LikeContext *context) = 0;

    virtual std::any visitNullPredicate(PrestoParser::NullPredicateContext *context) = 0;

    virtual std::any visitDistinctFrom(PrestoParser::DistinctFromContext *context) = 0;

    virtual std::any visitValueExpressionDefault(PrestoParser::ValueExpressionDefaultContext *context) = 0;

    virtual std::any visitConcatenation(PrestoParser::ConcatenationContext *context) = 0;

    virtual std::any visitArithmeticBinary(PrestoParser::ArithmeticBinaryContext *context) = 0;

    virtual std::any visitArithmeticUnary(PrestoParser::ArithmeticUnaryContext *context) = 0;

    virtual std::any visitAtTimeZone(PrestoParser::AtTimeZoneContext *context) = 0;

    virtual std::any visitDereference(PrestoParser::DereferenceContext *context) = 0;

    virtual std::any visitTypeConstructor(PrestoParser::TypeConstructorContext *context) = 0;

    virtual std::any visitSpecialDateTimeFunction(PrestoParser::SpecialDateTimeFunctionContext *context) = 0;

    virtual std::any visitSubstring(PrestoParser::SubstringContext *context) = 0;

    virtual std::any visitCast(PrestoParser::CastContext *context) = 0;

    virtual std::any visitLambda(PrestoParser::LambdaContext *context) = 0;

    virtual std::any visitParenthesizedExpression(PrestoParser::ParenthesizedExpressionContext *context) = 0;

    virtual std::any visitParameter(PrestoParser::ParameterContext *context) = 0;

    virtual std::any visitNormalize(PrestoParser::NormalizeContext *context) = 0;

    virtual std::any visitIntervalLiteral(PrestoParser::IntervalLiteralContext *context) = 0;

    virtual std::any visitNumericLiteral(PrestoParser::NumericLiteralContext *context) = 0;

    virtual std::any visitBooleanLiteral(PrestoParser::BooleanLiteralContext *context) = 0;

    virtual std::any visitSimpleCase(PrestoParser::SimpleCaseContext *context) = 0;

    virtual std::any visitColumnReference(PrestoParser::ColumnReferenceContext *context) = 0;

    virtual std::any visitNullLiteral(PrestoParser::NullLiteralContext *context) = 0;

    virtual std::any visitRowConstructor(PrestoParser::RowConstructorContext *context) = 0;

    virtual std::any visitSubscript(PrestoParser::SubscriptContext *context) = 0;

    virtual std::any visitSubqueryExpression(PrestoParser::SubqueryExpressionContext *context) = 0;

    virtual std::any visitBinaryLiteral(PrestoParser::BinaryLiteralContext *context) = 0;

    virtual std::any visitExtract(PrestoParser::ExtractContext *context) = 0;

    virtual std::any visitStringLiteral(PrestoParser::StringLiteralContext *context) = 0;

    virtual std::any visitArrayConstructor(PrestoParser::ArrayConstructorContext *context) = 0;

    virtual std::any visitFunctionCall(PrestoParser::FunctionCallContext *context) = 0;

    virtual std::any visitExists(PrestoParser::ExistsContext *context) = 0;

    virtual std::any visitPosition(PrestoParser::PositionContext *context) = 0;

    virtual std::any visitSearchedCase(PrestoParser::SearchedCaseContext *context) = 0;

    virtual std::any visitTimeZoneInterval(PrestoParser::TimeZoneIntervalContext *context) = 0;

    virtual std::any visitTimeZoneString(PrestoParser::TimeZoneStringContext *context) = 0;

    virtual std::any visitComparisonOperator(PrestoParser::ComparisonOperatorContext *context) = 0;

    virtual std::any visitComparisonQuantifier(PrestoParser::ComparisonQuantifierContext *context) = 0;

    virtual std::any visitBooleanValue(PrestoParser::BooleanValueContext *context) = 0;

    virtual std::any visitInterval(PrestoParser::IntervalContext *context) = 0;

    virtual std::any visitIntervalField(PrestoParser::IntervalFieldContext *context) = 0;

    virtual std::any visitType(PrestoParser::TypeContext *context) = 0;

    virtual std::any visitTypeParameter(PrestoParser::TypeParameterContext *context) = 0;

    virtual std::any visitBaseType(PrestoParser::BaseTypeContext *context) = 0;

    virtual std::any visitWhenClause(PrestoParser::WhenClauseContext *context) = 0;

    virtual std::any visitFilter(PrestoParser::FilterContext *context) = 0;

    virtual std::any visitOver(PrestoParser::OverContext *context) = 0;

    virtual std::any visitWindowFrame(PrestoParser::WindowFrameContext *context) = 0;

    virtual std::any visitUnboundedFrame(PrestoParser::UnboundedFrameContext *context) = 0;

    virtual std::any visitCurrentRowBound(PrestoParser::CurrentRowBoundContext *context) = 0;

    virtual std::any visitBoundedFrame(PrestoParser::BoundedFrameContext *context) = 0;

    virtual std::any visitExplainFormat(PrestoParser::ExplainFormatContext *context) = 0;

    virtual std::any visitExplainType(PrestoParser::ExplainTypeContext *context) = 0;

    virtual std::any visitIsolationLevel(PrestoParser::IsolationLevelContext *context) = 0;

    virtual std::any visitTransactionAccessMode(PrestoParser::TransactionAccessModeContext *context) = 0;

    virtual std::any visitReadUncommitted(PrestoParser::ReadUncommittedContext *context) = 0;

    virtual std::any visitReadCommitted(PrestoParser::ReadCommittedContext *context) = 0;

    virtual std::any visitRepeatableRead(PrestoParser::RepeatableReadContext *context) = 0;

    virtual std::any visitSerializable(PrestoParser::SerializableContext *context) = 0;

    virtual std::any visitPositionalArgument(PrestoParser::PositionalArgumentContext *context) = 0;

    virtual std::any visitNamedArgument(PrestoParser::NamedArgumentContext *context) = 0;

    virtual std::any visitPrivilege(PrestoParser::PrivilegeContext *context) = 0;

    virtual std::any visitQualifiedName(PrestoParser::QualifiedNameContext *context) = 0;

    virtual std::any visitUnquotedIdentifier(PrestoParser::UnquotedIdentifierContext *context) = 0;

    virtual std::any visitQuotedIdentifierAlternative(PrestoParser::QuotedIdentifierAlternativeContext *context) = 0;

    virtual std::any visitBackQuotedIdentifier(PrestoParser::BackQuotedIdentifierContext *context) = 0;

    virtual std::any visitDigitIdentifier(PrestoParser::DigitIdentifierContext *context) = 0;

    virtual std::any visitQuotedIdentifier(PrestoParser::QuotedIdentifierContext *context) = 0;

    virtual std::any visitDecimalLiteral(PrestoParser::DecimalLiteralContext *context) = 0;

    virtual std::any visitIntegerLiteral(PrestoParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitNonReserved(PrestoParser::NonReservedContext *context) = 0;

    virtual std::any visitNormalForm(PrestoParser::NormalFormContext *context) = 0;


};

