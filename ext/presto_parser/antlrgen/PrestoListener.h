
// Generated from ./Presto.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "PrestoParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PrestoParser.
 */
class  PrestoListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterSingleQuery(PrestoParser::SingleQueryContext *ctx) = 0;
  virtual void exitSingleQuery(PrestoParser::SingleQueryContext *ctx) = 0;

  virtual void enterQuery(PrestoParser::QueryContext *ctx) = 0;
  virtual void exitQuery(PrestoParser::QueryContext *ctx) = 0;

  virtual void enterWith(PrestoParser::WithContext *ctx) = 0;
  virtual void exitWith(PrestoParser::WithContext *ctx) = 0;

  virtual void enterTableElement(PrestoParser::TableElementContext *ctx) = 0;
  virtual void exitTableElement(PrestoParser::TableElementContext *ctx) = 0;

  virtual void enterColumnDefinition(PrestoParser::ColumnDefinitionContext *ctx) = 0;
  virtual void exitColumnDefinition(PrestoParser::ColumnDefinitionContext *ctx) = 0;

  virtual void enterLikeClause(PrestoParser::LikeClauseContext *ctx) = 0;
  virtual void exitLikeClause(PrestoParser::LikeClauseContext *ctx) = 0;

  virtual void enterTableProperties(PrestoParser::TablePropertiesContext *ctx) = 0;
  virtual void exitTableProperties(PrestoParser::TablePropertiesContext *ctx) = 0;

  virtual void enterTableProperty(PrestoParser::TablePropertyContext *ctx) = 0;
  virtual void exitTableProperty(PrestoParser::TablePropertyContext *ctx) = 0;

  virtual void enterQueryNoWith(PrestoParser::QueryNoWithContext *ctx) = 0;
  virtual void exitQueryNoWith(PrestoParser::QueryNoWithContext *ctx) = 0;

  virtual void enterQueryTermDefault(PrestoParser::QueryTermDefaultContext *ctx) = 0;
  virtual void exitQueryTermDefault(PrestoParser::QueryTermDefaultContext *ctx) = 0;

  virtual void enterSetOperation(PrestoParser::SetOperationContext *ctx) = 0;
  virtual void exitSetOperation(PrestoParser::SetOperationContext *ctx) = 0;

  virtual void enterQueryPrimaryDefault(PrestoParser::QueryPrimaryDefaultContext *ctx) = 0;
  virtual void exitQueryPrimaryDefault(PrestoParser::QueryPrimaryDefaultContext *ctx) = 0;

  virtual void enterTable(PrestoParser::TableContext *ctx) = 0;
  virtual void exitTable(PrestoParser::TableContext *ctx) = 0;

  virtual void enterInlineTable(PrestoParser::InlineTableContext *ctx) = 0;
  virtual void exitInlineTable(PrestoParser::InlineTableContext *ctx) = 0;

  virtual void enterSubquery(PrestoParser::SubqueryContext *ctx) = 0;
  virtual void exitSubquery(PrestoParser::SubqueryContext *ctx) = 0;

  virtual void enterSortItem(PrestoParser::SortItemContext *ctx) = 0;
  virtual void exitSortItem(PrestoParser::SortItemContext *ctx) = 0;

  virtual void enterQuerySpecification(PrestoParser::QuerySpecificationContext *ctx) = 0;
  virtual void exitQuerySpecification(PrestoParser::QuerySpecificationContext *ctx) = 0;

  virtual void enterGroupBy(PrestoParser::GroupByContext *ctx) = 0;
  virtual void exitGroupBy(PrestoParser::GroupByContext *ctx) = 0;

  virtual void enterSingleGroupingSet(PrestoParser::SingleGroupingSetContext *ctx) = 0;
  virtual void exitSingleGroupingSet(PrestoParser::SingleGroupingSetContext *ctx) = 0;

  virtual void enterRollup(PrestoParser::RollupContext *ctx) = 0;
  virtual void exitRollup(PrestoParser::RollupContext *ctx) = 0;

  virtual void enterCube(PrestoParser::CubeContext *ctx) = 0;
  virtual void exitCube(PrestoParser::CubeContext *ctx) = 0;

  virtual void enterMultipleGroupingSets(PrestoParser::MultipleGroupingSetsContext *ctx) = 0;
  virtual void exitMultipleGroupingSets(PrestoParser::MultipleGroupingSetsContext *ctx) = 0;

  virtual void enterGroupingExpressions(PrestoParser::GroupingExpressionsContext *ctx) = 0;
  virtual void exitGroupingExpressions(PrestoParser::GroupingExpressionsContext *ctx) = 0;

  virtual void enterGroupingSet(PrestoParser::GroupingSetContext *ctx) = 0;
  virtual void exitGroupingSet(PrestoParser::GroupingSetContext *ctx) = 0;

  virtual void enterNamedQuery(PrestoParser::NamedQueryContext *ctx) = 0;
  virtual void exitNamedQuery(PrestoParser::NamedQueryContext *ctx) = 0;

  virtual void enterSetQuantifier(PrestoParser::SetQuantifierContext *ctx) = 0;
  virtual void exitSetQuantifier(PrestoParser::SetQuantifierContext *ctx) = 0;

  virtual void enterSelectSingle(PrestoParser::SelectSingleContext *ctx) = 0;
  virtual void exitSelectSingle(PrestoParser::SelectSingleContext *ctx) = 0;

  virtual void enterSelectAll(PrestoParser::SelectAllContext *ctx) = 0;
  virtual void exitSelectAll(PrestoParser::SelectAllContext *ctx) = 0;

  virtual void enterRelationDefault(PrestoParser::RelationDefaultContext *ctx) = 0;
  virtual void exitRelationDefault(PrestoParser::RelationDefaultContext *ctx) = 0;

  virtual void enterJoinRelation(PrestoParser::JoinRelationContext *ctx) = 0;
  virtual void exitJoinRelation(PrestoParser::JoinRelationContext *ctx) = 0;

  virtual void enterJoinType(PrestoParser::JoinTypeContext *ctx) = 0;
  virtual void exitJoinType(PrestoParser::JoinTypeContext *ctx) = 0;

  virtual void enterJoinCriteria(PrestoParser::JoinCriteriaContext *ctx) = 0;
  virtual void exitJoinCriteria(PrestoParser::JoinCriteriaContext *ctx) = 0;

  virtual void enterSampledRelation(PrestoParser::SampledRelationContext *ctx) = 0;
  virtual void exitSampledRelation(PrestoParser::SampledRelationContext *ctx) = 0;

  virtual void enterSampleType(PrestoParser::SampleTypeContext *ctx) = 0;
  virtual void exitSampleType(PrestoParser::SampleTypeContext *ctx) = 0;

  virtual void enterAliasedRelation(PrestoParser::AliasedRelationContext *ctx) = 0;
  virtual void exitAliasedRelation(PrestoParser::AliasedRelationContext *ctx) = 0;

  virtual void enterColumnAliases(PrestoParser::ColumnAliasesContext *ctx) = 0;
  virtual void exitColumnAliases(PrestoParser::ColumnAliasesContext *ctx) = 0;

  virtual void enterTableName(PrestoParser::TableNameContext *ctx) = 0;
  virtual void exitTableName(PrestoParser::TableNameContext *ctx) = 0;

  virtual void enterSubqueryRelation(PrestoParser::SubqueryRelationContext *ctx) = 0;
  virtual void exitSubqueryRelation(PrestoParser::SubqueryRelationContext *ctx) = 0;

  virtual void enterUnnest(PrestoParser::UnnestContext *ctx) = 0;
  virtual void exitUnnest(PrestoParser::UnnestContext *ctx) = 0;

  virtual void enterParenthesizedRelation(PrestoParser::ParenthesizedRelationContext *ctx) = 0;
  virtual void exitParenthesizedRelation(PrestoParser::ParenthesizedRelationContext *ctx) = 0;

  virtual void enterExpression(PrestoParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(PrestoParser::ExpressionContext *ctx) = 0;

  virtual void enterLogicalNot(PrestoParser::LogicalNotContext *ctx) = 0;
  virtual void exitLogicalNot(PrestoParser::LogicalNotContext *ctx) = 0;

  virtual void enterBooleanDefault(PrestoParser::BooleanDefaultContext *ctx) = 0;
  virtual void exitBooleanDefault(PrestoParser::BooleanDefaultContext *ctx) = 0;

  virtual void enterLogicalBinary(PrestoParser::LogicalBinaryContext *ctx) = 0;
  virtual void exitLogicalBinary(PrestoParser::LogicalBinaryContext *ctx) = 0;

  virtual void enterPredicated(PrestoParser::PredicatedContext *ctx) = 0;
  virtual void exitPredicated(PrestoParser::PredicatedContext *ctx) = 0;

  virtual void enterComparison(PrestoParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(PrestoParser::ComparisonContext *ctx) = 0;

  virtual void enterQuantifiedComparison(PrestoParser::QuantifiedComparisonContext *ctx) = 0;
  virtual void exitQuantifiedComparison(PrestoParser::QuantifiedComparisonContext *ctx) = 0;

  virtual void enterBetween(PrestoParser::BetweenContext *ctx) = 0;
  virtual void exitBetween(PrestoParser::BetweenContext *ctx) = 0;

  virtual void enterInList(PrestoParser::InListContext *ctx) = 0;
  virtual void exitInList(PrestoParser::InListContext *ctx) = 0;

  virtual void enterInSubquery(PrestoParser::InSubqueryContext *ctx) = 0;
  virtual void exitInSubquery(PrestoParser::InSubqueryContext *ctx) = 0;

  virtual void enterLike(PrestoParser::LikeContext *ctx) = 0;
  virtual void exitLike(PrestoParser::LikeContext *ctx) = 0;

  virtual void enterNullPredicate(PrestoParser::NullPredicateContext *ctx) = 0;
  virtual void exitNullPredicate(PrestoParser::NullPredicateContext *ctx) = 0;

  virtual void enterDistinctFrom(PrestoParser::DistinctFromContext *ctx) = 0;
  virtual void exitDistinctFrom(PrestoParser::DistinctFromContext *ctx) = 0;

  virtual void enterValueExpressionDefault(PrestoParser::ValueExpressionDefaultContext *ctx) = 0;
  virtual void exitValueExpressionDefault(PrestoParser::ValueExpressionDefaultContext *ctx) = 0;

  virtual void enterConcatenation(PrestoParser::ConcatenationContext *ctx) = 0;
  virtual void exitConcatenation(PrestoParser::ConcatenationContext *ctx) = 0;

  virtual void enterArithmeticBinary(PrestoParser::ArithmeticBinaryContext *ctx) = 0;
  virtual void exitArithmeticBinary(PrestoParser::ArithmeticBinaryContext *ctx) = 0;

  virtual void enterArithmeticUnary(PrestoParser::ArithmeticUnaryContext *ctx) = 0;
  virtual void exitArithmeticUnary(PrestoParser::ArithmeticUnaryContext *ctx) = 0;

  virtual void enterAtTimeZone(PrestoParser::AtTimeZoneContext *ctx) = 0;
  virtual void exitAtTimeZone(PrestoParser::AtTimeZoneContext *ctx) = 0;

  virtual void enterDereference(PrestoParser::DereferenceContext *ctx) = 0;
  virtual void exitDereference(PrestoParser::DereferenceContext *ctx) = 0;

  virtual void enterTypeConstructor(PrestoParser::TypeConstructorContext *ctx) = 0;
  virtual void exitTypeConstructor(PrestoParser::TypeConstructorContext *ctx) = 0;

  virtual void enterSpecialDateTimeFunction(PrestoParser::SpecialDateTimeFunctionContext *ctx) = 0;
  virtual void exitSpecialDateTimeFunction(PrestoParser::SpecialDateTimeFunctionContext *ctx) = 0;

  virtual void enterSubstring(PrestoParser::SubstringContext *ctx) = 0;
  virtual void exitSubstring(PrestoParser::SubstringContext *ctx) = 0;

  virtual void enterCast(PrestoParser::CastContext *ctx) = 0;
  virtual void exitCast(PrestoParser::CastContext *ctx) = 0;

  virtual void enterLambda(PrestoParser::LambdaContext *ctx) = 0;
  virtual void exitLambda(PrestoParser::LambdaContext *ctx) = 0;

  virtual void enterParenthesizedExpression(PrestoParser::ParenthesizedExpressionContext *ctx) = 0;
  virtual void exitParenthesizedExpression(PrestoParser::ParenthesizedExpressionContext *ctx) = 0;

  virtual void enterParameter(PrestoParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(PrestoParser::ParameterContext *ctx) = 0;

  virtual void enterNormalize(PrestoParser::NormalizeContext *ctx) = 0;
  virtual void exitNormalize(PrestoParser::NormalizeContext *ctx) = 0;

  virtual void enterIntervalLiteral(PrestoParser::IntervalLiteralContext *ctx) = 0;
  virtual void exitIntervalLiteral(PrestoParser::IntervalLiteralContext *ctx) = 0;

  virtual void enterNumericLiteral(PrestoParser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(PrestoParser::NumericLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(PrestoParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(PrestoParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterSimpleCase(PrestoParser::SimpleCaseContext *ctx) = 0;
  virtual void exitSimpleCase(PrestoParser::SimpleCaseContext *ctx) = 0;

  virtual void enterColumnReference(PrestoParser::ColumnReferenceContext *ctx) = 0;
  virtual void exitColumnReference(PrestoParser::ColumnReferenceContext *ctx) = 0;

  virtual void enterNullLiteral(PrestoParser::NullLiteralContext *ctx) = 0;
  virtual void exitNullLiteral(PrestoParser::NullLiteralContext *ctx) = 0;

  virtual void enterRowConstructor(PrestoParser::RowConstructorContext *ctx) = 0;
  virtual void exitRowConstructor(PrestoParser::RowConstructorContext *ctx) = 0;

  virtual void enterSubscript(PrestoParser::SubscriptContext *ctx) = 0;
  virtual void exitSubscript(PrestoParser::SubscriptContext *ctx) = 0;

  virtual void enterSubqueryExpression(PrestoParser::SubqueryExpressionContext *ctx) = 0;
  virtual void exitSubqueryExpression(PrestoParser::SubqueryExpressionContext *ctx) = 0;

  virtual void enterBinaryLiteral(PrestoParser::BinaryLiteralContext *ctx) = 0;
  virtual void exitBinaryLiteral(PrestoParser::BinaryLiteralContext *ctx) = 0;

  virtual void enterExtract(PrestoParser::ExtractContext *ctx) = 0;
  virtual void exitExtract(PrestoParser::ExtractContext *ctx) = 0;

  virtual void enterStringLiteral(PrestoParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(PrestoParser::StringLiteralContext *ctx) = 0;

  virtual void enterArrayConstructor(PrestoParser::ArrayConstructorContext *ctx) = 0;
  virtual void exitArrayConstructor(PrestoParser::ArrayConstructorContext *ctx) = 0;

  virtual void enterFunctionCall(PrestoParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(PrestoParser::FunctionCallContext *ctx) = 0;

  virtual void enterExists(PrestoParser::ExistsContext *ctx) = 0;
  virtual void exitExists(PrestoParser::ExistsContext *ctx) = 0;

  virtual void enterPosition(PrestoParser::PositionContext *ctx) = 0;
  virtual void exitPosition(PrestoParser::PositionContext *ctx) = 0;

  virtual void enterSearchedCase(PrestoParser::SearchedCaseContext *ctx) = 0;
  virtual void exitSearchedCase(PrestoParser::SearchedCaseContext *ctx) = 0;

  virtual void enterTimeZoneInterval(PrestoParser::TimeZoneIntervalContext *ctx) = 0;
  virtual void exitTimeZoneInterval(PrestoParser::TimeZoneIntervalContext *ctx) = 0;

  virtual void enterTimeZoneString(PrestoParser::TimeZoneStringContext *ctx) = 0;
  virtual void exitTimeZoneString(PrestoParser::TimeZoneStringContext *ctx) = 0;

  virtual void enterComparisonOperator(PrestoParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(PrestoParser::ComparisonOperatorContext *ctx) = 0;

  virtual void enterComparisonQuantifier(PrestoParser::ComparisonQuantifierContext *ctx) = 0;
  virtual void exitComparisonQuantifier(PrestoParser::ComparisonQuantifierContext *ctx) = 0;

  virtual void enterBooleanValue(PrestoParser::BooleanValueContext *ctx) = 0;
  virtual void exitBooleanValue(PrestoParser::BooleanValueContext *ctx) = 0;

  virtual void enterInterval(PrestoParser::IntervalContext *ctx) = 0;
  virtual void exitInterval(PrestoParser::IntervalContext *ctx) = 0;

  virtual void enterIntervalField(PrestoParser::IntervalFieldContext *ctx) = 0;
  virtual void exitIntervalField(PrestoParser::IntervalFieldContext *ctx) = 0;

  virtual void enterType(PrestoParser::TypeContext *ctx) = 0;
  virtual void exitType(PrestoParser::TypeContext *ctx) = 0;

  virtual void enterTypeParameter(PrestoParser::TypeParameterContext *ctx) = 0;
  virtual void exitTypeParameter(PrestoParser::TypeParameterContext *ctx) = 0;

  virtual void enterBaseType(PrestoParser::BaseTypeContext *ctx) = 0;
  virtual void exitBaseType(PrestoParser::BaseTypeContext *ctx) = 0;

  virtual void enterWhenClause(PrestoParser::WhenClauseContext *ctx) = 0;
  virtual void exitWhenClause(PrestoParser::WhenClauseContext *ctx) = 0;

  virtual void enterFilter(PrestoParser::FilterContext *ctx) = 0;
  virtual void exitFilter(PrestoParser::FilterContext *ctx) = 0;

  virtual void enterOver(PrestoParser::OverContext *ctx) = 0;
  virtual void exitOver(PrestoParser::OverContext *ctx) = 0;

  virtual void enterWindowFrame(PrestoParser::WindowFrameContext *ctx) = 0;
  virtual void exitWindowFrame(PrestoParser::WindowFrameContext *ctx) = 0;

  virtual void enterUnboundedFrame(PrestoParser::UnboundedFrameContext *ctx) = 0;
  virtual void exitUnboundedFrame(PrestoParser::UnboundedFrameContext *ctx) = 0;

  virtual void enterCurrentRowBound(PrestoParser::CurrentRowBoundContext *ctx) = 0;
  virtual void exitCurrentRowBound(PrestoParser::CurrentRowBoundContext *ctx) = 0;

  virtual void enterBoundedFrame(PrestoParser::BoundedFrameContext *ctx) = 0;
  virtual void exitBoundedFrame(PrestoParser::BoundedFrameContext *ctx) = 0;

  virtual void enterExplainFormat(PrestoParser::ExplainFormatContext *ctx) = 0;
  virtual void exitExplainFormat(PrestoParser::ExplainFormatContext *ctx) = 0;

  virtual void enterExplainType(PrestoParser::ExplainTypeContext *ctx) = 0;
  virtual void exitExplainType(PrestoParser::ExplainTypeContext *ctx) = 0;

  virtual void enterIsolationLevel(PrestoParser::IsolationLevelContext *ctx) = 0;
  virtual void exitIsolationLevel(PrestoParser::IsolationLevelContext *ctx) = 0;

  virtual void enterTransactionAccessMode(PrestoParser::TransactionAccessModeContext *ctx) = 0;
  virtual void exitTransactionAccessMode(PrestoParser::TransactionAccessModeContext *ctx) = 0;

  virtual void enterReadUncommitted(PrestoParser::ReadUncommittedContext *ctx) = 0;
  virtual void exitReadUncommitted(PrestoParser::ReadUncommittedContext *ctx) = 0;

  virtual void enterReadCommitted(PrestoParser::ReadCommittedContext *ctx) = 0;
  virtual void exitReadCommitted(PrestoParser::ReadCommittedContext *ctx) = 0;

  virtual void enterRepeatableRead(PrestoParser::RepeatableReadContext *ctx) = 0;
  virtual void exitRepeatableRead(PrestoParser::RepeatableReadContext *ctx) = 0;

  virtual void enterSerializable(PrestoParser::SerializableContext *ctx) = 0;
  virtual void exitSerializable(PrestoParser::SerializableContext *ctx) = 0;

  virtual void enterPositionalArgument(PrestoParser::PositionalArgumentContext *ctx) = 0;
  virtual void exitPositionalArgument(PrestoParser::PositionalArgumentContext *ctx) = 0;

  virtual void enterNamedArgument(PrestoParser::NamedArgumentContext *ctx) = 0;
  virtual void exitNamedArgument(PrestoParser::NamedArgumentContext *ctx) = 0;

  virtual void enterPrivilege(PrestoParser::PrivilegeContext *ctx) = 0;
  virtual void exitPrivilege(PrestoParser::PrivilegeContext *ctx) = 0;

  virtual void enterQualifiedName(PrestoParser::QualifiedNameContext *ctx) = 0;
  virtual void exitQualifiedName(PrestoParser::QualifiedNameContext *ctx) = 0;

  virtual void enterUnquotedIdentifier(PrestoParser::UnquotedIdentifierContext *ctx) = 0;
  virtual void exitUnquotedIdentifier(PrestoParser::UnquotedIdentifierContext *ctx) = 0;

  virtual void enterQuotedIdentifierAlternative(PrestoParser::QuotedIdentifierAlternativeContext *ctx) = 0;
  virtual void exitQuotedIdentifierAlternative(PrestoParser::QuotedIdentifierAlternativeContext *ctx) = 0;

  virtual void enterBackQuotedIdentifier(PrestoParser::BackQuotedIdentifierContext *ctx) = 0;
  virtual void exitBackQuotedIdentifier(PrestoParser::BackQuotedIdentifierContext *ctx) = 0;

  virtual void enterDigitIdentifier(PrestoParser::DigitIdentifierContext *ctx) = 0;
  virtual void exitDigitIdentifier(PrestoParser::DigitIdentifierContext *ctx) = 0;

  virtual void enterQuotedIdentifier(PrestoParser::QuotedIdentifierContext *ctx) = 0;
  virtual void exitQuotedIdentifier(PrestoParser::QuotedIdentifierContext *ctx) = 0;

  virtual void enterDecimalLiteral(PrestoParser::DecimalLiteralContext *ctx) = 0;
  virtual void exitDecimalLiteral(PrestoParser::DecimalLiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(PrestoParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(PrestoParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterNonReserved(PrestoParser::NonReservedContext *ctx) = 0;
  virtual void exitNonReserved(PrestoParser::NonReservedContext *ctx) = 0;

  virtual void enterNormalForm(PrestoParser::NormalFormContext *ctx) = 0;
  virtual void exitNormalForm(PrestoParser::NormalFormContext *ctx) = 0;


};

