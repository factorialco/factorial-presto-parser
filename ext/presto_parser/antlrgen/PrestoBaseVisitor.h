
// Generated from ./Presto.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"
#include "PrestoVisitor.h"


/**
 * This class provides an empty implementation of PrestoVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PrestoBaseVisitor : public PrestoVisitor {
public:

  virtual std::any visitSingleQuery(PrestoParser::SingleQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuery(PrestoParser::QueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWith(PrestoParser::WithContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableElement(PrestoParser::TableElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnDefinition(PrestoParser::ColumnDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLikeClause(PrestoParser::LikeClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableProperties(PrestoParser::TablePropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableProperty(PrestoParser::TablePropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryNoWith(PrestoParser::QueryNoWithContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryTermDefault(PrestoParser::QueryTermDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetOperation(PrestoParser::SetOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQueryPrimaryDefault(PrestoParser::QueryPrimaryDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTable(PrestoParser::TableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInlineTable(PrestoParser::InlineTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubquery(PrestoParser::SubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSortItem(PrestoParser::SortItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuerySpecification(PrestoParser::QuerySpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupBy(PrestoParser::GroupByContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleGroupingSet(PrestoParser::SingleGroupingSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRollup(PrestoParser::RollupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCube(PrestoParser::CubeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultipleGroupingSets(PrestoParser::MultipleGroupingSetsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupingExpressions(PrestoParser::GroupingExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGroupingSet(PrestoParser::GroupingSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedQuery(PrestoParser::NamedQueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetQuantifier(PrestoParser::SetQuantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectSingle(PrestoParser::SelectSingleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSelectAll(PrestoParser::SelectAllContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationDefault(PrestoParser::RelationDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinRelation(PrestoParser::JoinRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinType(PrestoParser::JoinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitJoinCriteria(PrestoParser::JoinCriteriaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSampledRelation(PrestoParser::SampledRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSampleType(PrestoParser::SampleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAliasedRelation(PrestoParser::AliasedRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnAliases(PrestoParser::ColumnAliasesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTableName(PrestoParser::TableNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubqueryRelation(PrestoParser::SubqueryRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnnest(PrestoParser::UnnestContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesizedRelation(PrestoParser::ParenthesizedRelationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(PrestoParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalNot(PrestoParser::LogicalNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanDefault(PrestoParser::BooleanDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalBinary(PrestoParser::LogicalBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPredicated(PrestoParser::PredicatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(PrestoParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuantifiedComparison(PrestoParser::QuantifiedComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBetween(PrestoParser::BetweenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInList(PrestoParser::InListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInSubquery(PrestoParser::InSubqueryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLike(PrestoParser::LikeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullPredicate(PrestoParser::NullPredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDistinctFrom(PrestoParser::DistinctFromContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueExpressionDefault(PrestoParser::ValueExpressionDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConcatenation(PrestoParser::ConcatenationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticBinary(PrestoParser::ArithmeticBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArithmeticUnary(PrestoParser::ArithmeticUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtTimeZone(PrestoParser::AtTimeZoneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDereference(PrestoParser::DereferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeConstructor(PrestoParser::TypeConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpecialDateTimeFunction(PrestoParser::SpecialDateTimeFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubstring(PrestoParser::SubstringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast(PrestoParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda(PrestoParser::LambdaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesizedExpression(PrestoParser::ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(PrestoParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNormalize(PrestoParser::NormalizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalLiteral(PrestoParser::IntervalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericLiteral(PrestoParser::NumericLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanLiteral(PrestoParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleCase(PrestoParser::SimpleCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitColumnReference(PrestoParser::ColumnReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullLiteral(PrestoParser::NullLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRowConstructor(PrestoParser::RowConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubscript(PrestoParser::SubscriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubqueryExpression(PrestoParser::SubqueryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryLiteral(PrestoParser::BinaryLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExtract(PrestoParser::ExtractContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(PrestoParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayConstructor(PrestoParser::ArrayConstructorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(PrestoParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExists(PrestoParser::ExistsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPosition(PrestoParser::PositionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSearchedCase(PrestoParser::SearchedCaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimeZoneInterval(PrestoParser::TimeZoneIntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTimeZoneString(PrestoParser::TimeZoneStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonOperator(PrestoParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparisonQuantifier(PrestoParser::ComparisonQuantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBooleanValue(PrestoParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterval(PrestoParser::IntervalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntervalField(PrestoParser::IntervalFieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(PrestoParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameter(PrestoParser::TypeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBaseType(PrestoParser::BaseTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhenClause(PrestoParser::WhenClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFilter(PrestoParser::FilterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOver(PrestoParser::OverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWindowFrame(PrestoParser::WindowFrameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnboundedFrame(PrestoParser::UnboundedFrameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCurrentRowBound(PrestoParser::CurrentRowBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoundedFrame(PrestoParser::BoundedFrameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplainFormat(PrestoParser::ExplainFormatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplainType(PrestoParser::ExplainTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIsolationLevel(PrestoParser::IsolationLevelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTransactionAccessMode(PrestoParser::TransactionAccessModeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadUncommitted(PrestoParser::ReadUncommittedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadCommitted(PrestoParser::ReadCommittedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRepeatableRead(PrestoParser::RepeatableReadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSerializable(PrestoParser::SerializableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPositionalArgument(PrestoParser::PositionalArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNamedArgument(PrestoParser::NamedArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrivilege(PrestoParser::PrivilegeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQualifiedName(PrestoParser::QualifiedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnquotedIdentifier(PrestoParser::UnquotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedIdentifierAlternative(PrestoParser::QuotedIdentifierAlternativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBackQuotedIdentifier(PrestoParser::BackQuotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDigitIdentifier(PrestoParser::DigitIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitQuotedIdentifier(PrestoParser::QuotedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecimalLiteral(PrestoParser::DecimalLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(PrestoParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonReserved(PrestoParser::NonReservedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNormalForm(PrestoParser::NormalFormContext *ctx) override {
    return visitChildren(ctx);
  }


};

