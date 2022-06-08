
// Generated from ./Presto.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "PrestoListener.h"


/**
 * This class provides an empty implementation of PrestoListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PrestoBaseListener : public PrestoListener {
public:

  virtual void enterSingleQuery(PrestoParser::SingleQueryContext * /*ctx*/) override { }
  virtual void exitSingleQuery(PrestoParser::SingleQueryContext * /*ctx*/) override { }

  virtual void enterQuery(PrestoParser::QueryContext * /*ctx*/) override { }
  virtual void exitQuery(PrestoParser::QueryContext * /*ctx*/) override { }

  virtual void enterWith(PrestoParser::WithContext * /*ctx*/) override { }
  virtual void exitWith(PrestoParser::WithContext * /*ctx*/) override { }

  virtual void enterTableElement(PrestoParser::TableElementContext * /*ctx*/) override { }
  virtual void exitTableElement(PrestoParser::TableElementContext * /*ctx*/) override { }

  virtual void enterColumnDefinition(PrestoParser::ColumnDefinitionContext * /*ctx*/) override { }
  virtual void exitColumnDefinition(PrestoParser::ColumnDefinitionContext * /*ctx*/) override { }

  virtual void enterLikeClause(PrestoParser::LikeClauseContext * /*ctx*/) override { }
  virtual void exitLikeClause(PrestoParser::LikeClauseContext * /*ctx*/) override { }

  virtual void enterTableProperties(PrestoParser::TablePropertiesContext * /*ctx*/) override { }
  virtual void exitTableProperties(PrestoParser::TablePropertiesContext * /*ctx*/) override { }

  virtual void enterTableProperty(PrestoParser::TablePropertyContext * /*ctx*/) override { }
  virtual void exitTableProperty(PrestoParser::TablePropertyContext * /*ctx*/) override { }

  virtual void enterQueryNoWith(PrestoParser::QueryNoWithContext * /*ctx*/) override { }
  virtual void exitQueryNoWith(PrestoParser::QueryNoWithContext * /*ctx*/) override { }

  virtual void enterQueryTermDefault(PrestoParser::QueryTermDefaultContext * /*ctx*/) override { }
  virtual void exitQueryTermDefault(PrestoParser::QueryTermDefaultContext * /*ctx*/) override { }

  virtual void enterSetOperation(PrestoParser::SetOperationContext * /*ctx*/) override { }
  virtual void exitSetOperation(PrestoParser::SetOperationContext * /*ctx*/) override { }

  virtual void enterQueryPrimaryDefault(PrestoParser::QueryPrimaryDefaultContext * /*ctx*/) override { }
  virtual void exitQueryPrimaryDefault(PrestoParser::QueryPrimaryDefaultContext * /*ctx*/) override { }

  virtual void enterTable(PrestoParser::TableContext * /*ctx*/) override { }
  virtual void exitTable(PrestoParser::TableContext * /*ctx*/) override { }

  virtual void enterInlineTable(PrestoParser::InlineTableContext * /*ctx*/) override { }
  virtual void exitInlineTable(PrestoParser::InlineTableContext * /*ctx*/) override { }

  virtual void enterSubquery(PrestoParser::SubqueryContext * /*ctx*/) override { }
  virtual void exitSubquery(PrestoParser::SubqueryContext * /*ctx*/) override { }

  virtual void enterSortItem(PrestoParser::SortItemContext * /*ctx*/) override { }
  virtual void exitSortItem(PrestoParser::SortItemContext * /*ctx*/) override { }

  virtual void enterQuerySpecification(PrestoParser::QuerySpecificationContext * /*ctx*/) override { }
  virtual void exitQuerySpecification(PrestoParser::QuerySpecificationContext * /*ctx*/) override { }

  virtual void enterGroupBy(PrestoParser::GroupByContext * /*ctx*/) override { }
  virtual void exitGroupBy(PrestoParser::GroupByContext * /*ctx*/) override { }

  virtual void enterSingleGroupingSet(PrestoParser::SingleGroupingSetContext * /*ctx*/) override { }
  virtual void exitSingleGroupingSet(PrestoParser::SingleGroupingSetContext * /*ctx*/) override { }

  virtual void enterRollup(PrestoParser::RollupContext * /*ctx*/) override { }
  virtual void exitRollup(PrestoParser::RollupContext * /*ctx*/) override { }

  virtual void enterCube(PrestoParser::CubeContext * /*ctx*/) override { }
  virtual void exitCube(PrestoParser::CubeContext * /*ctx*/) override { }

  virtual void enterMultipleGroupingSets(PrestoParser::MultipleGroupingSetsContext * /*ctx*/) override { }
  virtual void exitMultipleGroupingSets(PrestoParser::MultipleGroupingSetsContext * /*ctx*/) override { }

  virtual void enterGroupingExpressions(PrestoParser::GroupingExpressionsContext * /*ctx*/) override { }
  virtual void exitGroupingExpressions(PrestoParser::GroupingExpressionsContext * /*ctx*/) override { }

  virtual void enterGroupingSet(PrestoParser::GroupingSetContext * /*ctx*/) override { }
  virtual void exitGroupingSet(PrestoParser::GroupingSetContext * /*ctx*/) override { }

  virtual void enterNamedQuery(PrestoParser::NamedQueryContext * /*ctx*/) override { }
  virtual void exitNamedQuery(PrestoParser::NamedQueryContext * /*ctx*/) override { }

  virtual void enterSetQuantifier(PrestoParser::SetQuantifierContext * /*ctx*/) override { }
  virtual void exitSetQuantifier(PrestoParser::SetQuantifierContext * /*ctx*/) override { }

  virtual void enterSelectSingle(PrestoParser::SelectSingleContext * /*ctx*/) override { }
  virtual void exitSelectSingle(PrestoParser::SelectSingleContext * /*ctx*/) override { }

  virtual void enterSelectAll(PrestoParser::SelectAllContext * /*ctx*/) override { }
  virtual void exitSelectAll(PrestoParser::SelectAllContext * /*ctx*/) override { }

  virtual void enterRelationDefault(PrestoParser::RelationDefaultContext * /*ctx*/) override { }
  virtual void exitRelationDefault(PrestoParser::RelationDefaultContext * /*ctx*/) override { }

  virtual void enterJoinRelation(PrestoParser::JoinRelationContext * /*ctx*/) override { }
  virtual void exitJoinRelation(PrestoParser::JoinRelationContext * /*ctx*/) override { }

  virtual void enterJoinType(PrestoParser::JoinTypeContext * /*ctx*/) override { }
  virtual void exitJoinType(PrestoParser::JoinTypeContext * /*ctx*/) override { }

  virtual void enterJoinCriteria(PrestoParser::JoinCriteriaContext * /*ctx*/) override { }
  virtual void exitJoinCriteria(PrestoParser::JoinCriteriaContext * /*ctx*/) override { }

  virtual void enterSampledRelation(PrestoParser::SampledRelationContext * /*ctx*/) override { }
  virtual void exitSampledRelation(PrestoParser::SampledRelationContext * /*ctx*/) override { }

  virtual void enterSampleType(PrestoParser::SampleTypeContext * /*ctx*/) override { }
  virtual void exitSampleType(PrestoParser::SampleTypeContext * /*ctx*/) override { }

  virtual void enterAliasedRelation(PrestoParser::AliasedRelationContext * /*ctx*/) override { }
  virtual void exitAliasedRelation(PrestoParser::AliasedRelationContext * /*ctx*/) override { }

  virtual void enterColumnAliases(PrestoParser::ColumnAliasesContext * /*ctx*/) override { }
  virtual void exitColumnAliases(PrestoParser::ColumnAliasesContext * /*ctx*/) override { }

  virtual void enterTableName(PrestoParser::TableNameContext * /*ctx*/) override { }
  virtual void exitTableName(PrestoParser::TableNameContext * /*ctx*/) override { }

  virtual void enterSubqueryRelation(PrestoParser::SubqueryRelationContext * /*ctx*/) override { }
  virtual void exitSubqueryRelation(PrestoParser::SubqueryRelationContext * /*ctx*/) override { }

  virtual void enterUnnest(PrestoParser::UnnestContext * /*ctx*/) override { }
  virtual void exitUnnest(PrestoParser::UnnestContext * /*ctx*/) override { }

  virtual void enterParenthesizedRelation(PrestoParser::ParenthesizedRelationContext * /*ctx*/) override { }
  virtual void exitParenthesizedRelation(PrestoParser::ParenthesizedRelationContext * /*ctx*/) override { }

  virtual void enterExpression(PrestoParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(PrestoParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterLogicalNot(PrestoParser::LogicalNotContext * /*ctx*/) override { }
  virtual void exitLogicalNot(PrestoParser::LogicalNotContext * /*ctx*/) override { }

  virtual void enterBooleanDefault(PrestoParser::BooleanDefaultContext * /*ctx*/) override { }
  virtual void exitBooleanDefault(PrestoParser::BooleanDefaultContext * /*ctx*/) override { }

  virtual void enterLogicalBinary(PrestoParser::LogicalBinaryContext * /*ctx*/) override { }
  virtual void exitLogicalBinary(PrestoParser::LogicalBinaryContext * /*ctx*/) override { }

  virtual void enterPredicated(PrestoParser::PredicatedContext * /*ctx*/) override { }
  virtual void exitPredicated(PrestoParser::PredicatedContext * /*ctx*/) override { }

  virtual void enterComparison(PrestoParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(PrestoParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterQuantifiedComparison(PrestoParser::QuantifiedComparisonContext * /*ctx*/) override { }
  virtual void exitQuantifiedComparison(PrestoParser::QuantifiedComparisonContext * /*ctx*/) override { }

  virtual void enterBetween(PrestoParser::BetweenContext * /*ctx*/) override { }
  virtual void exitBetween(PrestoParser::BetweenContext * /*ctx*/) override { }

  virtual void enterInList(PrestoParser::InListContext * /*ctx*/) override { }
  virtual void exitInList(PrestoParser::InListContext * /*ctx*/) override { }

  virtual void enterInSubquery(PrestoParser::InSubqueryContext * /*ctx*/) override { }
  virtual void exitInSubquery(PrestoParser::InSubqueryContext * /*ctx*/) override { }

  virtual void enterLike(PrestoParser::LikeContext * /*ctx*/) override { }
  virtual void exitLike(PrestoParser::LikeContext * /*ctx*/) override { }

  virtual void enterNullPredicate(PrestoParser::NullPredicateContext * /*ctx*/) override { }
  virtual void exitNullPredicate(PrestoParser::NullPredicateContext * /*ctx*/) override { }

  virtual void enterDistinctFrom(PrestoParser::DistinctFromContext * /*ctx*/) override { }
  virtual void exitDistinctFrom(PrestoParser::DistinctFromContext * /*ctx*/) override { }

  virtual void enterValueExpressionDefault(PrestoParser::ValueExpressionDefaultContext * /*ctx*/) override { }
  virtual void exitValueExpressionDefault(PrestoParser::ValueExpressionDefaultContext * /*ctx*/) override { }

  virtual void enterConcatenation(PrestoParser::ConcatenationContext * /*ctx*/) override { }
  virtual void exitConcatenation(PrestoParser::ConcatenationContext * /*ctx*/) override { }

  virtual void enterArithmeticBinary(PrestoParser::ArithmeticBinaryContext * /*ctx*/) override { }
  virtual void exitArithmeticBinary(PrestoParser::ArithmeticBinaryContext * /*ctx*/) override { }

  virtual void enterArithmeticUnary(PrestoParser::ArithmeticUnaryContext * /*ctx*/) override { }
  virtual void exitArithmeticUnary(PrestoParser::ArithmeticUnaryContext * /*ctx*/) override { }

  virtual void enterAtTimeZone(PrestoParser::AtTimeZoneContext * /*ctx*/) override { }
  virtual void exitAtTimeZone(PrestoParser::AtTimeZoneContext * /*ctx*/) override { }

  virtual void enterDereference(PrestoParser::DereferenceContext * /*ctx*/) override { }
  virtual void exitDereference(PrestoParser::DereferenceContext * /*ctx*/) override { }

  virtual void enterTypeConstructor(PrestoParser::TypeConstructorContext * /*ctx*/) override { }
  virtual void exitTypeConstructor(PrestoParser::TypeConstructorContext * /*ctx*/) override { }

  virtual void enterSpecialDateTimeFunction(PrestoParser::SpecialDateTimeFunctionContext * /*ctx*/) override { }
  virtual void exitSpecialDateTimeFunction(PrestoParser::SpecialDateTimeFunctionContext * /*ctx*/) override { }

  virtual void enterSubstring(PrestoParser::SubstringContext * /*ctx*/) override { }
  virtual void exitSubstring(PrestoParser::SubstringContext * /*ctx*/) override { }

  virtual void enterCast(PrestoParser::CastContext * /*ctx*/) override { }
  virtual void exitCast(PrestoParser::CastContext * /*ctx*/) override { }

  virtual void enterLambda(PrestoParser::LambdaContext * /*ctx*/) override { }
  virtual void exitLambda(PrestoParser::LambdaContext * /*ctx*/) override { }

  virtual void enterParenthesizedExpression(PrestoParser::ParenthesizedExpressionContext * /*ctx*/) override { }
  virtual void exitParenthesizedExpression(PrestoParser::ParenthesizedExpressionContext * /*ctx*/) override { }

  virtual void enterParameter(PrestoParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(PrestoParser::ParameterContext * /*ctx*/) override { }

  virtual void enterNormalize(PrestoParser::NormalizeContext * /*ctx*/) override { }
  virtual void exitNormalize(PrestoParser::NormalizeContext * /*ctx*/) override { }

  virtual void enterIntervalLiteral(PrestoParser::IntervalLiteralContext * /*ctx*/) override { }
  virtual void exitIntervalLiteral(PrestoParser::IntervalLiteralContext * /*ctx*/) override { }

  virtual void enterNumericLiteral(PrestoParser::NumericLiteralContext * /*ctx*/) override { }
  virtual void exitNumericLiteral(PrestoParser::NumericLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(PrestoParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(PrestoParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterSimpleCase(PrestoParser::SimpleCaseContext * /*ctx*/) override { }
  virtual void exitSimpleCase(PrestoParser::SimpleCaseContext * /*ctx*/) override { }

  virtual void enterColumnReference(PrestoParser::ColumnReferenceContext * /*ctx*/) override { }
  virtual void exitColumnReference(PrestoParser::ColumnReferenceContext * /*ctx*/) override { }

  virtual void enterNullLiteral(PrestoParser::NullLiteralContext * /*ctx*/) override { }
  virtual void exitNullLiteral(PrestoParser::NullLiteralContext * /*ctx*/) override { }

  virtual void enterRowConstructor(PrestoParser::RowConstructorContext * /*ctx*/) override { }
  virtual void exitRowConstructor(PrestoParser::RowConstructorContext * /*ctx*/) override { }

  virtual void enterSubscript(PrestoParser::SubscriptContext * /*ctx*/) override { }
  virtual void exitSubscript(PrestoParser::SubscriptContext * /*ctx*/) override { }

  virtual void enterSubqueryExpression(PrestoParser::SubqueryExpressionContext * /*ctx*/) override { }
  virtual void exitSubqueryExpression(PrestoParser::SubqueryExpressionContext * /*ctx*/) override { }

  virtual void enterBinaryLiteral(PrestoParser::BinaryLiteralContext * /*ctx*/) override { }
  virtual void exitBinaryLiteral(PrestoParser::BinaryLiteralContext * /*ctx*/) override { }

  virtual void enterExtract(PrestoParser::ExtractContext * /*ctx*/) override { }
  virtual void exitExtract(PrestoParser::ExtractContext * /*ctx*/) override { }

  virtual void enterStringLiteral(PrestoParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(PrestoParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterArrayConstructor(PrestoParser::ArrayConstructorContext * /*ctx*/) override { }
  virtual void exitArrayConstructor(PrestoParser::ArrayConstructorContext * /*ctx*/) override { }

  virtual void enterFunctionCall(PrestoParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(PrestoParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterExists(PrestoParser::ExistsContext * /*ctx*/) override { }
  virtual void exitExists(PrestoParser::ExistsContext * /*ctx*/) override { }

  virtual void enterPosition(PrestoParser::PositionContext * /*ctx*/) override { }
  virtual void exitPosition(PrestoParser::PositionContext * /*ctx*/) override { }

  virtual void enterSearchedCase(PrestoParser::SearchedCaseContext * /*ctx*/) override { }
  virtual void exitSearchedCase(PrestoParser::SearchedCaseContext * /*ctx*/) override { }

  virtual void enterTimeZoneInterval(PrestoParser::TimeZoneIntervalContext * /*ctx*/) override { }
  virtual void exitTimeZoneInterval(PrestoParser::TimeZoneIntervalContext * /*ctx*/) override { }

  virtual void enterTimeZoneString(PrestoParser::TimeZoneStringContext * /*ctx*/) override { }
  virtual void exitTimeZoneString(PrestoParser::TimeZoneStringContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(PrestoParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(PrestoParser::ComparisonOperatorContext * /*ctx*/) override { }

  virtual void enterComparisonQuantifier(PrestoParser::ComparisonQuantifierContext * /*ctx*/) override { }
  virtual void exitComparisonQuantifier(PrestoParser::ComparisonQuantifierContext * /*ctx*/) override { }

  virtual void enterBooleanValue(PrestoParser::BooleanValueContext * /*ctx*/) override { }
  virtual void exitBooleanValue(PrestoParser::BooleanValueContext * /*ctx*/) override { }

  virtual void enterInterval(PrestoParser::IntervalContext * /*ctx*/) override { }
  virtual void exitInterval(PrestoParser::IntervalContext * /*ctx*/) override { }

  virtual void enterIntervalField(PrestoParser::IntervalFieldContext * /*ctx*/) override { }
  virtual void exitIntervalField(PrestoParser::IntervalFieldContext * /*ctx*/) override { }

  virtual void enterType(PrestoParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(PrestoParser::TypeContext * /*ctx*/) override { }

  virtual void enterTypeParameter(PrestoParser::TypeParameterContext * /*ctx*/) override { }
  virtual void exitTypeParameter(PrestoParser::TypeParameterContext * /*ctx*/) override { }

  virtual void enterBaseType(PrestoParser::BaseTypeContext * /*ctx*/) override { }
  virtual void exitBaseType(PrestoParser::BaseTypeContext * /*ctx*/) override { }

  virtual void enterWhenClause(PrestoParser::WhenClauseContext * /*ctx*/) override { }
  virtual void exitWhenClause(PrestoParser::WhenClauseContext * /*ctx*/) override { }

  virtual void enterFilter(PrestoParser::FilterContext * /*ctx*/) override { }
  virtual void exitFilter(PrestoParser::FilterContext * /*ctx*/) override { }

  virtual void enterOver(PrestoParser::OverContext * /*ctx*/) override { }
  virtual void exitOver(PrestoParser::OverContext * /*ctx*/) override { }

  virtual void enterWindowFrame(PrestoParser::WindowFrameContext * /*ctx*/) override { }
  virtual void exitWindowFrame(PrestoParser::WindowFrameContext * /*ctx*/) override { }

  virtual void enterUnboundedFrame(PrestoParser::UnboundedFrameContext * /*ctx*/) override { }
  virtual void exitUnboundedFrame(PrestoParser::UnboundedFrameContext * /*ctx*/) override { }

  virtual void enterCurrentRowBound(PrestoParser::CurrentRowBoundContext * /*ctx*/) override { }
  virtual void exitCurrentRowBound(PrestoParser::CurrentRowBoundContext * /*ctx*/) override { }

  virtual void enterBoundedFrame(PrestoParser::BoundedFrameContext * /*ctx*/) override { }
  virtual void exitBoundedFrame(PrestoParser::BoundedFrameContext * /*ctx*/) override { }

  virtual void enterExplainFormat(PrestoParser::ExplainFormatContext * /*ctx*/) override { }
  virtual void exitExplainFormat(PrestoParser::ExplainFormatContext * /*ctx*/) override { }

  virtual void enterExplainType(PrestoParser::ExplainTypeContext * /*ctx*/) override { }
  virtual void exitExplainType(PrestoParser::ExplainTypeContext * /*ctx*/) override { }

  virtual void enterIsolationLevel(PrestoParser::IsolationLevelContext * /*ctx*/) override { }
  virtual void exitIsolationLevel(PrestoParser::IsolationLevelContext * /*ctx*/) override { }

  virtual void enterTransactionAccessMode(PrestoParser::TransactionAccessModeContext * /*ctx*/) override { }
  virtual void exitTransactionAccessMode(PrestoParser::TransactionAccessModeContext * /*ctx*/) override { }

  virtual void enterReadUncommitted(PrestoParser::ReadUncommittedContext * /*ctx*/) override { }
  virtual void exitReadUncommitted(PrestoParser::ReadUncommittedContext * /*ctx*/) override { }

  virtual void enterReadCommitted(PrestoParser::ReadCommittedContext * /*ctx*/) override { }
  virtual void exitReadCommitted(PrestoParser::ReadCommittedContext * /*ctx*/) override { }

  virtual void enterRepeatableRead(PrestoParser::RepeatableReadContext * /*ctx*/) override { }
  virtual void exitRepeatableRead(PrestoParser::RepeatableReadContext * /*ctx*/) override { }

  virtual void enterSerializable(PrestoParser::SerializableContext * /*ctx*/) override { }
  virtual void exitSerializable(PrestoParser::SerializableContext * /*ctx*/) override { }

  virtual void enterPositionalArgument(PrestoParser::PositionalArgumentContext * /*ctx*/) override { }
  virtual void exitPositionalArgument(PrestoParser::PositionalArgumentContext * /*ctx*/) override { }

  virtual void enterNamedArgument(PrestoParser::NamedArgumentContext * /*ctx*/) override { }
  virtual void exitNamedArgument(PrestoParser::NamedArgumentContext * /*ctx*/) override { }

  virtual void enterPrivilege(PrestoParser::PrivilegeContext * /*ctx*/) override { }
  virtual void exitPrivilege(PrestoParser::PrivilegeContext * /*ctx*/) override { }

  virtual void enterQualifiedName(PrestoParser::QualifiedNameContext * /*ctx*/) override { }
  virtual void exitQualifiedName(PrestoParser::QualifiedNameContext * /*ctx*/) override { }

  virtual void enterUnquotedIdentifier(PrestoParser::UnquotedIdentifierContext * /*ctx*/) override { }
  virtual void exitUnquotedIdentifier(PrestoParser::UnquotedIdentifierContext * /*ctx*/) override { }

  virtual void enterQuotedIdentifierAlternative(PrestoParser::QuotedIdentifierAlternativeContext * /*ctx*/) override { }
  virtual void exitQuotedIdentifierAlternative(PrestoParser::QuotedIdentifierAlternativeContext * /*ctx*/) override { }

  virtual void enterBackQuotedIdentifier(PrestoParser::BackQuotedIdentifierContext * /*ctx*/) override { }
  virtual void exitBackQuotedIdentifier(PrestoParser::BackQuotedIdentifierContext * /*ctx*/) override { }

  virtual void enterDigitIdentifier(PrestoParser::DigitIdentifierContext * /*ctx*/) override { }
  virtual void exitDigitIdentifier(PrestoParser::DigitIdentifierContext * /*ctx*/) override { }

  virtual void enterQuotedIdentifier(PrestoParser::QuotedIdentifierContext * /*ctx*/) override { }
  virtual void exitQuotedIdentifier(PrestoParser::QuotedIdentifierContext * /*ctx*/) override { }

  virtual void enterDecimalLiteral(PrestoParser::DecimalLiteralContext * /*ctx*/) override { }
  virtual void exitDecimalLiteral(PrestoParser::DecimalLiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(PrestoParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(PrestoParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterNonReserved(PrestoParser::NonReservedContext * /*ctx*/) override { }
  virtual void exitNonReserved(PrestoParser::NonReservedContext * /*ctx*/) override { }

  virtual void enterNormalForm(PrestoParser::NormalFormContext * /*ctx*/) override { }
  virtual void exitNormalForm(PrestoParser::NormalFormContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

