#include <iostream>

#include <antlr4-runtime.h>

#include "antlrgen/PrestoParser.h"
#include "antlrgen/PrestoBaseVisitor.h"
#include "antlrgen/PrestoLexer.h"

#include "PrestoErrorListener.h"

#include <rice/rice.hpp>
#include <rice/stl.hpp>

#ifdef _WIN32
#undef OPTIONAL
#undef IN
#undef OUT
#endif

#undef FALSE
#undef TRUE

#undef TYPE

using namespace std;
using namespace Rice;
using namespace antlr4;

Class rb_cSingleQueryContext;
Class rb_cQueryContext;
Class rb_cQueryNoWithContext;
Class rb_cWithContext;
Class rb_cNamedQueryContext;
Class rb_cTableElementContext;
Class rb_cColumnDefinitionContext;
Class rb_cLikeClauseContext;
Class rb_cIdentifierContext;
Class rb_cTypeContext;
Class rb_cQualifiedNameContext;
Class rb_cTablePropertiesContext;
Class rb_cTablePropertyContext;
Class rb_cExpressionContext;
Class rb_cQueryTermContext;
Class rb_cSortItemContext;
Class rb_cQueryPrimaryContext;
Class rb_cQueryTermDefaultContext;
Class rb_cSetOperationContext;
Class rb_cSetQuantifierContext;
Class rb_cSubqueryContext;
Class rb_cQuerySpecificationContext;
Class rb_cQueryPrimaryDefaultContext;
Class rb_cTableContext;
Class rb_cInlineTableContext;
Class rb_cSelectItemContext;
Class rb_cRelationContext;
Class rb_cGroupByContext;
Class rb_cBooleanExpressionContext;
Class rb_cGroupingElementContext;
Class rb_cMultipleGroupingSetsContext;
Class rb_cGroupingSetContext;
Class rb_cGroupingExpressionsContext;
Class rb_cSingleGroupingSetContext;
Class rb_cCubeContext;
Class rb_cRollupContext;
Class rb_cColumnAliasesContext;
Class rb_cSelectAllContext;
Class rb_cSelectSingleContext;
Class rb_cSampledRelationContext;
Class rb_cRelationDefaultContext;
Class rb_cJoinRelationContext;
Class rb_cJoinTypeContext;
Class rb_cJoinCriteriaContext;
Class rb_cAliasedRelationContext;
Class rb_cSampleTypeContext;
Class rb_cRelationPrimaryContext;
Class rb_cSubqueryRelationContext;
Class rb_cParenthesizedRelationContext;
Class rb_cUnnestContext;
Class rb_cTableNameContext;
Class rb_cLogicalNotContext;
Class rb_cPredicatedContext;
Class rb_cBooleanDefaultContext;
Class rb_cLogicalBinaryContext;
Class rb_cValueExpressionContext;
Class rb_cPredicateContext;
Class rb_cComparisonOperatorContext;
Class rb_cComparisonContext;
Class rb_cLikeContext;
Class rb_cInSubqueryContext;
Class rb_cDistinctFromContext;
Class rb_cInListContext;
Class rb_cNullPredicateContext;
Class rb_cBetweenContext;
Class rb_cQuantifiedComparisonContext;
Class rb_cComparisonQuantifierContext;
Class rb_cPrimaryExpressionContext;
Class rb_cValueExpressionDefaultContext;
Class rb_cConcatenationContext;
Class rb_cArithmeticBinaryContext;
Class rb_cArithmeticUnaryContext;
Class rb_cAtTimeZoneContext;
Class rb_cTimeZoneSpecifierContext;
Class rb_cDereferenceContext;
Class rb_cTypeConstructorContext;
Class rb_cSpecialDateTimeFunctionContext;
Class rb_cSubstringContext;
Class rb_cCastContext;
Class rb_cLambdaContext;
Class rb_cParenthesizedExpressionContext;
Class rb_cParameterContext;
Class rb_cNormalizeContext;
Class rb_cNormalFormContext;
Class rb_cIntervalContext;
Class rb_cIntervalLiteralContext;
Class rb_cNumberContext;
Class rb_cNumericLiteralContext;
Class rb_cBooleanValueContext;
Class rb_cBooleanLiteralContext;
Class rb_cSimpleCaseContext;
Class rb_cWhenClauseContext;
Class rb_cColumnReferenceContext;
Class rb_cNullLiteralContext;
Class rb_cRowConstructorContext;
Class rb_cSubscriptContext;
Class rb_cSubqueryExpressionContext;
Class rb_cBinaryLiteralContext;
Class rb_cExtractContext;
Class rb_cStringLiteralContext;
Class rb_cArrayConstructorContext;
Class rb_cFunctionCallContext;
Class rb_cFilterContext;
Class rb_cOverContext;
Class rb_cExistsContext;
Class rb_cPositionContext;
Class rb_cSearchedCaseContext;
Class rb_cTimeZoneIntervalContext;
Class rb_cTimeZoneStringContext;
Class rb_cIntervalFieldContext;
Class rb_cBaseTypeContext;
Class rb_cTypeParameterContext;
Class rb_cWindowFrameContext;
Class rb_cFrameBoundContext;
Class rb_cBoundedFrameContext;
Class rb_cUnboundedFrameContext;
Class rb_cCurrentRowBoundContext;
Class rb_cExplainOptionContext;
Class rb_cExplainFormatContext;
Class rb_cExplainTypeContext;
Class rb_cTransactionModeContext;
Class rb_cTransactionAccessModeContext;
Class rb_cIsolationLevelContext;
Class rb_cLevelOfIsolationContext;
Class rb_cReadUncommittedContext;
Class rb_cSerializableContext;
Class rb_cReadCommittedContext;
Class rb_cRepeatableReadContext;
Class rb_cCallArgumentContext;
Class rb_cPositionalArgumentContext;
Class rb_cNamedArgumentContext;
Class rb_cPrivilegeContext;
Class rb_cBackQuotedIdentifierContext;
Class rb_cQuotedIdentifierContext;
Class rb_cQuotedIdentifierAlternativeContext;
Class rb_cDigitIdentifierContext;
Class rb_cUnquotedIdentifierContext;
Class rb_cNonReservedContext;
Class rb_cDecimalLiteralContext;
Class rb_cIntegerLiteralContext;
Class rb_cToken;
Class rb_cParser;
Class rb_cParseTree;
Class rb_cTerminalNode;
Class rb_cContextProxy;
VALUE rb_eSyntaxError;

namespace Rice::detail {
  template <>
  class To_Ruby<Token*> {
  public:
    VALUE convert(Token* const &x) {
      if (!x) return Nil;
      return Data_Object<Token>(x, false, rb_cToken);
    }
  };

  template <>
  class To_Ruby<tree::ParseTree*> {
  public:
    VALUE convert(tree::ParseTree* const &x) {
      if (!x) return Nil;
      return Data_Object<tree::ParseTree>(x, false, rb_cParseTree);
    }
  };

  template <>
  class To_Ruby<tree::TerminalNode*> {
  public:
    VALUE convert(tree::TerminalNode* const &x) {
      if (!x) return Nil;
      return Data_Object<tree::TerminalNode>(x, false, rb_cTerminalNode);
    }
  };
}

class ContextProxy {
public:
  ContextProxy(tree::ParseTree* orig) {
    this -> orig = orig;
  }

  tree::ParseTree* getOriginal() {
    return orig;
  }

  std::string getText() {
    return orig -> getText();
  }

  Object getStart() {
    auto token = ((ParserRuleContext*) orig) -> getStart();

    return detail::To_Ruby<Token*>().convert(token);
  }

  Object getStop() {
    auto token = ((ParserRuleContext*) orig) -> getStop();

    return detail::To_Ruby<Token*>().convert(token);
  }

  Array getChildren() {
    Array children;
    if (orig != nullptr) {
      for (auto it = orig -> children.begin(); it != orig -> children.end(); it ++) {
        Object parseTree = ContextProxy::wrapParseTree(*it);

        if (parseTree != Nil) {
          children.push(parseTree);
        }
      }
    }
    return children;
  }

  Object getParent() {
    return orig == nullptr ? Nil : ContextProxy::wrapParseTree(orig -> parent);
  }

  size_t childCount() {
    return orig == nullptr ? 0 : orig -> children.size();
  }

  bool doubleEquals(Object other) {
    if (other.is_a(rb_cContextProxy)) {
      return detail::From_Ruby<ContextProxy*>().convert(other) -> getOriginal() == getOriginal();
    } else {
      return false;
    }
  }

private:

  static Object wrapParseTree(tree::ParseTree* node);

protected:
  tree::ParseTree* orig = nullptr;
};

class TerminalNodeProxy : public ContextProxy {
public:
  TerminalNodeProxy(tree::ParseTree* tree) : ContextProxy(tree) { }
};


class SingleQueryContextProxy : public ContextProxy {
public:
  SingleQueryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query();
  Object EOF();
};

class QueryContextProxy : public ContextProxy {
public:
  QueryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object queryNoWith();
  Object with();

};

class QueryNoWithContextProxy : public ContextProxy {
public:
  QueryNoWithContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object queryTerm();
  Object sortItem();
  Object sortItemAt(size_t i);
  Object ORDER();
  Object BY();
  Object LIMIT();
  Object INTEGER_VALUE();
  Object ALL();
};

class WithContextProxy : public ContextProxy {
public:
  WithContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object namedQuery();
  Object namedQueryAt(size_t i);
  Object WITH();
  Object RECURSIVE();
};

class NamedQueryContextProxy : public ContextProxy {
public:
  NamedQueryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query();
  Object identifier();
  Object columnAliases();
  Object AS();
};

class TableElementContextProxy : public ContextProxy {
public:
  TableElementContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object columnDefinition();
  Object likeClause();

};

class ColumnDefinitionContextProxy : public ContextProxy {
public:
  ColumnDefinitionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object type();
  Object COMMENT();
  Object STRING();
};

class LikeClauseContextProxy : public ContextProxy {
public:
  LikeClauseContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object qualifiedName();
  Object LIKE();
  Object PROPERTIES();
  Object INCLUDING();
  Object EXCLUDING();
};

class IdentifierContextProxy : public ContextProxy {
public:
  IdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class TypeContextProxy : public ContextProxy {
public:
  TypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object typeAt(size_t i);
  Object identifier();
  Object identifierAt(size_t i);
  Object baseType();
  Object typeParameter();
  Object typeParameterAt(size_t i);
  Object ARRAY();
  Object LT();
  Object GT();
  Object MAP();
  Object ROW();
};

class QualifiedNameContextProxy : public ContextProxy {
public:
  QualifiedNameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object identifierAt(size_t i);

};

class TablePropertiesContextProxy : public ContextProxy {
public:
  TablePropertiesContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object tableProperty();
  Object tablePropertyAt(size_t i);

};

class TablePropertyContextProxy : public ContextProxy {
public:
  TablePropertyContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object expression();
  Object EQ();
};

class ExpressionContextProxy : public ContextProxy {
public:
  ExpressionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object booleanExpression();

};

class QueryTermContextProxy : public ContextProxy {
public:
  QueryTermContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class SortItemContextProxy : public ContextProxy {
public:
  SortItemContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object NULLS();
  Object ASC();
  Object DESC();
  Object FIRST();
  Object LAST();
};

class QueryPrimaryContextProxy : public ContextProxy {
public:
  QueryPrimaryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class QueryTermDefaultContextProxy : public ContextProxy {
public:
  QueryTermDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object queryPrimary();

};

class SetOperationContextProxy : public ContextProxy {
public:
  SetOperationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object queryTerm();
  Object queryTermAt(size_t i);
  Object setQuantifier();
  Object INTERSECT();
  Object UNION();
  Object EXCEPT();
};

class SetQuantifierContextProxy : public ContextProxy {
public:
  SetQuantifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object DISTINCT();
  Object ALL();
};

class SubqueryContextProxy : public ContextProxy {
public:
  SubqueryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object queryNoWith();

};

class QuerySpecificationContextProxy : public ContextProxy {
public:
  QuerySpecificationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object selectItem();
  Object selectItemAt(size_t i);
  Object setQuantifier();
  Object relation();
  Object relationAt(size_t i);
  Object groupBy();
  Object booleanExpression();
  Object booleanExpressionAt(size_t i);
  Object SELECT();
  Object FROM();
  Object WHERE();
  Object GROUP();
  Object BY();
  Object HAVING();
};

class QueryPrimaryDefaultContextProxy : public ContextProxy {
public:
  QueryPrimaryDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object querySpecification();

};

class TableContextProxy : public ContextProxy {
public:
  TableContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object qualifiedName();
  Object TABLE();
};

class InlineTableContextProxy : public ContextProxy {
public:
  InlineTableContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object expressionAt(size_t i);
  Object VALUES();
};

class SelectItemContextProxy : public ContextProxy {
public:
  SelectItemContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class RelationContextProxy : public ContextProxy {
public:
  RelationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class GroupByContextProxy : public ContextProxy {
public:
  GroupByContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object groupingElement();
  Object groupingElementAt(size_t i);
  Object setQuantifier();

};

class BooleanExpressionContextProxy : public ContextProxy {
public:
  BooleanExpressionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class GroupingElementContextProxy : public ContextProxy {
public:
  GroupingElementContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class MultipleGroupingSetsContextProxy : public ContextProxy {
public:
  MultipleGroupingSetsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object groupingSet();
  Object groupingSetAt(size_t i);
  Object GROUPING();
  Object SETS();
};

class GroupingSetContextProxy : public ContextProxy {
public:
  GroupingSetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object qualifiedName();
  Object qualifiedNameAt(size_t i);

};

class GroupingExpressionsContextProxy : public ContextProxy {
public:
  GroupingExpressionsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object expressionAt(size_t i);

};

class SingleGroupingSetContextProxy : public ContextProxy {
public:
  SingleGroupingSetContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object groupingExpressions();

};

class CubeContextProxy : public ContextProxy {
public:
  CubeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object qualifiedName();
  Object qualifiedNameAt(size_t i);
  Object CUBE();
};

class RollupContextProxy : public ContextProxy {
public:
  RollupContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object qualifiedName();
  Object qualifiedNameAt(size_t i);
  Object ROLLUP();
};

class ColumnAliasesContextProxy : public ContextProxy {
public:
  ColumnAliasesContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object identifierAt(size_t i);

};

class SelectAllContextProxy : public ContextProxy {
public:
  SelectAllContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object qualifiedName();
  Object ASTERISK();
};

class SelectSingleContextProxy : public ContextProxy {
public:
  SelectSingleContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object identifier();
  Object AS();
};

class SampledRelationContextProxy : public ContextProxy {
public:
  SampledRelationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object aliasedRelation();
  Object sampleType();
  Object expression();
  Object TABLESAMPLE();
};

class RelationDefaultContextProxy : public ContextProxy {
public:
  RelationDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object sampledRelation();

};

class JoinRelationContextProxy : public ContextProxy {
public:
  JoinRelationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object relation();
  Object relationAt(size_t i);
  Object joinType();
  Object joinCriteria();
  Object sampledRelation();
  Object CROSS();
  Object JOIN();
  Object NATURAL();
};

class JoinTypeContextProxy : public ContextProxy {
public:
  JoinTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object INNER();
  Object LEFT();
  Object OUTER();
  Object RIGHT();
  Object FULL();
};

class JoinCriteriaContextProxy : public ContextProxy {
public:
  JoinCriteriaContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object booleanExpression();
  Object identifier();
  Object identifierAt(size_t i);
  Object ON();
  Object USING();
};

class AliasedRelationContextProxy : public ContextProxy {
public:
  AliasedRelationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object relationPrimary();
  Object identifier();
  Object columnAliases();
  Object AS();
};

class SampleTypeContextProxy : public ContextProxy {
public:
  SampleTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object BERNOULLI();
  Object SYSTEM();
  Object POISSONIZED();
};

class RelationPrimaryContextProxy : public ContextProxy {
public:
  RelationPrimaryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class SubqueryRelationContextProxy : public ContextProxy {
public:
  SubqueryRelationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query();

};

class ParenthesizedRelationContextProxy : public ContextProxy {
public:
  ParenthesizedRelationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object relation();

};

class UnnestContextProxy : public ContextProxy {
public:
  UnnestContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object expressionAt(size_t i);
  Object UNNEST();
  Object WITH();
  Object ORDINALITY();
};

class TableNameContextProxy : public ContextProxy {
public:
  TableNameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object qualifiedName();

};

class LogicalNotContextProxy : public ContextProxy {
public:
  LogicalNotContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object booleanExpression();
  Object NOT();
};

class PredicatedContextProxy : public ContextProxy {
public:
  PredicatedContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object predicate();

};

class BooleanDefaultContextProxy : public ContextProxy {
public:
  BooleanDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object predicated();

};

class LogicalBinaryContextProxy : public ContextProxy {
public:
  LogicalBinaryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object booleanExpression();
  Object booleanExpressionAt(size_t i);
  Object AND();
  Object OR();
};

class ValueExpressionContextProxy : public ContextProxy {
public:
  ValueExpressionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class PredicateContextProxy : public ContextProxy {
public:
  PredicateContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class ComparisonOperatorContextProxy : public ContextProxy {
public:
  ComparisonOperatorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object EQ();
  Object NEQ();
  Object LT();
  Object LTE();
  Object GT();
  Object GTE();
};

class ComparisonContextProxy : public ContextProxy {
public:
  ComparisonContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object comparisonOperator();
  Object valueExpression();

};

class LikeContextProxy : public ContextProxy {
public:
  LikeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object valueExpressionAt(size_t i);
  Object LIKE();
  Object NOT();
  Object ESCAPE();
};

class InSubqueryContextProxy : public ContextProxy {
public:
  InSubqueryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query();
  Object IN();
  Object NOT();
};

class DistinctFromContextProxy : public ContextProxy {
public:
  DistinctFromContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object IS();
  Object DISTINCT();
  Object FROM();
  Object NOT();
};

class InListContextProxy : public ContextProxy {
public:
  InListContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object expressionAt(size_t i);
  Object IN();
  Object NOT();
};

class NullPredicateContextProxy : public ContextProxy {
public:
  NullPredicateContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object IS();
  Object NULLTOKEN();
  Object NOT();
};

class BetweenContextProxy : public ContextProxy {
public:
  BetweenContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object valueExpressionAt(size_t i);
  Object BETWEEN();
  Object AND();
  Object NOT();
};

class QuantifiedComparisonContextProxy : public ContextProxy {
public:
  QuantifiedComparisonContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object comparisonOperator();
  Object comparisonQuantifier();
  Object query();

};

class ComparisonQuantifierContextProxy : public ContextProxy {
public:
  ComparisonQuantifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object ALL();
  Object SOME();
  Object ANY();
};

class PrimaryExpressionContextProxy : public ContextProxy {
public:
  PrimaryExpressionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class ValueExpressionDefaultContextProxy : public ContextProxy {
public:
  ValueExpressionDefaultContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object primaryExpression();

};

class ConcatenationContextProxy : public ContextProxy {
public:
  ConcatenationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object valueExpressionAt(size_t i);
  Object CONCAT();
};

class ArithmeticBinaryContextProxy : public ContextProxy {
public:
  ArithmeticBinaryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object valueExpressionAt(size_t i);
  Object ASTERISK();
  Object SLASH();
  Object PERCENT();
  Object PLUS();
  Object MINUS();
};

class ArithmeticUnaryContextProxy : public ContextProxy {
public:
  ArithmeticUnaryContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object MINUS();
  Object PLUS();
};

class AtTimeZoneContextProxy : public ContextProxy {
public:
  AtTimeZoneContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object timeZoneSpecifier();
  Object AT();
};

class TimeZoneSpecifierContextProxy : public ContextProxy {
public:
  TimeZoneSpecifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class DereferenceContextProxy : public ContextProxy {
public:
  DereferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object primaryExpression();
  Object identifier();

};

class TypeConstructorContextProxy : public ContextProxy {
public:
  TypeConstructorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object STRING();
  Object DOUBLE_PRECISION();
};

class SpecialDateTimeFunctionContextProxy : public ContextProxy {
public:
  SpecialDateTimeFunctionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object CURRENT_DATE();
  Object CURRENT_TIME();
  Object INTEGER_VALUE();
  Object CURRENT_TIMESTAMP();
  Object LOCALTIME();
  Object LOCALTIMESTAMP();
};

class SubstringContextProxy : public ContextProxy {
public:
  SubstringContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object valueExpressionAt(size_t i);
  Object SUBSTRING();
  Object FROM();
  Object FOR();
};

class CastContextProxy : public ContextProxy {
public:
  CastContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object type();
  Object CAST();
  Object AS();
  Object TRY_CAST();
};

class LambdaContextProxy : public ContextProxy {
public:
  LambdaContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object identifierAt(size_t i);
  Object expression();

};

class ParenthesizedExpressionContextProxy : public ContextProxy {
public:
  ParenthesizedExpressionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();

};

class ParameterContextProxy : public ContextProxy {
public:
  ParameterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class NormalizeContextProxy : public ContextProxy {
public:
  NormalizeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object normalForm();
  Object NORMALIZE();
};

class NormalFormContextProxy : public ContextProxy {
public:
  NormalFormContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object NFD();
  Object NFC();
  Object NFKD();
  Object NFKC();
};

class IntervalContextProxy : public ContextProxy {
public:
  IntervalContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object intervalField();
  Object intervalFieldAt(size_t i);
  Object INTERVAL();
  Object STRING();
  Object TO();
  Object PLUS();
  Object MINUS();
};

class IntervalLiteralContextProxy : public ContextProxy {
public:
  IntervalLiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object interval();

};

class NumberContextProxy : public ContextProxy {
public:
  NumberContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class NumericLiteralContextProxy : public ContextProxy {
public:
  NumericLiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object number();

};

class BooleanValueContextProxy : public ContextProxy {
public:
  BooleanValueContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TRUE();
  Object FALSE();
};

class BooleanLiteralContextProxy : public ContextProxy {
public:
  BooleanLiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object booleanValue();

};

class SimpleCaseContextProxy : public ContextProxy {
public:
  SimpleCaseContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object whenClause();
  Object whenClauseAt(size_t i);
  Object expression();
  Object CASE();
  Object END();
  Object ELSE();
};

class WhenClauseContextProxy : public ContextProxy {
public:
  WhenClauseContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object expressionAt(size_t i);
  Object WHEN();
  Object THEN();
};

class ColumnReferenceContextProxy : public ContextProxy {
public:
  ColumnReferenceContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();

};

class NullLiteralContextProxy : public ContextProxy {
public:
  NullLiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object NULLTOKEN();
};

class RowConstructorContextProxy : public ContextProxy {
public:
  RowConstructorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object expressionAt(size_t i);
  Object ROW();
};

class SubscriptContextProxy : public ContextProxy {
public:
  SubscriptContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object primaryExpression();
  Object valueExpression();

};

class SubqueryExpressionContextProxy : public ContextProxy {
public:
  SubqueryExpressionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query();

};

class BinaryLiteralContextProxy : public ContextProxy {
public:
  BinaryLiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object BINARY_LITERAL();
};

class ExtractContextProxy : public ContextProxy {
public:
  ExtractContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object valueExpression();
  Object EXTRACT();
  Object FROM();
};

class StringLiteralContextProxy : public ContextProxy {
public:
  StringLiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object STRING();
};

class ArrayConstructorContextProxy : public ContextProxy {
public:
  ArrayConstructorContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object expressionAt(size_t i);
  Object ARRAY();
};

class FunctionCallContextProxy : public ContextProxy {
public:
  FunctionCallContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object qualifiedName();
  Object filter();
  Object over();
  Object expression();
  Object expressionAt(size_t i);
  Object setQuantifier();
  Object ASTERISK();
};

class FilterContextProxy : public ContextProxy {
public:
  FilterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object booleanExpression();
  Object FILTER();
  Object WHERE();
};

class OverContextProxy : public ContextProxy {
public:
  OverContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object sortItem();
  Object sortItemAt(size_t i);
  Object windowFrame();
  Object expression();
  Object expressionAt(size_t i);
  Object OVER();
  Object PARTITION();
  Object BY();
  Object BYAt(size_t i);
  Object ORDER();
};

class ExistsContextProxy : public ContextProxy {
public:
  ExistsContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object query();
  Object EXISTS();
};

class PositionContextProxy : public ContextProxy {
public:
  PositionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object valueExpression();
  Object valueExpressionAt(size_t i);
  Object POSITION();
  Object IN();
};

class SearchedCaseContextProxy : public ContextProxy {
public:
  SearchedCaseContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object whenClause();
  Object whenClauseAt(size_t i);
  Object expression();
  Object CASE();
  Object END();
  Object ELSE();
};

class TimeZoneIntervalContextProxy : public ContextProxy {
public:
  TimeZoneIntervalContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object interval();
  Object TIME();
  Object ZONE();
};

class TimeZoneStringContextProxy : public ContextProxy {
public:
  TimeZoneStringContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TIME();
  Object ZONE();
  Object STRING();
};

class IntervalFieldContextProxy : public ContextProxy {
public:
  IntervalFieldContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object YEAR();
  Object MONTH();
  Object DAY();
  Object HOUR();
  Object MINUTE();
  Object SECOND();
};

class BaseTypeContextProxy : public ContextProxy {
public:
  BaseTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object TIME_WITH_TIME_ZONE();
  Object TIMESTAMP_WITH_TIME_ZONE();
  Object DOUBLE_PRECISION();
};

class TypeParameterContextProxy : public ContextProxy {
public:
  TypeParameterContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object type();
  Object INTEGER_VALUE();
};

class WindowFrameContextProxy : public ContextProxy {
public:
  WindowFrameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object frameBound();
  Object frameBoundAt(size_t i);
  Object RANGE();
  Object ROWS();
  Object BETWEEN();
  Object AND();
};

class FrameBoundContextProxy : public ContextProxy {
public:
  FrameBoundContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class BoundedFrameContextProxy : public ContextProxy {
public:
  BoundedFrameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();
  Object PRECEDING();
  Object FOLLOWING();
};

class UnboundedFrameContextProxy : public ContextProxy {
public:
  UnboundedFrameContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object UNBOUNDED();
  Object PRECEDING();
  Object FOLLOWING();
};

class CurrentRowBoundContextProxy : public ContextProxy {
public:
  CurrentRowBoundContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object CURRENT();
  Object ROW();
};

class ExplainOptionContextProxy : public ContextProxy {
public:
  ExplainOptionContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class ExplainFormatContextProxy : public ContextProxy {
public:
  ExplainFormatContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object FORMAT();
  Object TEXT();
  Object GRAPHVIZ();
};

class ExplainTypeContextProxy : public ContextProxy {
public:
  ExplainTypeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object TYPE();
  Object LOGICAL();
  Object DISTRIBUTED();
  Object VALIDATE();
};

class TransactionModeContextProxy : public ContextProxy {
public:
  TransactionModeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class TransactionAccessModeContextProxy : public ContextProxy {
public:
  TransactionAccessModeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object READ();
  Object ONLY();
  Object WRITE();
};

class IsolationLevelContextProxy : public ContextProxy {
public:
  IsolationLevelContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object levelOfIsolation();
  Object ISOLATION();
  Object LEVEL();
};

class LevelOfIsolationContextProxy : public ContextProxy {
public:
  LevelOfIsolationContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class ReadUncommittedContextProxy : public ContextProxy {
public:
  ReadUncommittedContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object READ();
  Object UNCOMMITTED();
};

class SerializableContextProxy : public ContextProxy {
public:
  SerializableContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object SERIALIZABLE();
};

class ReadCommittedContextProxy : public ContextProxy {
public:
  ReadCommittedContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object READ();
  Object COMMITTED();
};

class RepeatableReadContextProxy : public ContextProxy {
public:
  RepeatableReadContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object REPEATABLE();
  Object READ();
};

class CallArgumentContextProxy : public ContextProxy {
public:
  CallArgumentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};


};

class PositionalArgumentContextProxy : public ContextProxy {
public:
  PositionalArgumentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object expression();

};

class NamedArgumentContextProxy : public ContextProxy {
public:
  NamedArgumentContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object expression();

};

class PrivilegeContextProxy : public ContextProxy {
public:
  PrivilegeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object identifier();
  Object SELECT();
  Object DELETE();
  Object INSERT();
};

class BackQuotedIdentifierContextProxy : public ContextProxy {
public:
  BackQuotedIdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object BACKQUOTED_IDENTIFIER();
};

class QuotedIdentifierContextProxy : public ContextProxy {
public:
  QuotedIdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object QUOTED_IDENTIFIER();
};

class QuotedIdentifierAlternativeContextProxy : public ContextProxy {
public:
  QuotedIdentifierAlternativeContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object quotedIdentifier();

};

class DigitIdentifierContextProxy : public ContextProxy {
public:
  DigitIdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object DIGIT_IDENTIFIER();
};

class UnquotedIdentifierContextProxy : public ContextProxy {
public:
  UnquotedIdentifierContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object nonReserved();
  Object IDENTIFIER();
};

class NonReservedContextProxy : public ContextProxy {
public:
  NonReservedContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};
  Object normalForm();
  Object SHOW();
  Object TABLES();
  Object COLUMNS();
  Object COLUMN();
  Object PARTITIONS();
  Object FUNCTIONS();
  Object SCHEMAS();
  Object CATALOGS();
  Object SESSION();
  Object ADD();
  Object FILTER();
  Object AT();
  Object OVER();
  Object PARTITION();
  Object RANGE();
  Object ROWS();
  Object PRECEDING();
  Object FOLLOWING();
  Object CURRENT();
  Object ROW();
  Object MAP();
  Object ARRAY();
  Object TINYINT();
  Object SMALLINT();
  Object INTEGER();
  Object DATE();
  Object TIME();
  Object TIMESTAMP();
  Object INTERVAL();
  Object ZONE();
  Object YEAR();
  Object MONTH();
  Object DAY();
  Object HOUR();
  Object MINUTE();
  Object SECOND();
  Object EXPLAIN();
  Object ANALYZE();
  Object FORMAT();
  Object TYPE();
  Object TEXT();
  Object GRAPHVIZ();
  Object LOGICAL();
  Object DISTRIBUTED();
  Object VALIDATE();
  Object TABLESAMPLE();
  Object SYSTEM();
  Object BERNOULLI();
  Object POISSONIZED();
  Object USE();
  Object TO();
  Object SET();
  Object RESET();
  Object VIEW();
  Object REPLACE();
  Object IF();
  Object NULLIF();
  Object COALESCE();
  Object POSITION();
  Object NO();
  Object DATA();
  Object START();
  Object TRANSACTION();
  Object COMMIT();
  Object ROLLBACK();
  Object WORK();
  Object ISOLATION();
  Object LEVEL();
  Object SERIALIZABLE();
  Object REPEATABLE();
  Object COMMITTED();
  Object UNCOMMITTED();
  Object READ();
  Object WRITE();
  Object ONLY();
  Object COMMENT();
  Object CALL();
  Object GRANT();
  Object REVOKE();
  Object PRIVILEGES();
  Object PUBLIC();
  Object OPTION();
  Object SUBSTRING();
  Object SCHEMA();
  Object CASCADE();
  Object RESTRICT();
  Object INPUT();
  Object OUTPUT();
  Object INCLUDING();
  Object EXCLUDING();
  Object PROPERTIES();
  Object ALL();
  Object SOME();
  Object ANY();
};

class DecimalLiteralContextProxy : public ContextProxy {
public:
  DecimalLiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object DECIMAL_VALUE();
};

class IntegerLiteralContextProxy : public ContextProxy {
public:
  IntegerLiteralContextProxy(tree::ParseTree* ctx) : ContextProxy(ctx) {};

  Object INTEGER_VALUE();
};


namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SingleQueryContext*> {
  public:
    VALUE convert(PrestoParser::SingleQueryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SingleQueryContext>(x, false, rb_cSingleQueryContext);
    }
  };

  template <>
  class To_Ruby<SingleQueryContextProxy*> {
  public:
    VALUE convert(SingleQueryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SingleQueryContextProxy>(x, false, rb_cSingleQueryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QueryContext*> {
  public:
    VALUE convert(PrestoParser::QueryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QueryContext>(x, false, rb_cQueryContext);
    }
  };

  template <>
  class To_Ruby<QueryContextProxy*> {
  public:
    VALUE convert(QueryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QueryContextProxy>(x, false, rb_cQueryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QueryNoWithContext*> {
  public:
    VALUE convert(PrestoParser::QueryNoWithContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QueryNoWithContext>(x, false, rb_cQueryNoWithContext);
    }
  };

  template <>
  class To_Ruby<QueryNoWithContextProxy*> {
  public:
    VALUE convert(QueryNoWithContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QueryNoWithContextProxy>(x, false, rb_cQueryNoWithContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::WithContext*> {
  public:
    VALUE convert(PrestoParser::WithContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::WithContext>(x, false, rb_cWithContext);
    }
  };

  template <>
  class To_Ruby<WithContextProxy*> {
  public:
    VALUE convert(WithContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<WithContextProxy>(x, false, rb_cWithContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NamedQueryContext*> {
  public:
    VALUE convert(PrestoParser::NamedQueryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NamedQueryContext>(x, false, rb_cNamedQueryContext);
    }
  };

  template <>
  class To_Ruby<NamedQueryContextProxy*> {
  public:
    VALUE convert(NamedQueryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NamedQueryContextProxy>(x, false, rb_cNamedQueryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TableElementContext*> {
  public:
    VALUE convert(PrestoParser::TableElementContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TableElementContext>(x, false, rb_cTableElementContext);
    }
  };

  template <>
  class To_Ruby<TableElementContextProxy*> {
  public:
    VALUE convert(TableElementContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TableElementContextProxy>(x, false, rb_cTableElementContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ColumnDefinitionContext*> {
  public:
    VALUE convert(PrestoParser::ColumnDefinitionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ColumnDefinitionContext>(x, false, rb_cColumnDefinitionContext);
    }
  };

  template <>
  class To_Ruby<ColumnDefinitionContextProxy*> {
  public:
    VALUE convert(ColumnDefinitionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ColumnDefinitionContextProxy>(x, false, rb_cColumnDefinitionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::LikeClauseContext*> {
  public:
    VALUE convert(PrestoParser::LikeClauseContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::LikeClauseContext>(x, false, rb_cLikeClauseContext);
    }
  };

  template <>
  class To_Ruby<LikeClauseContextProxy*> {
  public:
    VALUE convert(LikeClauseContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<LikeClauseContextProxy>(x, false, rb_cLikeClauseContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::IdentifierContext*> {
  public:
    VALUE convert(PrestoParser::IdentifierContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::IdentifierContext>(x, false, rb_cIdentifierContext);
    }
  };

  template <>
  class To_Ruby<IdentifierContextProxy*> {
  public:
    VALUE convert(IdentifierContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<IdentifierContextProxy>(x, false, rb_cIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TypeContext*> {
  public:
    VALUE convert(PrestoParser::TypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TypeContext>(x, false, rb_cTypeContext);
    }
  };

  template <>
  class To_Ruby<TypeContextProxy*> {
  public:
    VALUE convert(TypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TypeContextProxy>(x, false, rb_cTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QualifiedNameContext*> {
  public:
    VALUE convert(PrestoParser::QualifiedNameContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QualifiedNameContext>(x, false, rb_cQualifiedNameContext);
    }
  };

  template <>
  class To_Ruby<QualifiedNameContextProxy*> {
  public:
    VALUE convert(QualifiedNameContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QualifiedNameContextProxy>(x, false, rb_cQualifiedNameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TablePropertiesContext*> {
  public:
    VALUE convert(PrestoParser::TablePropertiesContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TablePropertiesContext>(x, false, rb_cTablePropertiesContext);
    }
  };

  template <>
  class To_Ruby<TablePropertiesContextProxy*> {
  public:
    VALUE convert(TablePropertiesContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TablePropertiesContextProxy>(x, false, rb_cTablePropertiesContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TablePropertyContext*> {
  public:
    VALUE convert(PrestoParser::TablePropertyContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TablePropertyContext>(x, false, rb_cTablePropertyContext);
    }
  };

  template <>
  class To_Ruby<TablePropertyContextProxy*> {
  public:
    VALUE convert(TablePropertyContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TablePropertyContextProxy>(x, false, rb_cTablePropertyContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ExpressionContext*> {
  public:
    VALUE convert(PrestoParser::ExpressionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ExpressionContext>(x, false, rb_cExpressionContext);
    }
  };

  template <>
  class To_Ruby<ExpressionContextProxy*> {
  public:
    VALUE convert(ExpressionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ExpressionContextProxy>(x, false, rb_cExpressionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QueryTermContext*> {
  public:
    VALUE convert(PrestoParser::QueryTermContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QueryTermContext>(x, false, rb_cQueryTermContext);
    }
  };

  template <>
  class To_Ruby<QueryTermContextProxy*> {
  public:
    VALUE convert(QueryTermContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QueryTermContextProxy>(x, false, rb_cQueryTermContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SortItemContext*> {
  public:
    VALUE convert(PrestoParser::SortItemContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SortItemContext>(x, false, rb_cSortItemContext);
    }
  };

  template <>
  class To_Ruby<SortItemContextProxy*> {
  public:
    VALUE convert(SortItemContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SortItemContextProxy>(x, false, rb_cSortItemContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QueryPrimaryContext*> {
  public:
    VALUE convert(PrestoParser::QueryPrimaryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QueryPrimaryContext>(x, false, rb_cQueryPrimaryContext);
    }
  };

  template <>
  class To_Ruby<QueryPrimaryContextProxy*> {
  public:
    VALUE convert(QueryPrimaryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QueryPrimaryContextProxy>(x, false, rb_cQueryPrimaryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QueryTermDefaultContext*> {
  public:
    VALUE convert(PrestoParser::QueryTermDefaultContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QueryTermDefaultContext>(x, false, rb_cQueryTermDefaultContext);
    }
  };

  template <>
  class To_Ruby<QueryTermDefaultContextProxy*> {
  public:
    VALUE convert(QueryTermDefaultContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QueryTermDefaultContextProxy>(x, false, rb_cQueryTermDefaultContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SetOperationContext*> {
  public:
    VALUE convert(PrestoParser::SetOperationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SetOperationContext>(x, false, rb_cSetOperationContext);
    }
  };

  template <>
  class To_Ruby<SetOperationContextProxy*> {
  public:
    VALUE convert(SetOperationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SetOperationContextProxy>(x, false, rb_cSetOperationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SetQuantifierContext*> {
  public:
    VALUE convert(PrestoParser::SetQuantifierContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SetQuantifierContext>(x, false, rb_cSetQuantifierContext);
    }
  };

  template <>
  class To_Ruby<SetQuantifierContextProxy*> {
  public:
    VALUE convert(SetQuantifierContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SetQuantifierContextProxy>(x, false, rb_cSetQuantifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SubqueryContext*> {
  public:
    VALUE convert(PrestoParser::SubqueryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SubqueryContext>(x, false, rb_cSubqueryContext);
    }
  };

  template <>
  class To_Ruby<SubqueryContextProxy*> {
  public:
    VALUE convert(SubqueryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SubqueryContextProxy>(x, false, rb_cSubqueryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QuerySpecificationContext*> {
  public:
    VALUE convert(PrestoParser::QuerySpecificationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QuerySpecificationContext>(x, false, rb_cQuerySpecificationContext);
    }
  };

  template <>
  class To_Ruby<QuerySpecificationContextProxy*> {
  public:
    VALUE convert(QuerySpecificationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QuerySpecificationContextProxy>(x, false, rb_cQuerySpecificationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QueryPrimaryDefaultContext*> {
  public:
    VALUE convert(PrestoParser::QueryPrimaryDefaultContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QueryPrimaryDefaultContext>(x, false, rb_cQueryPrimaryDefaultContext);
    }
  };

  template <>
  class To_Ruby<QueryPrimaryDefaultContextProxy*> {
  public:
    VALUE convert(QueryPrimaryDefaultContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QueryPrimaryDefaultContextProxy>(x, false, rb_cQueryPrimaryDefaultContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TableContext*> {
  public:
    VALUE convert(PrestoParser::TableContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TableContext>(x, false, rb_cTableContext);
    }
  };

  template <>
  class To_Ruby<TableContextProxy*> {
  public:
    VALUE convert(TableContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TableContextProxy>(x, false, rb_cTableContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::InlineTableContext*> {
  public:
    VALUE convert(PrestoParser::InlineTableContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::InlineTableContext>(x, false, rb_cInlineTableContext);
    }
  };

  template <>
  class To_Ruby<InlineTableContextProxy*> {
  public:
    VALUE convert(InlineTableContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<InlineTableContextProxy>(x, false, rb_cInlineTableContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SelectItemContext*> {
  public:
    VALUE convert(PrestoParser::SelectItemContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SelectItemContext>(x, false, rb_cSelectItemContext);
    }
  };

  template <>
  class To_Ruby<SelectItemContextProxy*> {
  public:
    VALUE convert(SelectItemContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SelectItemContextProxy>(x, false, rb_cSelectItemContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::RelationContext*> {
  public:
    VALUE convert(PrestoParser::RelationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::RelationContext>(x, false, rb_cRelationContext);
    }
  };

  template <>
  class To_Ruby<RelationContextProxy*> {
  public:
    VALUE convert(RelationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RelationContextProxy>(x, false, rb_cRelationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::GroupByContext*> {
  public:
    VALUE convert(PrestoParser::GroupByContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::GroupByContext>(x, false, rb_cGroupByContext);
    }
  };

  template <>
  class To_Ruby<GroupByContextProxy*> {
  public:
    VALUE convert(GroupByContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<GroupByContextProxy>(x, false, rb_cGroupByContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BooleanExpressionContext*> {
  public:
    VALUE convert(PrestoParser::BooleanExpressionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BooleanExpressionContext>(x, false, rb_cBooleanExpressionContext);
    }
  };

  template <>
  class To_Ruby<BooleanExpressionContextProxy*> {
  public:
    VALUE convert(BooleanExpressionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BooleanExpressionContextProxy>(x, false, rb_cBooleanExpressionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::GroupingElementContext*> {
  public:
    VALUE convert(PrestoParser::GroupingElementContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::GroupingElementContext>(x, false, rb_cGroupingElementContext);
    }
  };

  template <>
  class To_Ruby<GroupingElementContextProxy*> {
  public:
    VALUE convert(GroupingElementContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<GroupingElementContextProxy>(x, false, rb_cGroupingElementContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::MultipleGroupingSetsContext*> {
  public:
    VALUE convert(PrestoParser::MultipleGroupingSetsContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::MultipleGroupingSetsContext>(x, false, rb_cMultipleGroupingSetsContext);
    }
  };

  template <>
  class To_Ruby<MultipleGroupingSetsContextProxy*> {
  public:
    VALUE convert(MultipleGroupingSetsContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<MultipleGroupingSetsContextProxy>(x, false, rb_cMultipleGroupingSetsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::GroupingSetContext*> {
  public:
    VALUE convert(PrestoParser::GroupingSetContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::GroupingSetContext>(x, false, rb_cGroupingSetContext);
    }
  };

  template <>
  class To_Ruby<GroupingSetContextProxy*> {
  public:
    VALUE convert(GroupingSetContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<GroupingSetContextProxy>(x, false, rb_cGroupingSetContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::GroupingExpressionsContext*> {
  public:
    VALUE convert(PrestoParser::GroupingExpressionsContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::GroupingExpressionsContext>(x, false, rb_cGroupingExpressionsContext);
    }
  };

  template <>
  class To_Ruby<GroupingExpressionsContextProxy*> {
  public:
    VALUE convert(GroupingExpressionsContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<GroupingExpressionsContextProxy>(x, false, rb_cGroupingExpressionsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SingleGroupingSetContext*> {
  public:
    VALUE convert(PrestoParser::SingleGroupingSetContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SingleGroupingSetContext>(x, false, rb_cSingleGroupingSetContext);
    }
  };

  template <>
  class To_Ruby<SingleGroupingSetContextProxy*> {
  public:
    VALUE convert(SingleGroupingSetContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SingleGroupingSetContextProxy>(x, false, rb_cSingleGroupingSetContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::CubeContext*> {
  public:
    VALUE convert(PrestoParser::CubeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::CubeContext>(x, false, rb_cCubeContext);
    }
  };

  template <>
  class To_Ruby<CubeContextProxy*> {
  public:
    VALUE convert(CubeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<CubeContextProxy>(x, false, rb_cCubeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::RollupContext*> {
  public:
    VALUE convert(PrestoParser::RollupContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::RollupContext>(x, false, rb_cRollupContext);
    }
  };

  template <>
  class To_Ruby<RollupContextProxy*> {
  public:
    VALUE convert(RollupContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RollupContextProxy>(x, false, rb_cRollupContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ColumnAliasesContext*> {
  public:
    VALUE convert(PrestoParser::ColumnAliasesContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ColumnAliasesContext>(x, false, rb_cColumnAliasesContext);
    }
  };

  template <>
  class To_Ruby<ColumnAliasesContextProxy*> {
  public:
    VALUE convert(ColumnAliasesContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ColumnAliasesContextProxy>(x, false, rb_cColumnAliasesContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SelectAllContext*> {
  public:
    VALUE convert(PrestoParser::SelectAllContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SelectAllContext>(x, false, rb_cSelectAllContext);
    }
  };

  template <>
  class To_Ruby<SelectAllContextProxy*> {
  public:
    VALUE convert(SelectAllContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SelectAllContextProxy>(x, false, rb_cSelectAllContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SelectSingleContext*> {
  public:
    VALUE convert(PrestoParser::SelectSingleContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SelectSingleContext>(x, false, rb_cSelectSingleContext);
    }
  };

  template <>
  class To_Ruby<SelectSingleContextProxy*> {
  public:
    VALUE convert(SelectSingleContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SelectSingleContextProxy>(x, false, rb_cSelectSingleContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SampledRelationContext*> {
  public:
    VALUE convert(PrestoParser::SampledRelationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SampledRelationContext>(x, false, rb_cSampledRelationContext);
    }
  };

  template <>
  class To_Ruby<SampledRelationContextProxy*> {
  public:
    VALUE convert(SampledRelationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SampledRelationContextProxy>(x, false, rb_cSampledRelationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::RelationDefaultContext*> {
  public:
    VALUE convert(PrestoParser::RelationDefaultContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::RelationDefaultContext>(x, false, rb_cRelationDefaultContext);
    }
  };

  template <>
  class To_Ruby<RelationDefaultContextProxy*> {
  public:
    VALUE convert(RelationDefaultContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RelationDefaultContextProxy>(x, false, rb_cRelationDefaultContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::JoinRelationContext*> {
  public:
    VALUE convert(PrestoParser::JoinRelationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::JoinRelationContext>(x, false, rb_cJoinRelationContext);
    }
  };

  template <>
  class To_Ruby<JoinRelationContextProxy*> {
  public:
    VALUE convert(JoinRelationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<JoinRelationContextProxy>(x, false, rb_cJoinRelationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::JoinTypeContext*> {
  public:
    VALUE convert(PrestoParser::JoinTypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::JoinTypeContext>(x, false, rb_cJoinTypeContext);
    }
  };

  template <>
  class To_Ruby<JoinTypeContextProxy*> {
  public:
    VALUE convert(JoinTypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<JoinTypeContextProxy>(x, false, rb_cJoinTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::JoinCriteriaContext*> {
  public:
    VALUE convert(PrestoParser::JoinCriteriaContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::JoinCriteriaContext>(x, false, rb_cJoinCriteriaContext);
    }
  };

  template <>
  class To_Ruby<JoinCriteriaContextProxy*> {
  public:
    VALUE convert(JoinCriteriaContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<JoinCriteriaContextProxy>(x, false, rb_cJoinCriteriaContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::AliasedRelationContext*> {
  public:
    VALUE convert(PrestoParser::AliasedRelationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::AliasedRelationContext>(x, false, rb_cAliasedRelationContext);
    }
  };

  template <>
  class To_Ruby<AliasedRelationContextProxy*> {
  public:
    VALUE convert(AliasedRelationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<AliasedRelationContextProxy>(x, false, rb_cAliasedRelationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SampleTypeContext*> {
  public:
    VALUE convert(PrestoParser::SampleTypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SampleTypeContext>(x, false, rb_cSampleTypeContext);
    }
  };

  template <>
  class To_Ruby<SampleTypeContextProxy*> {
  public:
    VALUE convert(SampleTypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SampleTypeContextProxy>(x, false, rb_cSampleTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::RelationPrimaryContext*> {
  public:
    VALUE convert(PrestoParser::RelationPrimaryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::RelationPrimaryContext>(x, false, rb_cRelationPrimaryContext);
    }
  };

  template <>
  class To_Ruby<RelationPrimaryContextProxy*> {
  public:
    VALUE convert(RelationPrimaryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RelationPrimaryContextProxy>(x, false, rb_cRelationPrimaryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SubqueryRelationContext*> {
  public:
    VALUE convert(PrestoParser::SubqueryRelationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SubqueryRelationContext>(x, false, rb_cSubqueryRelationContext);
    }
  };

  template <>
  class To_Ruby<SubqueryRelationContextProxy*> {
  public:
    VALUE convert(SubqueryRelationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SubqueryRelationContextProxy>(x, false, rb_cSubqueryRelationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ParenthesizedRelationContext*> {
  public:
    VALUE convert(PrestoParser::ParenthesizedRelationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ParenthesizedRelationContext>(x, false, rb_cParenthesizedRelationContext);
    }
  };

  template <>
  class To_Ruby<ParenthesizedRelationContextProxy*> {
  public:
    VALUE convert(ParenthesizedRelationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ParenthesizedRelationContextProxy>(x, false, rb_cParenthesizedRelationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::UnnestContext*> {
  public:
    VALUE convert(PrestoParser::UnnestContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::UnnestContext>(x, false, rb_cUnnestContext);
    }
  };

  template <>
  class To_Ruby<UnnestContextProxy*> {
  public:
    VALUE convert(UnnestContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<UnnestContextProxy>(x, false, rb_cUnnestContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TableNameContext*> {
  public:
    VALUE convert(PrestoParser::TableNameContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TableNameContext>(x, false, rb_cTableNameContext);
    }
  };

  template <>
  class To_Ruby<TableNameContextProxy*> {
  public:
    VALUE convert(TableNameContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TableNameContextProxy>(x, false, rb_cTableNameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::LogicalNotContext*> {
  public:
    VALUE convert(PrestoParser::LogicalNotContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::LogicalNotContext>(x, false, rb_cLogicalNotContext);
    }
  };

  template <>
  class To_Ruby<LogicalNotContextProxy*> {
  public:
    VALUE convert(LogicalNotContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<LogicalNotContextProxy>(x, false, rb_cLogicalNotContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::PredicatedContext*> {
  public:
    VALUE convert(PrestoParser::PredicatedContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::PredicatedContext>(x, false, rb_cPredicatedContext);
    }
  };

  template <>
  class To_Ruby<PredicatedContextProxy*> {
  public:
    VALUE convert(PredicatedContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<PredicatedContextProxy>(x, false, rb_cPredicatedContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BooleanDefaultContext*> {
  public:
    VALUE convert(PrestoParser::BooleanDefaultContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BooleanDefaultContext>(x, false, rb_cBooleanDefaultContext);
    }
  };

  template <>
  class To_Ruby<BooleanDefaultContextProxy*> {
  public:
    VALUE convert(BooleanDefaultContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BooleanDefaultContextProxy>(x, false, rb_cBooleanDefaultContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::LogicalBinaryContext*> {
  public:
    VALUE convert(PrestoParser::LogicalBinaryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::LogicalBinaryContext>(x, false, rb_cLogicalBinaryContext);
    }
  };

  template <>
  class To_Ruby<LogicalBinaryContextProxy*> {
  public:
    VALUE convert(LogicalBinaryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<LogicalBinaryContextProxy>(x, false, rb_cLogicalBinaryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ValueExpressionContext*> {
  public:
    VALUE convert(PrestoParser::ValueExpressionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ValueExpressionContext>(x, false, rb_cValueExpressionContext);
    }
  };

  template <>
  class To_Ruby<ValueExpressionContextProxy*> {
  public:
    VALUE convert(ValueExpressionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ValueExpressionContextProxy>(x, false, rb_cValueExpressionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::PredicateContext*> {
  public:
    VALUE convert(PrestoParser::PredicateContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::PredicateContext>(x, false, rb_cPredicateContext);
    }
  };

  template <>
  class To_Ruby<PredicateContextProxy*> {
  public:
    VALUE convert(PredicateContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<PredicateContextProxy>(x, false, rb_cPredicateContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ComparisonOperatorContext*> {
  public:
    VALUE convert(PrestoParser::ComparisonOperatorContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ComparisonOperatorContext>(x, false, rb_cComparisonOperatorContext);
    }
  };

  template <>
  class To_Ruby<ComparisonOperatorContextProxy*> {
  public:
    VALUE convert(ComparisonOperatorContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ComparisonOperatorContextProxy>(x, false, rb_cComparisonOperatorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ComparisonContext*> {
  public:
    VALUE convert(PrestoParser::ComparisonContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ComparisonContext>(x, false, rb_cComparisonContext);
    }
  };

  template <>
  class To_Ruby<ComparisonContextProxy*> {
  public:
    VALUE convert(ComparisonContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ComparisonContextProxy>(x, false, rb_cComparisonContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::LikeContext*> {
  public:
    VALUE convert(PrestoParser::LikeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::LikeContext>(x, false, rb_cLikeContext);
    }
  };

  template <>
  class To_Ruby<LikeContextProxy*> {
  public:
    VALUE convert(LikeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<LikeContextProxy>(x, false, rb_cLikeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::InSubqueryContext*> {
  public:
    VALUE convert(PrestoParser::InSubqueryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::InSubqueryContext>(x, false, rb_cInSubqueryContext);
    }
  };

  template <>
  class To_Ruby<InSubqueryContextProxy*> {
  public:
    VALUE convert(InSubqueryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<InSubqueryContextProxy>(x, false, rb_cInSubqueryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::DistinctFromContext*> {
  public:
    VALUE convert(PrestoParser::DistinctFromContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::DistinctFromContext>(x, false, rb_cDistinctFromContext);
    }
  };

  template <>
  class To_Ruby<DistinctFromContextProxy*> {
  public:
    VALUE convert(DistinctFromContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<DistinctFromContextProxy>(x, false, rb_cDistinctFromContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::InListContext*> {
  public:
    VALUE convert(PrestoParser::InListContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::InListContext>(x, false, rb_cInListContext);
    }
  };

  template <>
  class To_Ruby<InListContextProxy*> {
  public:
    VALUE convert(InListContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<InListContextProxy>(x, false, rb_cInListContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NullPredicateContext*> {
  public:
    VALUE convert(PrestoParser::NullPredicateContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NullPredicateContext>(x, false, rb_cNullPredicateContext);
    }
  };

  template <>
  class To_Ruby<NullPredicateContextProxy*> {
  public:
    VALUE convert(NullPredicateContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NullPredicateContextProxy>(x, false, rb_cNullPredicateContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BetweenContext*> {
  public:
    VALUE convert(PrestoParser::BetweenContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BetweenContext>(x, false, rb_cBetweenContext);
    }
  };

  template <>
  class To_Ruby<BetweenContextProxy*> {
  public:
    VALUE convert(BetweenContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BetweenContextProxy>(x, false, rb_cBetweenContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QuantifiedComparisonContext*> {
  public:
    VALUE convert(PrestoParser::QuantifiedComparisonContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QuantifiedComparisonContext>(x, false, rb_cQuantifiedComparisonContext);
    }
  };

  template <>
  class To_Ruby<QuantifiedComparisonContextProxy*> {
  public:
    VALUE convert(QuantifiedComparisonContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QuantifiedComparisonContextProxy>(x, false, rb_cQuantifiedComparisonContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ComparisonQuantifierContext*> {
  public:
    VALUE convert(PrestoParser::ComparisonQuantifierContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ComparisonQuantifierContext>(x, false, rb_cComparisonQuantifierContext);
    }
  };

  template <>
  class To_Ruby<ComparisonQuantifierContextProxy*> {
  public:
    VALUE convert(ComparisonQuantifierContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ComparisonQuantifierContextProxy>(x, false, rb_cComparisonQuantifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::PrimaryExpressionContext*> {
  public:
    VALUE convert(PrestoParser::PrimaryExpressionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::PrimaryExpressionContext>(x, false, rb_cPrimaryExpressionContext);
    }
  };

  template <>
  class To_Ruby<PrimaryExpressionContextProxy*> {
  public:
    VALUE convert(PrimaryExpressionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<PrimaryExpressionContextProxy>(x, false, rb_cPrimaryExpressionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ValueExpressionDefaultContext*> {
  public:
    VALUE convert(PrestoParser::ValueExpressionDefaultContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ValueExpressionDefaultContext>(x, false, rb_cValueExpressionDefaultContext);
    }
  };

  template <>
  class To_Ruby<ValueExpressionDefaultContextProxy*> {
  public:
    VALUE convert(ValueExpressionDefaultContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ValueExpressionDefaultContextProxy>(x, false, rb_cValueExpressionDefaultContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ConcatenationContext*> {
  public:
    VALUE convert(PrestoParser::ConcatenationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ConcatenationContext>(x, false, rb_cConcatenationContext);
    }
  };

  template <>
  class To_Ruby<ConcatenationContextProxy*> {
  public:
    VALUE convert(ConcatenationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ConcatenationContextProxy>(x, false, rb_cConcatenationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ArithmeticBinaryContext*> {
  public:
    VALUE convert(PrestoParser::ArithmeticBinaryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ArithmeticBinaryContext>(x, false, rb_cArithmeticBinaryContext);
    }
  };

  template <>
  class To_Ruby<ArithmeticBinaryContextProxy*> {
  public:
    VALUE convert(ArithmeticBinaryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ArithmeticBinaryContextProxy>(x, false, rb_cArithmeticBinaryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ArithmeticUnaryContext*> {
  public:
    VALUE convert(PrestoParser::ArithmeticUnaryContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ArithmeticUnaryContext>(x, false, rb_cArithmeticUnaryContext);
    }
  };

  template <>
  class To_Ruby<ArithmeticUnaryContextProxy*> {
  public:
    VALUE convert(ArithmeticUnaryContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ArithmeticUnaryContextProxy>(x, false, rb_cArithmeticUnaryContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::AtTimeZoneContext*> {
  public:
    VALUE convert(PrestoParser::AtTimeZoneContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::AtTimeZoneContext>(x, false, rb_cAtTimeZoneContext);
    }
  };

  template <>
  class To_Ruby<AtTimeZoneContextProxy*> {
  public:
    VALUE convert(AtTimeZoneContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<AtTimeZoneContextProxy>(x, false, rb_cAtTimeZoneContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TimeZoneSpecifierContext*> {
  public:
    VALUE convert(PrestoParser::TimeZoneSpecifierContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TimeZoneSpecifierContext>(x, false, rb_cTimeZoneSpecifierContext);
    }
  };

  template <>
  class To_Ruby<TimeZoneSpecifierContextProxy*> {
  public:
    VALUE convert(TimeZoneSpecifierContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TimeZoneSpecifierContextProxy>(x, false, rb_cTimeZoneSpecifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::DereferenceContext*> {
  public:
    VALUE convert(PrestoParser::DereferenceContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::DereferenceContext>(x, false, rb_cDereferenceContext);
    }
  };

  template <>
  class To_Ruby<DereferenceContextProxy*> {
  public:
    VALUE convert(DereferenceContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<DereferenceContextProxy>(x, false, rb_cDereferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TypeConstructorContext*> {
  public:
    VALUE convert(PrestoParser::TypeConstructorContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TypeConstructorContext>(x, false, rb_cTypeConstructorContext);
    }
  };

  template <>
  class To_Ruby<TypeConstructorContextProxy*> {
  public:
    VALUE convert(TypeConstructorContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TypeConstructorContextProxy>(x, false, rb_cTypeConstructorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SpecialDateTimeFunctionContext*> {
  public:
    VALUE convert(PrestoParser::SpecialDateTimeFunctionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SpecialDateTimeFunctionContext>(x, false, rb_cSpecialDateTimeFunctionContext);
    }
  };

  template <>
  class To_Ruby<SpecialDateTimeFunctionContextProxy*> {
  public:
    VALUE convert(SpecialDateTimeFunctionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SpecialDateTimeFunctionContextProxy>(x, false, rb_cSpecialDateTimeFunctionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SubstringContext*> {
  public:
    VALUE convert(PrestoParser::SubstringContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SubstringContext>(x, false, rb_cSubstringContext);
    }
  };

  template <>
  class To_Ruby<SubstringContextProxy*> {
  public:
    VALUE convert(SubstringContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SubstringContextProxy>(x, false, rb_cSubstringContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::CastContext*> {
  public:
    VALUE convert(PrestoParser::CastContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::CastContext>(x, false, rb_cCastContext);
    }
  };

  template <>
  class To_Ruby<CastContextProxy*> {
  public:
    VALUE convert(CastContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<CastContextProxy>(x, false, rb_cCastContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::LambdaContext*> {
  public:
    VALUE convert(PrestoParser::LambdaContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::LambdaContext>(x, false, rb_cLambdaContext);
    }
  };

  template <>
  class To_Ruby<LambdaContextProxy*> {
  public:
    VALUE convert(LambdaContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<LambdaContextProxy>(x, false, rb_cLambdaContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ParenthesizedExpressionContext*> {
  public:
    VALUE convert(PrestoParser::ParenthesizedExpressionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ParenthesizedExpressionContext>(x, false, rb_cParenthesizedExpressionContext);
    }
  };

  template <>
  class To_Ruby<ParenthesizedExpressionContextProxy*> {
  public:
    VALUE convert(ParenthesizedExpressionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ParenthesizedExpressionContextProxy>(x, false, rb_cParenthesizedExpressionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ParameterContext*> {
  public:
    VALUE convert(PrestoParser::ParameterContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ParameterContext>(x, false, rb_cParameterContext);
    }
  };

  template <>
  class To_Ruby<ParameterContextProxy*> {
  public:
    VALUE convert(ParameterContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ParameterContextProxy>(x, false, rb_cParameterContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NormalizeContext*> {
  public:
    VALUE convert(PrestoParser::NormalizeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NormalizeContext>(x, false, rb_cNormalizeContext);
    }
  };

  template <>
  class To_Ruby<NormalizeContextProxy*> {
  public:
    VALUE convert(NormalizeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NormalizeContextProxy>(x, false, rb_cNormalizeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NormalFormContext*> {
  public:
    VALUE convert(PrestoParser::NormalFormContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NormalFormContext>(x, false, rb_cNormalFormContext);
    }
  };

  template <>
  class To_Ruby<NormalFormContextProxy*> {
  public:
    VALUE convert(NormalFormContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NormalFormContextProxy>(x, false, rb_cNormalFormContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::IntervalContext*> {
  public:
    VALUE convert(PrestoParser::IntervalContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::IntervalContext>(x, false, rb_cIntervalContext);
    }
  };

  template <>
  class To_Ruby<IntervalContextProxy*> {
  public:
    VALUE convert(IntervalContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<IntervalContextProxy>(x, false, rb_cIntervalContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::IntervalLiteralContext*> {
  public:
    VALUE convert(PrestoParser::IntervalLiteralContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::IntervalLiteralContext>(x, false, rb_cIntervalLiteralContext);
    }
  };

  template <>
  class To_Ruby<IntervalLiteralContextProxy*> {
  public:
    VALUE convert(IntervalLiteralContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<IntervalLiteralContextProxy>(x, false, rb_cIntervalLiteralContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NumberContext*> {
  public:
    VALUE convert(PrestoParser::NumberContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NumberContext>(x, false, rb_cNumberContext);
    }
  };

  template <>
  class To_Ruby<NumberContextProxy*> {
  public:
    VALUE convert(NumberContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NumberContextProxy>(x, false, rb_cNumberContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NumericLiteralContext*> {
  public:
    VALUE convert(PrestoParser::NumericLiteralContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NumericLiteralContext>(x, false, rb_cNumericLiteralContext);
    }
  };

  template <>
  class To_Ruby<NumericLiteralContextProxy*> {
  public:
    VALUE convert(NumericLiteralContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NumericLiteralContextProxy>(x, false, rb_cNumericLiteralContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BooleanValueContext*> {
  public:
    VALUE convert(PrestoParser::BooleanValueContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BooleanValueContext>(x, false, rb_cBooleanValueContext);
    }
  };

  template <>
  class To_Ruby<BooleanValueContextProxy*> {
  public:
    VALUE convert(BooleanValueContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BooleanValueContextProxy>(x, false, rb_cBooleanValueContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BooleanLiteralContext*> {
  public:
    VALUE convert(PrestoParser::BooleanLiteralContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BooleanLiteralContext>(x, false, rb_cBooleanLiteralContext);
    }
  };

  template <>
  class To_Ruby<BooleanLiteralContextProxy*> {
  public:
    VALUE convert(BooleanLiteralContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BooleanLiteralContextProxy>(x, false, rb_cBooleanLiteralContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SimpleCaseContext*> {
  public:
    VALUE convert(PrestoParser::SimpleCaseContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SimpleCaseContext>(x, false, rb_cSimpleCaseContext);
    }
  };

  template <>
  class To_Ruby<SimpleCaseContextProxy*> {
  public:
    VALUE convert(SimpleCaseContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SimpleCaseContextProxy>(x, false, rb_cSimpleCaseContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::WhenClauseContext*> {
  public:
    VALUE convert(PrestoParser::WhenClauseContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::WhenClauseContext>(x, false, rb_cWhenClauseContext);
    }
  };

  template <>
  class To_Ruby<WhenClauseContextProxy*> {
  public:
    VALUE convert(WhenClauseContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<WhenClauseContextProxy>(x, false, rb_cWhenClauseContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ColumnReferenceContext*> {
  public:
    VALUE convert(PrestoParser::ColumnReferenceContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ColumnReferenceContext>(x, false, rb_cColumnReferenceContext);
    }
  };

  template <>
  class To_Ruby<ColumnReferenceContextProxy*> {
  public:
    VALUE convert(ColumnReferenceContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ColumnReferenceContextProxy>(x, false, rb_cColumnReferenceContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NullLiteralContext*> {
  public:
    VALUE convert(PrestoParser::NullLiteralContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NullLiteralContext>(x, false, rb_cNullLiteralContext);
    }
  };

  template <>
  class To_Ruby<NullLiteralContextProxy*> {
  public:
    VALUE convert(NullLiteralContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NullLiteralContextProxy>(x, false, rb_cNullLiteralContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::RowConstructorContext*> {
  public:
    VALUE convert(PrestoParser::RowConstructorContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::RowConstructorContext>(x, false, rb_cRowConstructorContext);
    }
  };

  template <>
  class To_Ruby<RowConstructorContextProxy*> {
  public:
    VALUE convert(RowConstructorContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RowConstructorContextProxy>(x, false, rb_cRowConstructorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SubscriptContext*> {
  public:
    VALUE convert(PrestoParser::SubscriptContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SubscriptContext>(x, false, rb_cSubscriptContext);
    }
  };

  template <>
  class To_Ruby<SubscriptContextProxy*> {
  public:
    VALUE convert(SubscriptContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SubscriptContextProxy>(x, false, rb_cSubscriptContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SubqueryExpressionContext*> {
  public:
    VALUE convert(PrestoParser::SubqueryExpressionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SubqueryExpressionContext>(x, false, rb_cSubqueryExpressionContext);
    }
  };

  template <>
  class To_Ruby<SubqueryExpressionContextProxy*> {
  public:
    VALUE convert(SubqueryExpressionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SubqueryExpressionContextProxy>(x, false, rb_cSubqueryExpressionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BinaryLiteralContext*> {
  public:
    VALUE convert(PrestoParser::BinaryLiteralContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BinaryLiteralContext>(x, false, rb_cBinaryLiteralContext);
    }
  };

  template <>
  class To_Ruby<BinaryLiteralContextProxy*> {
  public:
    VALUE convert(BinaryLiteralContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BinaryLiteralContextProxy>(x, false, rb_cBinaryLiteralContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ExtractContext*> {
  public:
    VALUE convert(PrestoParser::ExtractContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ExtractContext>(x, false, rb_cExtractContext);
    }
  };

  template <>
  class To_Ruby<ExtractContextProxy*> {
  public:
    VALUE convert(ExtractContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ExtractContextProxy>(x, false, rb_cExtractContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::StringLiteralContext*> {
  public:
    VALUE convert(PrestoParser::StringLiteralContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::StringLiteralContext>(x, false, rb_cStringLiteralContext);
    }
  };

  template <>
  class To_Ruby<StringLiteralContextProxy*> {
  public:
    VALUE convert(StringLiteralContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<StringLiteralContextProxy>(x, false, rb_cStringLiteralContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ArrayConstructorContext*> {
  public:
    VALUE convert(PrestoParser::ArrayConstructorContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ArrayConstructorContext>(x, false, rb_cArrayConstructorContext);
    }
  };

  template <>
  class To_Ruby<ArrayConstructorContextProxy*> {
  public:
    VALUE convert(ArrayConstructorContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ArrayConstructorContextProxy>(x, false, rb_cArrayConstructorContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::FunctionCallContext*> {
  public:
    VALUE convert(PrestoParser::FunctionCallContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::FunctionCallContext>(x, false, rb_cFunctionCallContext);
    }
  };

  template <>
  class To_Ruby<FunctionCallContextProxy*> {
  public:
    VALUE convert(FunctionCallContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<FunctionCallContextProxy>(x, false, rb_cFunctionCallContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::FilterContext*> {
  public:
    VALUE convert(PrestoParser::FilterContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::FilterContext>(x, false, rb_cFilterContext);
    }
  };

  template <>
  class To_Ruby<FilterContextProxy*> {
  public:
    VALUE convert(FilterContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<FilterContextProxy>(x, false, rb_cFilterContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::OverContext*> {
  public:
    VALUE convert(PrestoParser::OverContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::OverContext>(x, false, rb_cOverContext);
    }
  };

  template <>
  class To_Ruby<OverContextProxy*> {
  public:
    VALUE convert(OverContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<OverContextProxy>(x, false, rb_cOverContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ExistsContext*> {
  public:
    VALUE convert(PrestoParser::ExistsContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ExistsContext>(x, false, rb_cExistsContext);
    }
  };

  template <>
  class To_Ruby<ExistsContextProxy*> {
  public:
    VALUE convert(ExistsContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ExistsContextProxy>(x, false, rb_cExistsContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::PositionContext*> {
  public:
    VALUE convert(PrestoParser::PositionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::PositionContext>(x, false, rb_cPositionContext);
    }
  };

  template <>
  class To_Ruby<PositionContextProxy*> {
  public:
    VALUE convert(PositionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<PositionContextProxy>(x, false, rb_cPositionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SearchedCaseContext*> {
  public:
    VALUE convert(PrestoParser::SearchedCaseContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SearchedCaseContext>(x, false, rb_cSearchedCaseContext);
    }
  };

  template <>
  class To_Ruby<SearchedCaseContextProxy*> {
  public:
    VALUE convert(SearchedCaseContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SearchedCaseContextProxy>(x, false, rb_cSearchedCaseContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TimeZoneIntervalContext*> {
  public:
    VALUE convert(PrestoParser::TimeZoneIntervalContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TimeZoneIntervalContext>(x, false, rb_cTimeZoneIntervalContext);
    }
  };

  template <>
  class To_Ruby<TimeZoneIntervalContextProxy*> {
  public:
    VALUE convert(TimeZoneIntervalContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TimeZoneIntervalContextProxy>(x, false, rb_cTimeZoneIntervalContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TimeZoneStringContext*> {
  public:
    VALUE convert(PrestoParser::TimeZoneStringContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TimeZoneStringContext>(x, false, rb_cTimeZoneStringContext);
    }
  };

  template <>
  class To_Ruby<TimeZoneStringContextProxy*> {
  public:
    VALUE convert(TimeZoneStringContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TimeZoneStringContextProxy>(x, false, rb_cTimeZoneStringContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::IntervalFieldContext*> {
  public:
    VALUE convert(PrestoParser::IntervalFieldContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::IntervalFieldContext>(x, false, rb_cIntervalFieldContext);
    }
  };

  template <>
  class To_Ruby<IntervalFieldContextProxy*> {
  public:
    VALUE convert(IntervalFieldContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<IntervalFieldContextProxy>(x, false, rb_cIntervalFieldContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BaseTypeContext*> {
  public:
    VALUE convert(PrestoParser::BaseTypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BaseTypeContext>(x, false, rb_cBaseTypeContext);
    }
  };

  template <>
  class To_Ruby<BaseTypeContextProxy*> {
  public:
    VALUE convert(BaseTypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BaseTypeContextProxy>(x, false, rb_cBaseTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TypeParameterContext*> {
  public:
    VALUE convert(PrestoParser::TypeParameterContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TypeParameterContext>(x, false, rb_cTypeParameterContext);
    }
  };

  template <>
  class To_Ruby<TypeParameterContextProxy*> {
  public:
    VALUE convert(TypeParameterContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TypeParameterContextProxy>(x, false, rb_cTypeParameterContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::WindowFrameContext*> {
  public:
    VALUE convert(PrestoParser::WindowFrameContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::WindowFrameContext>(x, false, rb_cWindowFrameContext);
    }
  };

  template <>
  class To_Ruby<WindowFrameContextProxy*> {
  public:
    VALUE convert(WindowFrameContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<WindowFrameContextProxy>(x, false, rb_cWindowFrameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::FrameBoundContext*> {
  public:
    VALUE convert(PrestoParser::FrameBoundContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::FrameBoundContext>(x, false, rb_cFrameBoundContext);
    }
  };

  template <>
  class To_Ruby<FrameBoundContextProxy*> {
  public:
    VALUE convert(FrameBoundContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<FrameBoundContextProxy>(x, false, rb_cFrameBoundContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BoundedFrameContext*> {
  public:
    VALUE convert(PrestoParser::BoundedFrameContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BoundedFrameContext>(x, false, rb_cBoundedFrameContext);
    }
  };

  template <>
  class To_Ruby<BoundedFrameContextProxy*> {
  public:
    VALUE convert(BoundedFrameContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BoundedFrameContextProxy>(x, false, rb_cBoundedFrameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::UnboundedFrameContext*> {
  public:
    VALUE convert(PrestoParser::UnboundedFrameContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::UnboundedFrameContext>(x, false, rb_cUnboundedFrameContext);
    }
  };

  template <>
  class To_Ruby<UnboundedFrameContextProxy*> {
  public:
    VALUE convert(UnboundedFrameContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<UnboundedFrameContextProxy>(x, false, rb_cUnboundedFrameContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::CurrentRowBoundContext*> {
  public:
    VALUE convert(PrestoParser::CurrentRowBoundContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::CurrentRowBoundContext>(x, false, rb_cCurrentRowBoundContext);
    }
  };

  template <>
  class To_Ruby<CurrentRowBoundContextProxy*> {
  public:
    VALUE convert(CurrentRowBoundContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<CurrentRowBoundContextProxy>(x, false, rb_cCurrentRowBoundContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ExplainOptionContext*> {
  public:
    VALUE convert(PrestoParser::ExplainOptionContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ExplainOptionContext>(x, false, rb_cExplainOptionContext);
    }
  };

  template <>
  class To_Ruby<ExplainOptionContextProxy*> {
  public:
    VALUE convert(ExplainOptionContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ExplainOptionContextProxy>(x, false, rb_cExplainOptionContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ExplainFormatContext*> {
  public:
    VALUE convert(PrestoParser::ExplainFormatContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ExplainFormatContext>(x, false, rb_cExplainFormatContext);
    }
  };

  template <>
  class To_Ruby<ExplainFormatContextProxy*> {
  public:
    VALUE convert(ExplainFormatContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ExplainFormatContextProxy>(x, false, rb_cExplainFormatContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ExplainTypeContext*> {
  public:
    VALUE convert(PrestoParser::ExplainTypeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ExplainTypeContext>(x, false, rb_cExplainTypeContext);
    }
  };

  template <>
  class To_Ruby<ExplainTypeContextProxy*> {
  public:
    VALUE convert(ExplainTypeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ExplainTypeContextProxy>(x, false, rb_cExplainTypeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TransactionModeContext*> {
  public:
    VALUE convert(PrestoParser::TransactionModeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TransactionModeContext>(x, false, rb_cTransactionModeContext);
    }
  };

  template <>
  class To_Ruby<TransactionModeContextProxy*> {
  public:
    VALUE convert(TransactionModeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TransactionModeContextProxy>(x, false, rb_cTransactionModeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::TransactionAccessModeContext*> {
  public:
    VALUE convert(PrestoParser::TransactionAccessModeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::TransactionAccessModeContext>(x, false, rb_cTransactionAccessModeContext);
    }
  };

  template <>
  class To_Ruby<TransactionAccessModeContextProxy*> {
  public:
    VALUE convert(TransactionAccessModeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<TransactionAccessModeContextProxy>(x, false, rb_cTransactionAccessModeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::IsolationLevelContext*> {
  public:
    VALUE convert(PrestoParser::IsolationLevelContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::IsolationLevelContext>(x, false, rb_cIsolationLevelContext);
    }
  };

  template <>
  class To_Ruby<IsolationLevelContextProxy*> {
  public:
    VALUE convert(IsolationLevelContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<IsolationLevelContextProxy>(x, false, rb_cIsolationLevelContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::LevelOfIsolationContext*> {
  public:
    VALUE convert(PrestoParser::LevelOfIsolationContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::LevelOfIsolationContext>(x, false, rb_cLevelOfIsolationContext);
    }
  };

  template <>
  class To_Ruby<LevelOfIsolationContextProxy*> {
  public:
    VALUE convert(LevelOfIsolationContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<LevelOfIsolationContextProxy>(x, false, rb_cLevelOfIsolationContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ReadUncommittedContext*> {
  public:
    VALUE convert(PrestoParser::ReadUncommittedContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ReadUncommittedContext>(x, false, rb_cReadUncommittedContext);
    }
  };

  template <>
  class To_Ruby<ReadUncommittedContextProxy*> {
  public:
    VALUE convert(ReadUncommittedContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ReadUncommittedContextProxy>(x, false, rb_cReadUncommittedContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::SerializableContext*> {
  public:
    VALUE convert(PrestoParser::SerializableContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::SerializableContext>(x, false, rb_cSerializableContext);
    }
  };

  template <>
  class To_Ruby<SerializableContextProxy*> {
  public:
    VALUE convert(SerializableContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<SerializableContextProxy>(x, false, rb_cSerializableContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::ReadCommittedContext*> {
  public:
    VALUE convert(PrestoParser::ReadCommittedContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::ReadCommittedContext>(x, false, rb_cReadCommittedContext);
    }
  };

  template <>
  class To_Ruby<ReadCommittedContextProxy*> {
  public:
    VALUE convert(ReadCommittedContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ReadCommittedContextProxy>(x, false, rb_cReadCommittedContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::RepeatableReadContext*> {
  public:
    VALUE convert(PrestoParser::RepeatableReadContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::RepeatableReadContext>(x, false, rb_cRepeatableReadContext);
    }
  };

  template <>
  class To_Ruby<RepeatableReadContextProxy*> {
  public:
    VALUE convert(RepeatableReadContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<RepeatableReadContextProxy>(x, false, rb_cRepeatableReadContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::CallArgumentContext*> {
  public:
    VALUE convert(PrestoParser::CallArgumentContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::CallArgumentContext>(x, false, rb_cCallArgumentContext);
    }
  };

  template <>
  class To_Ruby<CallArgumentContextProxy*> {
  public:
    VALUE convert(CallArgumentContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<CallArgumentContextProxy>(x, false, rb_cCallArgumentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::PositionalArgumentContext*> {
  public:
    VALUE convert(PrestoParser::PositionalArgumentContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::PositionalArgumentContext>(x, false, rb_cPositionalArgumentContext);
    }
  };

  template <>
  class To_Ruby<PositionalArgumentContextProxy*> {
  public:
    VALUE convert(PositionalArgumentContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<PositionalArgumentContextProxy>(x, false, rb_cPositionalArgumentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NamedArgumentContext*> {
  public:
    VALUE convert(PrestoParser::NamedArgumentContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NamedArgumentContext>(x, false, rb_cNamedArgumentContext);
    }
  };

  template <>
  class To_Ruby<NamedArgumentContextProxy*> {
  public:
    VALUE convert(NamedArgumentContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NamedArgumentContextProxy>(x, false, rb_cNamedArgumentContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::PrivilegeContext*> {
  public:
    VALUE convert(PrestoParser::PrivilegeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::PrivilegeContext>(x, false, rb_cPrivilegeContext);
    }
  };

  template <>
  class To_Ruby<PrivilegeContextProxy*> {
  public:
    VALUE convert(PrivilegeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<PrivilegeContextProxy>(x, false, rb_cPrivilegeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::BackQuotedIdentifierContext*> {
  public:
    VALUE convert(PrestoParser::BackQuotedIdentifierContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::BackQuotedIdentifierContext>(x, false, rb_cBackQuotedIdentifierContext);
    }
  };

  template <>
  class To_Ruby<BackQuotedIdentifierContextProxy*> {
  public:
    VALUE convert(BackQuotedIdentifierContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<BackQuotedIdentifierContextProxy>(x, false, rb_cBackQuotedIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QuotedIdentifierContext*> {
  public:
    VALUE convert(PrestoParser::QuotedIdentifierContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QuotedIdentifierContext>(x, false, rb_cQuotedIdentifierContext);
    }
  };

  template <>
  class To_Ruby<QuotedIdentifierContextProxy*> {
  public:
    VALUE convert(QuotedIdentifierContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QuotedIdentifierContextProxy>(x, false, rb_cQuotedIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::QuotedIdentifierAlternativeContext*> {
  public:
    VALUE convert(PrestoParser::QuotedIdentifierAlternativeContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::QuotedIdentifierAlternativeContext>(x, false, rb_cQuotedIdentifierAlternativeContext);
    }
  };

  template <>
  class To_Ruby<QuotedIdentifierAlternativeContextProxy*> {
  public:
    VALUE convert(QuotedIdentifierAlternativeContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<QuotedIdentifierAlternativeContextProxy>(x, false, rb_cQuotedIdentifierAlternativeContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::DigitIdentifierContext*> {
  public:
    VALUE convert(PrestoParser::DigitIdentifierContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::DigitIdentifierContext>(x, false, rb_cDigitIdentifierContext);
    }
  };

  template <>
  class To_Ruby<DigitIdentifierContextProxy*> {
  public:
    VALUE convert(DigitIdentifierContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<DigitIdentifierContextProxy>(x, false, rb_cDigitIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::UnquotedIdentifierContext*> {
  public:
    VALUE convert(PrestoParser::UnquotedIdentifierContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::UnquotedIdentifierContext>(x, false, rb_cUnquotedIdentifierContext);
    }
  };

  template <>
  class To_Ruby<UnquotedIdentifierContextProxy*> {
  public:
    VALUE convert(UnquotedIdentifierContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<UnquotedIdentifierContextProxy>(x, false, rb_cUnquotedIdentifierContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::NonReservedContext*> {
  public:
    VALUE convert(PrestoParser::NonReservedContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::NonReservedContext>(x, false, rb_cNonReservedContext);
    }
  };

  template <>
  class To_Ruby<NonReservedContextProxy*> {
  public:
    VALUE convert(NonReservedContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<NonReservedContextProxy>(x, false, rb_cNonReservedContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::DecimalLiteralContext*> {
  public:
    VALUE convert(PrestoParser::DecimalLiteralContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::DecimalLiteralContext>(x, false, rb_cDecimalLiteralContext);
    }
  };

  template <>
  class To_Ruby<DecimalLiteralContextProxy*> {
  public:
    VALUE convert(DecimalLiteralContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<DecimalLiteralContextProxy>(x, false, rb_cDecimalLiteralContext);
    }
  };
}

namespace Rice::detail {
  template <>
  class To_Ruby<PrestoParser::IntegerLiteralContext*> {
  public:
    VALUE convert(PrestoParser::IntegerLiteralContext* const &x) {
      if (!x) return Nil;
      return Data_Object<PrestoParser::IntegerLiteralContext>(x, false, rb_cIntegerLiteralContext);
    }
  };

  template <>
  class To_Ruby<IntegerLiteralContextProxy*> {
  public:
    VALUE convert(IntegerLiteralContextProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<IntegerLiteralContextProxy>(x, false, rb_cIntegerLiteralContext);
    }
  };
}


Object SingleQueryContextProxy::query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SingleQueryContext*)orig) -> query();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SingleQueryContextProxy::EOF() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SingleQueryContext*)orig) -> EOF();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryContextProxy::queryNoWith() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QueryContext*)orig) -> queryNoWith();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QueryContextProxy::with() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QueryContext*)orig) -> with();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QueryNoWithContextProxy::queryTerm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QueryNoWithContext*)orig) -> queryTerm();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QueryNoWithContextProxy::sortItem() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::QueryNoWithContext*)orig) -> sortItem().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(sortItemAt(i));
    }
  }

  return std::move(a);
}

Object QueryNoWithContextProxy::sortItemAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QueryNoWithContext*)orig) -> sortItem(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QueryNoWithContextProxy::ORDER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QueryNoWithContext*)orig) -> ORDER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryNoWithContextProxy::BY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QueryNoWithContext*)orig) -> BY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryNoWithContextProxy::LIMIT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QueryNoWithContext*)orig) -> LIMIT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryNoWithContextProxy::INTEGER_VALUE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QueryNoWithContext*)orig) -> INTEGER_VALUE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryNoWithContextProxy::ALL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QueryNoWithContext*)orig) -> ALL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WithContextProxy::namedQuery() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::WithContext*)orig) -> namedQuery().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(namedQueryAt(i));
    }
  }

  return std::move(a);
}

Object WithContextProxy::namedQueryAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::WithContext*)orig) -> namedQuery(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object WithContextProxy::WITH() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::WithContext*)orig) -> WITH();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WithContextProxy::RECURSIVE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::WithContext*)orig) -> RECURSIVE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NamedQueryContextProxy::query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NamedQueryContext*)orig) -> query();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NamedQueryContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NamedQueryContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NamedQueryContextProxy::columnAliases() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NamedQueryContext*)orig) -> columnAliases();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NamedQueryContextProxy::AS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NamedQueryContext*)orig) -> AS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TableElementContextProxy::columnDefinition() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TableElementContext*)orig) -> columnDefinition();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TableElementContextProxy::likeClause() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TableElementContext*)orig) -> likeClause();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ColumnDefinitionContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ColumnDefinitionContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ColumnDefinitionContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ColumnDefinitionContext*)orig) -> type();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ColumnDefinitionContextProxy::COMMENT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ColumnDefinitionContext*)orig) -> COMMENT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ColumnDefinitionContextProxy::STRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ColumnDefinitionContext*)orig) -> STRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LikeClauseContextProxy::qualifiedName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::LikeClauseContext*)orig) -> qualifiedName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object LikeClauseContextProxy::LIKE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LikeClauseContext*)orig) -> LIKE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LikeClauseContextProxy::PROPERTIES() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LikeClauseContext*)orig) -> PROPERTIES();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LikeClauseContextProxy::INCLUDING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LikeClauseContext*)orig) -> INCLUDING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LikeClauseContextProxy::EXCLUDING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LikeClauseContext*)orig) -> EXCLUDING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeContextProxy::type() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::TypeContext*)orig) -> type().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(typeAt(i));
    }
  }

  return std::move(a);
}

Object TypeContextProxy::typeAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TypeContext*)orig) -> type(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TypeContextProxy::identifier() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::TypeContext*)orig) -> identifier().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(identifierAt(i));
    }
  }

  return std::move(a);
}

Object TypeContextProxy::identifierAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TypeContext*)orig) -> identifier(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TypeContextProxy::baseType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TypeContext*)orig) -> baseType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TypeContextProxy::typeParameter() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::TypeContext*)orig) -> typeParameter().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(typeParameterAt(i));
    }
  }

  return std::move(a);
}

Object TypeContextProxy::typeParameterAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TypeContext*)orig) -> typeParameter(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TypeContextProxy::ARRAY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TypeContext*)orig) -> ARRAY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeContextProxy::LT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TypeContext*)orig) -> LT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeContextProxy::GT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TypeContext*)orig) -> GT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeContextProxy::MAP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TypeContext*)orig) -> MAP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeContextProxy::ROW() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TypeContext*)orig) -> ROW();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QualifiedNameContextProxy::identifier() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::QualifiedNameContext*)orig) -> identifier().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(identifierAt(i));
    }
  }

  return std::move(a);
}

Object QualifiedNameContextProxy::identifierAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QualifiedNameContext*)orig) -> identifier(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TablePropertiesContextProxy::tableProperty() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::TablePropertiesContext*)orig) -> tableProperty().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(tablePropertyAt(i));
    }
  }

  return std::move(a);
}

Object TablePropertiesContextProxy::tablePropertyAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TablePropertiesContext*)orig) -> tableProperty(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TablePropertyContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TablePropertyContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TablePropertyContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TablePropertyContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TablePropertyContextProxy::EQ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TablePropertyContext*)orig) -> EQ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExpressionContextProxy::booleanExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ExpressionContext*)orig) -> booleanExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SortItemContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SortItemContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SortItemContextProxy::NULLS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SortItemContext*)orig) -> NULLS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SortItemContextProxy::ASC() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SortItemContext*)orig) -> ASC();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SortItemContextProxy::DESC() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SortItemContext*)orig) -> DESC();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SortItemContextProxy::FIRST() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SortItemContext*)orig) -> FIRST();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SortItemContextProxy::LAST() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SortItemContext*)orig) -> LAST();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryTermDefaultContextProxy::queryPrimary() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QueryTermDefaultContext*)orig) -> queryPrimary();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SetOperationContextProxy::queryTerm() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::SetOperationContext*)orig) -> queryTerm().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(queryTermAt(i));
    }
  }

  return std::move(a);
}

Object SetOperationContextProxy::queryTermAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SetOperationContext*)orig) -> queryTerm(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SetOperationContextProxy::setQuantifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SetOperationContext*)orig) -> setQuantifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SetOperationContextProxy::INTERSECT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SetOperationContext*)orig) -> INTERSECT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetOperationContextProxy::UNION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SetOperationContext*)orig) -> UNION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetOperationContextProxy::EXCEPT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SetOperationContext*)orig) -> EXCEPT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetQuantifierContextProxy::DISTINCT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SetQuantifierContext*)orig) -> DISTINCT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SetQuantifierContextProxy::ALL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SetQuantifierContext*)orig) -> ALL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubqueryContextProxy::queryNoWith() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SubqueryContext*)orig) -> queryNoWith();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QuerySpecificationContextProxy::selectItem() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::QuerySpecificationContext*)orig) -> selectItem().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(selectItemAt(i));
    }
  }

  return std::move(a);
}

Object QuerySpecificationContextProxy::selectItemAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuerySpecificationContext*)orig) -> selectItem(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QuerySpecificationContextProxy::setQuantifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuerySpecificationContext*)orig) -> setQuantifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QuerySpecificationContextProxy::relation() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::QuerySpecificationContext*)orig) -> relation().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(relationAt(i));
    }
  }

  return std::move(a);
}

Object QuerySpecificationContextProxy::relationAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuerySpecificationContext*)orig) -> relation(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QuerySpecificationContextProxy::groupBy() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuerySpecificationContext*)orig) -> groupBy();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QuerySpecificationContextProxy::booleanExpression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::QuerySpecificationContext*)orig) -> booleanExpression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(booleanExpressionAt(i));
    }
  }

  return std::move(a);
}

Object QuerySpecificationContextProxy::booleanExpressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuerySpecificationContext*)orig) -> booleanExpression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QuerySpecificationContextProxy::SELECT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QuerySpecificationContext*)orig) -> SELECT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuerySpecificationContextProxy::FROM() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QuerySpecificationContext*)orig) -> FROM();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuerySpecificationContextProxy::WHERE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QuerySpecificationContext*)orig) -> WHERE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuerySpecificationContextProxy::GROUP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QuerySpecificationContext*)orig) -> GROUP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuerySpecificationContextProxy::BY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QuerySpecificationContext*)orig) -> BY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuerySpecificationContextProxy::HAVING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QuerySpecificationContext*)orig) -> HAVING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QueryPrimaryDefaultContextProxy::querySpecification() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QueryPrimaryDefaultContext*)orig) -> querySpecification();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TableContextProxy::qualifiedName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TableContext*)orig) -> qualifiedName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TableContextProxy::TABLE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TableContext*)orig) -> TABLE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object InlineTableContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::InlineTableContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object InlineTableContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::InlineTableContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object InlineTableContextProxy::VALUES() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::InlineTableContext*)orig) -> VALUES();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object GroupByContextProxy::groupingElement() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::GroupByContext*)orig) -> groupingElement().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(groupingElementAt(i));
    }
  }

  return std::move(a);
}

Object GroupByContextProxy::groupingElementAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::GroupByContext*)orig) -> groupingElement(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object GroupByContextProxy::setQuantifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::GroupByContext*)orig) -> setQuantifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object MultipleGroupingSetsContextProxy::groupingSet() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::MultipleGroupingSetsContext*)orig) -> groupingSet().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(groupingSetAt(i));
    }
  }

  return std::move(a);
}

Object MultipleGroupingSetsContextProxy::groupingSetAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::MultipleGroupingSetsContext*)orig) -> groupingSet(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object MultipleGroupingSetsContextProxy::GROUPING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::MultipleGroupingSetsContext*)orig) -> GROUPING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object MultipleGroupingSetsContextProxy::SETS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::MultipleGroupingSetsContext*)orig) -> SETS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object GroupingSetContextProxy::qualifiedName() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::GroupingSetContext*)orig) -> qualifiedName().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(qualifiedNameAt(i));
    }
  }

  return std::move(a);
}

Object GroupingSetContextProxy::qualifiedNameAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::GroupingSetContext*)orig) -> qualifiedName(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object GroupingExpressionsContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::GroupingExpressionsContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object GroupingExpressionsContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::GroupingExpressionsContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SingleGroupingSetContextProxy::groupingExpressions() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SingleGroupingSetContext*)orig) -> groupingExpressions();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object CubeContextProxy::qualifiedName() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::CubeContext*)orig) -> qualifiedName().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(qualifiedNameAt(i));
    }
  }

  return std::move(a);
}

Object CubeContextProxy::qualifiedNameAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::CubeContext*)orig) -> qualifiedName(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object CubeContextProxy::CUBE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::CubeContext*)orig) -> CUBE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RollupContextProxy::qualifiedName() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::RollupContext*)orig) -> qualifiedName().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(qualifiedNameAt(i));
    }
  }

  return std::move(a);
}

Object RollupContextProxy::qualifiedNameAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::RollupContext*)orig) -> qualifiedName(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object RollupContextProxy::ROLLUP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::RollupContext*)orig) -> ROLLUP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ColumnAliasesContextProxy::identifier() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::ColumnAliasesContext*)orig) -> identifier().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(identifierAt(i));
    }
  }

  return std::move(a);
}

Object ColumnAliasesContextProxy::identifierAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ColumnAliasesContext*)orig) -> identifier(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SelectAllContextProxy::qualifiedName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SelectAllContext*)orig) -> qualifiedName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SelectAllContextProxy::ASTERISK() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SelectAllContext*)orig) -> ASTERISK();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SelectSingleContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SelectSingleContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SelectSingleContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SelectSingleContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SelectSingleContextProxy::AS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SelectSingleContext*)orig) -> AS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SampledRelationContextProxy::aliasedRelation() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SampledRelationContext*)orig) -> aliasedRelation();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SampledRelationContextProxy::sampleType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SampledRelationContext*)orig) -> sampleType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SampledRelationContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SampledRelationContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SampledRelationContextProxy::TABLESAMPLE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SampledRelationContext*)orig) -> TABLESAMPLE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RelationDefaultContextProxy::sampledRelation() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::RelationDefaultContext*)orig) -> sampledRelation();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object JoinRelationContextProxy::relation() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::JoinRelationContext*)orig) -> relation().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(relationAt(i));
    }
  }

  return std::move(a);
}

Object JoinRelationContextProxy::relationAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::JoinRelationContext*)orig) -> relation(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object JoinRelationContextProxy::joinType() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::JoinRelationContext*)orig) -> joinType();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object JoinRelationContextProxy::joinCriteria() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::JoinRelationContext*)orig) -> joinCriteria();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object JoinRelationContextProxy::sampledRelation() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::JoinRelationContext*)orig) -> sampledRelation();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object JoinRelationContextProxy::CROSS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinRelationContext*)orig) -> CROSS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinRelationContextProxy::JOIN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinRelationContext*)orig) -> JOIN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinRelationContextProxy::NATURAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinRelationContext*)orig) -> NATURAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinTypeContextProxy::INNER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinTypeContext*)orig) -> INNER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinTypeContextProxy::LEFT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinTypeContext*)orig) -> LEFT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinTypeContextProxy::OUTER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinTypeContext*)orig) -> OUTER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinTypeContextProxy::RIGHT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinTypeContext*)orig) -> RIGHT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinTypeContextProxy::FULL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinTypeContext*)orig) -> FULL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinCriteriaContextProxy::booleanExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::JoinCriteriaContext*)orig) -> booleanExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object JoinCriteriaContextProxy::identifier() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::JoinCriteriaContext*)orig) -> identifier().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(identifierAt(i));
    }
  }

  return std::move(a);
}

Object JoinCriteriaContextProxy::identifierAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::JoinCriteriaContext*)orig) -> identifier(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object JoinCriteriaContextProxy::ON() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinCriteriaContext*)orig) -> ON();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object JoinCriteriaContextProxy::USING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::JoinCriteriaContext*)orig) -> USING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AliasedRelationContextProxy::relationPrimary() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::AliasedRelationContext*)orig) -> relationPrimary();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object AliasedRelationContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::AliasedRelationContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object AliasedRelationContextProxy::columnAliases() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::AliasedRelationContext*)orig) -> columnAliases();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object AliasedRelationContextProxy::AS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::AliasedRelationContext*)orig) -> AS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SampleTypeContextProxy::BERNOULLI() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SampleTypeContext*)orig) -> BERNOULLI();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SampleTypeContextProxy::SYSTEM() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SampleTypeContext*)orig) -> SYSTEM();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SampleTypeContextProxy::POISSONIZED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SampleTypeContext*)orig) -> POISSONIZED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubqueryRelationContextProxy::query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SubqueryRelationContext*)orig) -> query();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ParenthesizedRelationContextProxy::relation() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ParenthesizedRelationContext*)orig) -> relation();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object UnnestContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::UnnestContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object UnnestContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::UnnestContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object UnnestContextProxy::UNNEST() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::UnnestContext*)orig) -> UNNEST();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnnestContextProxy::WITH() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::UnnestContext*)orig) -> WITH();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnnestContextProxy::ORDINALITY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::UnnestContext*)orig) -> ORDINALITY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TableNameContextProxy::qualifiedName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TableNameContext*)orig) -> qualifiedName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object LogicalNotContextProxy::booleanExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::LogicalNotContext*)orig) -> booleanExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object LogicalNotContextProxy::NOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LogicalNotContext*)orig) -> NOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PredicatedContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::PredicatedContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object PredicatedContextProxy::predicate() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::PredicatedContext*)orig) -> predicate();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object BooleanDefaultContextProxy::predicated() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::BooleanDefaultContext*)orig) -> predicated();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object LogicalBinaryContextProxy::booleanExpression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::LogicalBinaryContext*)orig) -> booleanExpression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(booleanExpressionAt(i));
    }
  }

  return std::move(a);
}

Object LogicalBinaryContextProxy::booleanExpressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::LogicalBinaryContext*)orig) -> booleanExpression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object LogicalBinaryContextProxy::AND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LogicalBinaryContext*)orig) -> AND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LogicalBinaryContextProxy::OR() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LogicalBinaryContext*)orig) -> OR();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonOperatorContextProxy::EQ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonOperatorContext*)orig) -> EQ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonOperatorContextProxy::NEQ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonOperatorContext*)orig) -> NEQ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonOperatorContextProxy::LT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonOperatorContext*)orig) -> LT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonOperatorContextProxy::LTE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonOperatorContext*)orig) -> LTE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonOperatorContextProxy::GT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonOperatorContext*)orig) -> GT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonOperatorContextProxy::GTE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonOperatorContext*)orig) -> GTE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonContextProxy::comparisonOperator() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ComparisonContext*)orig) -> comparisonOperator();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ComparisonContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ComparisonContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object LikeContextProxy::valueExpression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::LikeContext*)orig) -> valueExpression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(valueExpressionAt(i));
    }
  }

  return std::move(a);
}

Object LikeContextProxy::valueExpressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::LikeContext*)orig) -> valueExpression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object LikeContextProxy::LIKE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LikeContext*)orig) -> LIKE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LikeContextProxy::NOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LikeContext*)orig) -> NOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LikeContextProxy::ESCAPE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::LikeContext*)orig) -> ESCAPE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object InSubqueryContextProxy::query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::InSubqueryContext*)orig) -> query();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object InSubqueryContextProxy::IN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::InSubqueryContext*)orig) -> IN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object InSubqueryContextProxy::NOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::InSubqueryContext*)orig) -> NOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DistinctFromContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::DistinctFromContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object DistinctFromContextProxy::IS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::DistinctFromContext*)orig) -> IS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DistinctFromContextProxy::DISTINCT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::DistinctFromContext*)orig) -> DISTINCT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DistinctFromContextProxy::FROM() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::DistinctFromContext*)orig) -> FROM();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DistinctFromContextProxy::NOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::DistinctFromContext*)orig) -> NOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object InListContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::InListContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object InListContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::InListContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object InListContextProxy::IN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::InListContext*)orig) -> IN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object InListContextProxy::NOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::InListContext*)orig) -> NOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NullPredicateContextProxy::IS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NullPredicateContext*)orig) -> IS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NullPredicateContextProxy::NULLTOKEN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NullPredicateContext*)orig) -> NULLTOKEN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NullPredicateContextProxy::NOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NullPredicateContext*)orig) -> NOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BetweenContextProxy::valueExpression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::BetweenContext*)orig) -> valueExpression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(valueExpressionAt(i));
    }
  }

  return std::move(a);
}

Object BetweenContextProxy::valueExpressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::BetweenContext*)orig) -> valueExpression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object BetweenContextProxy::BETWEEN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BetweenContext*)orig) -> BETWEEN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BetweenContextProxy::AND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BetweenContext*)orig) -> AND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BetweenContextProxy::NOT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BetweenContext*)orig) -> NOT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuantifiedComparisonContextProxy::comparisonOperator() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuantifiedComparisonContext*)orig) -> comparisonOperator();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QuantifiedComparisonContextProxy::comparisonQuantifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuantifiedComparisonContext*)orig) -> comparisonQuantifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object QuantifiedComparisonContextProxy::query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuantifiedComparisonContext*)orig) -> query();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ComparisonQuantifierContextProxy::ALL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonQuantifierContext*)orig) -> ALL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonQuantifierContextProxy::SOME() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonQuantifierContext*)orig) -> SOME();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ComparisonQuantifierContextProxy::ANY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ComparisonQuantifierContext*)orig) -> ANY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ValueExpressionDefaultContextProxy::primaryExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ValueExpressionDefaultContext*)orig) -> primaryExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ConcatenationContextProxy::valueExpression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::ConcatenationContext*)orig) -> valueExpression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(valueExpressionAt(i));
    }
  }

  return std::move(a);
}

Object ConcatenationContextProxy::valueExpressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ConcatenationContext*)orig) -> valueExpression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ConcatenationContextProxy::CONCAT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ConcatenationContext*)orig) -> CONCAT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArithmeticBinaryContextProxy::valueExpression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::ArithmeticBinaryContext*)orig) -> valueExpression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(valueExpressionAt(i));
    }
  }

  return std::move(a);
}

Object ArithmeticBinaryContextProxy::valueExpressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ArithmeticBinaryContext*)orig) -> valueExpression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ArithmeticBinaryContextProxy::ASTERISK() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ArithmeticBinaryContext*)orig) -> ASTERISK();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArithmeticBinaryContextProxy::SLASH() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ArithmeticBinaryContext*)orig) -> SLASH();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArithmeticBinaryContextProxy::PERCENT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ArithmeticBinaryContext*)orig) -> PERCENT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArithmeticBinaryContextProxy::PLUS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ArithmeticBinaryContext*)orig) -> PLUS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArithmeticBinaryContextProxy::MINUS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ArithmeticBinaryContext*)orig) -> MINUS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArithmeticUnaryContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ArithmeticUnaryContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ArithmeticUnaryContextProxy::MINUS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ArithmeticUnaryContext*)orig) -> MINUS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArithmeticUnaryContextProxy::PLUS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ArithmeticUnaryContext*)orig) -> PLUS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object AtTimeZoneContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::AtTimeZoneContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object AtTimeZoneContextProxy::timeZoneSpecifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::AtTimeZoneContext*)orig) -> timeZoneSpecifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object AtTimeZoneContextProxy::AT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::AtTimeZoneContext*)orig) -> AT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DereferenceContextProxy::primaryExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::DereferenceContext*)orig) -> primaryExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object DereferenceContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::DereferenceContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TypeConstructorContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TypeConstructorContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TypeConstructorContextProxy::STRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TypeConstructorContext*)orig) -> STRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeConstructorContextProxy::DOUBLE_PRECISION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TypeConstructorContext*)orig) -> DOUBLE_PRECISION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SpecialDateTimeFunctionContextProxy::CURRENT_DATE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SpecialDateTimeFunctionContext*)orig) -> CURRENT_DATE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SpecialDateTimeFunctionContextProxy::CURRENT_TIME() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SpecialDateTimeFunctionContext*)orig) -> CURRENT_TIME();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SpecialDateTimeFunctionContextProxy::INTEGER_VALUE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SpecialDateTimeFunctionContext*)orig) -> INTEGER_VALUE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SpecialDateTimeFunctionContextProxy::CURRENT_TIMESTAMP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SpecialDateTimeFunctionContext*)orig) -> CURRENT_TIMESTAMP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SpecialDateTimeFunctionContextProxy::LOCALTIME() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SpecialDateTimeFunctionContext*)orig) -> LOCALTIME();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SpecialDateTimeFunctionContextProxy::LOCALTIMESTAMP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SpecialDateTimeFunctionContext*)orig) -> LOCALTIMESTAMP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubstringContextProxy::valueExpression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::SubstringContext*)orig) -> valueExpression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(valueExpressionAt(i));
    }
  }

  return std::move(a);
}

Object SubstringContextProxy::valueExpressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SubstringContext*)orig) -> valueExpression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SubstringContextProxy::SUBSTRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SubstringContext*)orig) -> SUBSTRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubstringContextProxy::FROM() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SubstringContext*)orig) -> FROM();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubstringContextProxy::FOR() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SubstringContext*)orig) -> FOR();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CastContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::CastContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object CastContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::CastContext*)orig) -> type();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object CastContextProxy::CAST() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::CastContext*)orig) -> CAST();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CastContextProxy::AS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::CastContext*)orig) -> AS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CastContextProxy::TRY_CAST() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::CastContext*)orig) -> TRY_CAST();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object LambdaContextProxy::identifier() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::LambdaContext*)orig) -> identifier().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(identifierAt(i));
    }
  }

  return std::move(a);
}

Object LambdaContextProxy::identifierAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::LambdaContext*)orig) -> identifier(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object LambdaContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::LambdaContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ParenthesizedExpressionContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ParenthesizedExpressionContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NormalizeContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NormalizeContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NormalizeContextProxy::normalForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NormalizeContext*)orig) -> normalForm();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NormalizeContextProxy::NORMALIZE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NormalizeContext*)orig) -> NORMALIZE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NormalFormContextProxy::NFD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NormalFormContext*)orig) -> NFD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NormalFormContextProxy::NFC() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NormalFormContext*)orig) -> NFC();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NormalFormContextProxy::NFKD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NormalFormContext*)orig) -> NFKD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NormalFormContextProxy::NFKC() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NormalFormContext*)orig) -> NFKC();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalContextProxy::intervalField() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::IntervalContext*)orig) -> intervalField().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(intervalFieldAt(i));
    }
  }

  return std::move(a);
}

Object IntervalContextProxy::intervalFieldAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::IntervalContext*)orig) -> intervalField(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object IntervalContextProxy::INTERVAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalContext*)orig) -> INTERVAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalContextProxy::STRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalContext*)orig) -> STRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalContextProxy::TO() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalContext*)orig) -> TO();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalContextProxy::PLUS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalContext*)orig) -> PLUS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalContextProxy::MINUS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalContext*)orig) -> MINUS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalLiteralContextProxy::interval() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::IntervalLiteralContext*)orig) -> interval();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NumericLiteralContextProxy::number() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NumericLiteralContext*)orig) -> number();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object BooleanValueContextProxy::TRUE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BooleanValueContext*)orig) -> TRUE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanValueContextProxy::FALSE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BooleanValueContext*)orig) -> FALSE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BooleanLiteralContextProxy::booleanValue() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::BooleanLiteralContext*)orig) -> booleanValue();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SimpleCaseContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SimpleCaseContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SimpleCaseContextProxy::whenClause() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::SimpleCaseContext*)orig) -> whenClause().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(whenClauseAt(i));
    }
  }

  return std::move(a);
}

Object SimpleCaseContextProxy::whenClauseAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SimpleCaseContext*)orig) -> whenClause(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SimpleCaseContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SimpleCaseContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SimpleCaseContextProxy::CASE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SimpleCaseContext*)orig) -> CASE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SimpleCaseContextProxy::END() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SimpleCaseContext*)orig) -> END();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SimpleCaseContextProxy::ELSE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SimpleCaseContext*)orig) -> ELSE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WhenClauseContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::WhenClauseContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object WhenClauseContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::WhenClauseContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object WhenClauseContextProxy::WHEN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::WhenClauseContext*)orig) -> WHEN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WhenClauseContextProxy::THEN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::WhenClauseContext*)orig) -> THEN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ColumnReferenceContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ColumnReferenceContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NullLiteralContextProxy::NULLTOKEN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NullLiteralContext*)orig) -> NULLTOKEN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RowConstructorContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::RowConstructorContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object RowConstructorContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::RowConstructorContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object RowConstructorContextProxy::ROW() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::RowConstructorContext*)orig) -> ROW();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SubscriptContextProxy::primaryExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SubscriptContext*)orig) -> primaryExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SubscriptContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SubscriptContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SubqueryExpressionContextProxy::query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SubqueryExpressionContext*)orig) -> query();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object BinaryLiteralContextProxy::BINARY_LITERAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BinaryLiteralContext*)orig) -> BINARY_LITERAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtractContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ExtractContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ExtractContextProxy::valueExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ExtractContext*)orig) -> valueExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ExtractContextProxy::EXTRACT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExtractContext*)orig) -> EXTRACT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExtractContextProxy::FROM() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExtractContext*)orig) -> FROM();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object StringLiteralContextProxy::STRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::StringLiteralContext*)orig) -> STRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ArrayConstructorContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::ArrayConstructorContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object ArrayConstructorContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ArrayConstructorContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ArrayConstructorContextProxy::ARRAY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ArrayConstructorContext*)orig) -> ARRAY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FunctionCallContextProxy::qualifiedName() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::FunctionCallContext*)orig) -> qualifiedName();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FunctionCallContextProxy::filter() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::FunctionCallContext*)orig) -> filter();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FunctionCallContextProxy::over() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::FunctionCallContext*)orig) -> over();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FunctionCallContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::FunctionCallContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object FunctionCallContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::FunctionCallContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FunctionCallContextProxy::setQuantifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::FunctionCallContext*)orig) -> setQuantifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FunctionCallContextProxy::ASTERISK() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::FunctionCallContext*)orig) -> ASTERISK();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FilterContextProxy::booleanExpression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::FilterContext*)orig) -> booleanExpression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object FilterContextProxy::FILTER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::FilterContext*)orig) -> FILTER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object FilterContextProxy::WHERE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::FilterContext*)orig) -> WHERE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OverContextProxy::sortItem() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::OverContext*)orig) -> sortItem().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(sortItemAt(i));
    }
  }

  return std::move(a);
}

Object OverContextProxy::sortItemAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::OverContext*)orig) -> sortItem(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object OverContextProxy::windowFrame() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::OverContext*)orig) -> windowFrame();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object OverContextProxy::expression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::OverContext*)orig) -> expression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(expressionAt(i));
    }
  }

  return std::move(a);
}

Object OverContextProxy::expressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::OverContext*)orig) -> expression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object OverContextProxy::OVER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::OverContext*)orig) -> OVER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OverContextProxy::PARTITION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::OverContext*)orig) -> PARTITION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OverContextProxy::BY() {
  Array a;

  if (orig == nullptr) {
    return std::move(a);
  }

  auto vec = ((PrestoParser::OverContext*)orig) -> BY();

  for (auto it = vec.begin(); it != vec.end(); it ++) {
    TerminalNodeProxy proxy(*it);
    a.push(detail::To_Ruby<TerminalNodeProxy>().convert(proxy));
  }

  return std::move(a);
}

Object OverContextProxy::BYAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::OverContext*)orig) -> BY(i);

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object OverContextProxy::ORDER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::OverContext*)orig) -> ORDER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExistsContextProxy::query() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::ExistsContext*)orig) -> query();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object ExistsContextProxy::EXISTS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExistsContext*)orig) -> EXISTS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PositionContextProxy::valueExpression() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::PositionContext*)orig) -> valueExpression().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(valueExpressionAt(i));
    }
  }

  return std::move(a);
}

Object PositionContextProxy::valueExpressionAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::PositionContext*)orig) -> valueExpression(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object PositionContextProxy::POSITION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::PositionContext*)orig) -> POSITION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PositionContextProxy::IN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::PositionContext*)orig) -> IN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SearchedCaseContextProxy::whenClause() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::SearchedCaseContext*)orig) -> whenClause().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(whenClauseAt(i));
    }
  }

  return std::move(a);
}

Object SearchedCaseContextProxy::whenClauseAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SearchedCaseContext*)orig) -> whenClause(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SearchedCaseContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::SearchedCaseContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object SearchedCaseContextProxy::CASE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SearchedCaseContext*)orig) -> CASE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SearchedCaseContextProxy::END() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SearchedCaseContext*)orig) -> END();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SearchedCaseContextProxy::ELSE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SearchedCaseContext*)orig) -> ELSE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TimeZoneIntervalContextProxy::interval() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TimeZoneIntervalContext*)orig) -> interval();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TimeZoneIntervalContextProxy::TIME() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TimeZoneIntervalContext*)orig) -> TIME();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TimeZoneIntervalContextProxy::ZONE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TimeZoneIntervalContext*)orig) -> ZONE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TimeZoneStringContextProxy::TIME() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TimeZoneStringContext*)orig) -> TIME();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TimeZoneStringContextProxy::ZONE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TimeZoneStringContext*)orig) -> ZONE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TimeZoneStringContextProxy::STRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TimeZoneStringContext*)orig) -> STRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalFieldContextProxy::YEAR() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalFieldContext*)orig) -> YEAR();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalFieldContextProxy::MONTH() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalFieldContext*)orig) -> MONTH();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalFieldContextProxy::DAY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalFieldContext*)orig) -> DAY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalFieldContextProxy::HOUR() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalFieldContext*)orig) -> HOUR();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalFieldContextProxy::MINUTE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalFieldContext*)orig) -> MINUTE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntervalFieldContextProxy::SECOND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntervalFieldContext*)orig) -> SECOND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BaseTypeContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::BaseTypeContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object BaseTypeContextProxy::TIME_WITH_TIME_ZONE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BaseTypeContext*)orig) -> TIME_WITH_TIME_ZONE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BaseTypeContextProxy::TIMESTAMP_WITH_TIME_ZONE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BaseTypeContext*)orig) -> TIMESTAMP_WITH_TIME_ZONE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BaseTypeContextProxy::DOUBLE_PRECISION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BaseTypeContext*)orig) -> DOUBLE_PRECISION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TypeParameterContextProxy::type() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::TypeParameterContext*)orig) -> type();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object TypeParameterContextProxy::INTEGER_VALUE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TypeParameterContext*)orig) -> INTEGER_VALUE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WindowFrameContextProxy::frameBound() {
  Array a;

  if (orig != nullptr) {
    size_t count = ((PrestoParser::WindowFrameContext*)orig) -> frameBound().size();

    for (size_t i = 0; i < count; i ++) {
      a.push(frameBoundAt(i));
    }
  }

  return std::move(a);
}

Object WindowFrameContextProxy::frameBoundAt(size_t i) {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::WindowFrameContext*)orig) -> frameBound(i);

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object WindowFrameContextProxy::RANGE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::WindowFrameContext*)orig) -> RANGE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WindowFrameContextProxy::ROWS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::WindowFrameContext*)orig) -> ROWS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WindowFrameContextProxy::BETWEEN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::WindowFrameContext*)orig) -> BETWEEN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object WindowFrameContextProxy::AND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::WindowFrameContext*)orig) -> AND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BoundedFrameContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::BoundedFrameContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object BoundedFrameContextProxy::PRECEDING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BoundedFrameContext*)orig) -> PRECEDING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BoundedFrameContextProxy::FOLLOWING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BoundedFrameContext*)orig) -> FOLLOWING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnboundedFrameContextProxy::UNBOUNDED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::UnboundedFrameContext*)orig) -> UNBOUNDED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnboundedFrameContextProxy::PRECEDING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::UnboundedFrameContext*)orig) -> PRECEDING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnboundedFrameContextProxy::FOLLOWING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::UnboundedFrameContext*)orig) -> FOLLOWING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CurrentRowBoundContextProxy::CURRENT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::CurrentRowBoundContext*)orig) -> CURRENT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object CurrentRowBoundContextProxy::ROW() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::CurrentRowBoundContext*)orig) -> ROW();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExplainFormatContextProxy::FORMAT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExplainFormatContext*)orig) -> FORMAT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExplainFormatContextProxy::TEXT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExplainFormatContext*)orig) -> TEXT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExplainFormatContextProxy::GRAPHVIZ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExplainFormatContext*)orig) -> GRAPHVIZ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExplainTypeContextProxy::TYPE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExplainTypeContext*)orig) -> TYPE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExplainTypeContextProxy::LOGICAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExplainTypeContext*)orig) -> LOGICAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExplainTypeContextProxy::DISTRIBUTED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExplainTypeContext*)orig) -> DISTRIBUTED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ExplainTypeContextProxy::VALIDATE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ExplainTypeContext*)orig) -> VALIDATE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TransactionAccessModeContextProxy::READ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TransactionAccessModeContext*)orig) -> READ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TransactionAccessModeContextProxy::ONLY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TransactionAccessModeContext*)orig) -> ONLY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object TransactionAccessModeContextProxy::WRITE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::TransactionAccessModeContext*)orig) -> WRITE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IsolationLevelContextProxy::levelOfIsolation() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::IsolationLevelContext*)orig) -> levelOfIsolation();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object IsolationLevelContextProxy::ISOLATION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IsolationLevelContext*)orig) -> ISOLATION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IsolationLevelContextProxy::LEVEL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IsolationLevelContext*)orig) -> LEVEL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ReadUncommittedContextProxy::READ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ReadUncommittedContext*)orig) -> READ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ReadUncommittedContextProxy::UNCOMMITTED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ReadUncommittedContext*)orig) -> UNCOMMITTED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object SerializableContextProxy::SERIALIZABLE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::SerializableContext*)orig) -> SERIALIZABLE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ReadCommittedContextProxy::READ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ReadCommittedContext*)orig) -> READ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object ReadCommittedContextProxy::COMMITTED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::ReadCommittedContext*)orig) -> COMMITTED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RepeatableReadContextProxy::REPEATABLE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::RepeatableReadContext*)orig) -> REPEATABLE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object RepeatableReadContextProxy::READ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::RepeatableReadContext*)orig) -> READ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PositionalArgumentContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::PositionalArgumentContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NamedArgumentContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NamedArgumentContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NamedArgumentContextProxy::expression() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NamedArgumentContext*)orig) -> expression();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object PrivilegeContextProxy::identifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::PrivilegeContext*)orig) -> identifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object PrivilegeContextProxy::SELECT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::PrivilegeContext*)orig) -> SELECT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PrivilegeContextProxy::DELETE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::PrivilegeContext*)orig) -> DELETE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object PrivilegeContextProxy::INSERT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::PrivilegeContext*)orig) -> INSERT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object BackQuotedIdentifierContextProxy::BACKQUOTED_IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::BackQuotedIdentifierContext*)orig) -> BACKQUOTED_IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuotedIdentifierContextProxy::QUOTED_IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::QuotedIdentifierContext*)orig) -> QUOTED_IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object QuotedIdentifierAlternativeContextProxy::quotedIdentifier() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::QuotedIdentifierAlternativeContext*)orig) -> quotedIdentifier();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object DigitIdentifierContextProxy::DIGIT_IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::DigitIdentifierContext*)orig) -> DIGIT_IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object UnquotedIdentifierContextProxy::nonReserved() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::UnquotedIdentifierContext*)orig) -> nonReserved();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object UnquotedIdentifierContextProxy::IDENTIFIER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::UnquotedIdentifierContext*)orig) -> IDENTIFIER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::normalForm() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto ctx = ((PrestoParser::NonReservedContext*)orig) -> normalForm();

  if (ctx == nullptr) {
    return Qnil;
  }

  for (auto child : getChildren()) {
    if (ctx == detail::From_Ruby<ContextProxy>().convert(child.value()).getOriginal()) {
      return child;
    }
  }

  return Nil;
}

Object NonReservedContextProxy::SHOW() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SHOW();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TABLES() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TABLES();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::COLUMNS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> COLUMNS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::COLUMN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> COLUMN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::PARTITIONS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> PARTITIONS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::FUNCTIONS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> FUNCTIONS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SCHEMAS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SCHEMAS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::CATALOGS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> CATALOGS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SESSION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SESSION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ADD() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ADD();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::FILTER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> FILTER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::AT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> AT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::OVER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> OVER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::PARTITION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> PARTITION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::RANGE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> RANGE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ROWS() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ROWS();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::PRECEDING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> PRECEDING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::FOLLOWING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> FOLLOWING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::CURRENT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> CURRENT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ROW() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ROW();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::MAP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> MAP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ARRAY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ARRAY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TINYINT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TINYINT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SMALLINT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SMALLINT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::INTEGER() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> INTEGER();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::DATE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> DATE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TIME() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TIME();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TIMESTAMP() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TIMESTAMP();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::INTERVAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> INTERVAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ZONE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ZONE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::YEAR() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> YEAR();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::MONTH() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> MONTH();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::DAY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> DAY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::HOUR() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> HOUR();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::MINUTE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> MINUTE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SECOND() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SECOND();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::EXPLAIN() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> EXPLAIN();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ANALYZE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ANALYZE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::FORMAT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> FORMAT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TYPE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TYPE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TEXT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TEXT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::GRAPHVIZ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> GRAPHVIZ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::LOGICAL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> LOGICAL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::DISTRIBUTED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> DISTRIBUTED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::VALIDATE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> VALIDATE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TABLESAMPLE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TABLESAMPLE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SYSTEM() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SYSTEM();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::BERNOULLI() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> BERNOULLI();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::POISSONIZED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> POISSONIZED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::USE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> USE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TO() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TO();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::RESET() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> RESET();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::VIEW() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> VIEW();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::REPLACE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> REPLACE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::IF() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> IF();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::NULLIF() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> NULLIF();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::COALESCE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> COALESCE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::POSITION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> POSITION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::NO() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> NO();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::DATA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> DATA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::START() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> START();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::TRANSACTION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> TRANSACTION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::COMMIT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> COMMIT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ROLLBACK() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ROLLBACK();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::WORK() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> WORK();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ISOLATION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ISOLATION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::LEVEL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> LEVEL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SERIALIZABLE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SERIALIZABLE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::REPEATABLE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> REPEATABLE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::COMMITTED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> COMMITTED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::UNCOMMITTED() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> UNCOMMITTED();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::READ() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> READ();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::WRITE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> WRITE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ONLY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ONLY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::COMMENT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> COMMENT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::CALL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> CALL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::GRANT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> GRANT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::REVOKE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> REVOKE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::PRIVILEGES() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> PRIVILEGES();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::PUBLIC() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> PUBLIC();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::OPTION() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> OPTION();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SUBSTRING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SUBSTRING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SCHEMA() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SCHEMA();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::CASCADE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> CASCADE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::RESTRICT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> RESTRICT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::INPUT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> INPUT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::OUTPUT() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> OUTPUT();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::INCLUDING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> INCLUDING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::EXCLUDING() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> EXCLUDING();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::PROPERTIES() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> PROPERTIES();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ALL() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ALL();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::SOME() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> SOME();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object NonReservedContextProxy::ANY() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::NonReservedContext*)orig) -> ANY();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object DecimalLiteralContextProxy::DECIMAL_VALUE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::DecimalLiteralContext*)orig) -> DECIMAL_VALUE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}

Object IntegerLiteralContextProxy::INTEGER_VALUE() {
  if (orig == nullptr) {
    return Qnil;
  }

  auto token = ((PrestoParser::IntegerLiteralContext*)orig) -> INTEGER_VALUE();

  if (token == nullptr) {
    return Qnil;
  }

  TerminalNodeProxy proxy(token);
  return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
}


class VisitorProxy : public PrestoBaseVisitor, public Director {
public:
  VisitorProxy(Object self) : Director(self) { }

  Object ruby_visit(ContextProxy* proxy) {
    auto result = visit(proxy -> getOriginal());
    try {
      return std::any_cast<Object>(result);
    } catch(std::bad_cast) {
      return Qnil;
    }
  }

  Object ruby_visitChildren(ContextProxy* proxy) {
    auto result = visitChildren(proxy -> getOriginal());
    try {
      return std::any_cast<Object>(result);
    } catch(std::bad_cast) {
      return Qnil;
    }
  }

  virtual antlrcpp::Any visitSingleQuery(PrestoParser::SingleQueryContext *ctx) override {
    SingleQueryContextProxy proxy(ctx);
    return getSelf().call("visit_single_query", &proxy);
  }

  virtual antlrcpp::Any visitQuery(PrestoParser::QueryContext *ctx) override {
    QueryContextProxy proxy(ctx);
    return getSelf().call("visit_query", &proxy);
  }

  virtual antlrcpp::Any visitWith(PrestoParser::WithContext *ctx) override {
    WithContextProxy proxy(ctx);
    return getSelf().call("visit_with", &proxy);
  }

  virtual antlrcpp::Any visitTableElement(PrestoParser::TableElementContext *ctx) override {
    TableElementContextProxy proxy(ctx);
    return getSelf().call("visit_table_element", &proxy);
  }

  virtual antlrcpp::Any visitColumnDefinition(PrestoParser::ColumnDefinitionContext *ctx) override {
    ColumnDefinitionContextProxy proxy(ctx);
    return getSelf().call("visit_column_definition", &proxy);
  }

  virtual antlrcpp::Any visitLikeClause(PrestoParser::LikeClauseContext *ctx) override {
    LikeClauseContextProxy proxy(ctx);
    return getSelf().call("visit_like_clause", &proxy);
  }

  virtual antlrcpp::Any visitTableProperties(PrestoParser::TablePropertiesContext *ctx) override {
    TablePropertiesContextProxy proxy(ctx);
    return getSelf().call("visit_table_properties", &proxy);
  }

  virtual antlrcpp::Any visitTableProperty(PrestoParser::TablePropertyContext *ctx) override {
    TablePropertyContextProxy proxy(ctx);
    return getSelf().call("visit_table_property", &proxy);
  }

  virtual antlrcpp::Any visitQueryNoWith(PrestoParser::QueryNoWithContext *ctx) override {
    QueryNoWithContextProxy proxy(ctx);
    return getSelf().call("visit_query_no_with", &proxy);
  }

  virtual antlrcpp::Any visitQueryTermDefault(PrestoParser::QueryTermDefaultContext *ctx) override {
    QueryTermDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_query_term_default", &proxy);
  }

  virtual antlrcpp::Any visitSetOperation(PrestoParser::SetOperationContext *ctx) override {
    SetOperationContextProxy proxy(ctx);
    return getSelf().call("visit_set_operation", &proxy);
  }

  virtual antlrcpp::Any visitQueryPrimaryDefault(PrestoParser::QueryPrimaryDefaultContext *ctx) override {
    QueryPrimaryDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_query_primary_default", &proxy);
  }

  virtual antlrcpp::Any visitTable(PrestoParser::TableContext *ctx) override {
    TableContextProxy proxy(ctx);
    return getSelf().call("visit_table", &proxy);
  }

  virtual antlrcpp::Any visitInlineTable(PrestoParser::InlineTableContext *ctx) override {
    InlineTableContextProxy proxy(ctx);
    return getSelf().call("visit_inline_table", &proxy);
  }

  virtual antlrcpp::Any visitSubquery(PrestoParser::SubqueryContext *ctx) override {
    SubqueryContextProxy proxy(ctx);
    return getSelf().call("visit_subquery", &proxy);
  }

  virtual antlrcpp::Any visitSortItem(PrestoParser::SortItemContext *ctx) override {
    SortItemContextProxy proxy(ctx);
    return getSelf().call("visit_sort_item", &proxy);
  }

  virtual antlrcpp::Any visitQuerySpecification(PrestoParser::QuerySpecificationContext *ctx) override {
    QuerySpecificationContextProxy proxy(ctx);
    return getSelf().call("visit_query_specification", &proxy);
  }

  virtual antlrcpp::Any visitGroupBy(PrestoParser::GroupByContext *ctx) override {
    GroupByContextProxy proxy(ctx);
    return getSelf().call("visit_group_by", &proxy);
  }

  virtual antlrcpp::Any visitSingleGroupingSet(PrestoParser::SingleGroupingSetContext *ctx) override {
    SingleGroupingSetContextProxy proxy(ctx);
    return getSelf().call("visit_single_grouping_set", &proxy);
  }

  virtual antlrcpp::Any visitRollup(PrestoParser::RollupContext *ctx) override {
    RollupContextProxy proxy(ctx);
    return getSelf().call("visit_rollup", &proxy);
  }

  virtual antlrcpp::Any visitCube(PrestoParser::CubeContext *ctx) override {
    CubeContextProxy proxy(ctx);
    return getSelf().call("visit_cube", &proxy);
  }

  virtual antlrcpp::Any visitMultipleGroupingSets(PrestoParser::MultipleGroupingSetsContext *ctx) override {
    MultipleGroupingSetsContextProxy proxy(ctx);
    return getSelf().call("visit_multiple_grouping_sets", &proxy);
  }

  virtual antlrcpp::Any visitGroupingExpressions(PrestoParser::GroupingExpressionsContext *ctx) override {
    GroupingExpressionsContextProxy proxy(ctx);
    return getSelf().call("visit_grouping_expressions", &proxy);
  }

  virtual antlrcpp::Any visitGroupingSet(PrestoParser::GroupingSetContext *ctx) override {
    GroupingSetContextProxy proxy(ctx);
    return getSelf().call("visit_grouping_set", &proxy);
  }

  virtual antlrcpp::Any visitNamedQuery(PrestoParser::NamedQueryContext *ctx) override {
    NamedQueryContextProxy proxy(ctx);
    return getSelf().call("visit_named_query", &proxy);
  }

  virtual antlrcpp::Any visitSetQuantifier(PrestoParser::SetQuantifierContext *ctx) override {
    SetQuantifierContextProxy proxy(ctx);
    return getSelf().call("visit_set_quantifier", &proxy);
  }

  virtual antlrcpp::Any visitSelectSingle(PrestoParser::SelectSingleContext *ctx) override {
    SelectSingleContextProxy proxy(ctx);
    return getSelf().call("visit_select_single", &proxy);
  }

  virtual antlrcpp::Any visitSelectAll(PrestoParser::SelectAllContext *ctx) override {
    SelectAllContextProxy proxy(ctx);
    return getSelf().call("visit_select_all", &proxy);
  }

  virtual antlrcpp::Any visitRelationDefault(PrestoParser::RelationDefaultContext *ctx) override {
    RelationDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_relation_default", &proxy);
  }

  virtual antlrcpp::Any visitJoinRelation(PrestoParser::JoinRelationContext *ctx) override {
    JoinRelationContextProxy proxy(ctx);
    return getSelf().call("visit_join_relation", &proxy);
  }

  virtual antlrcpp::Any visitJoinType(PrestoParser::JoinTypeContext *ctx) override {
    JoinTypeContextProxy proxy(ctx);
    return getSelf().call("visit_join_type", &proxy);
  }

  virtual antlrcpp::Any visitJoinCriteria(PrestoParser::JoinCriteriaContext *ctx) override {
    JoinCriteriaContextProxy proxy(ctx);
    return getSelf().call("visit_join_criteria", &proxy);
  }

  virtual antlrcpp::Any visitSampledRelation(PrestoParser::SampledRelationContext *ctx) override {
    SampledRelationContextProxy proxy(ctx);
    return getSelf().call("visit_sampled_relation", &proxy);
  }

  virtual antlrcpp::Any visitSampleType(PrestoParser::SampleTypeContext *ctx) override {
    SampleTypeContextProxy proxy(ctx);
    return getSelf().call("visit_sample_type", &proxy);
  }

  virtual antlrcpp::Any visitAliasedRelation(PrestoParser::AliasedRelationContext *ctx) override {
    AliasedRelationContextProxy proxy(ctx);
    return getSelf().call("visit_aliased_relation", &proxy);
  }

  virtual antlrcpp::Any visitColumnAliases(PrestoParser::ColumnAliasesContext *ctx) override {
    ColumnAliasesContextProxy proxy(ctx);
    return getSelf().call("visit_column_aliases", &proxy);
  }

  virtual antlrcpp::Any visitTableName(PrestoParser::TableNameContext *ctx) override {
    TableNameContextProxy proxy(ctx);
    return getSelf().call("visit_table_name", &proxy);
  }

  virtual antlrcpp::Any visitSubqueryRelation(PrestoParser::SubqueryRelationContext *ctx) override {
    SubqueryRelationContextProxy proxy(ctx);
    return getSelf().call("visit_subquery_relation", &proxy);
  }

  virtual antlrcpp::Any visitUnnest(PrestoParser::UnnestContext *ctx) override {
    UnnestContextProxy proxy(ctx);
    return getSelf().call("visit_unnest", &proxy);
  }

  virtual antlrcpp::Any visitParenthesizedRelation(PrestoParser::ParenthesizedRelationContext *ctx) override {
    ParenthesizedRelationContextProxy proxy(ctx);
    return getSelf().call("visit_parenthesized_relation", &proxy);
  }

  virtual antlrcpp::Any visitExpression(PrestoParser::ExpressionContext *ctx) override {
    ExpressionContextProxy proxy(ctx);
    return getSelf().call("visit_expression", &proxy);
  }

  virtual antlrcpp::Any visitLogicalNot(PrestoParser::LogicalNotContext *ctx) override {
    LogicalNotContextProxy proxy(ctx);
    return getSelf().call("visit_logical_not", &proxy);
  }

  virtual antlrcpp::Any visitBooleanDefault(PrestoParser::BooleanDefaultContext *ctx) override {
    BooleanDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_boolean_default", &proxy);
  }

  virtual antlrcpp::Any visitLogicalBinary(PrestoParser::LogicalBinaryContext *ctx) override {
    LogicalBinaryContextProxy proxy(ctx);
    return getSelf().call("visit_logical_binary", &proxy);
  }

  virtual antlrcpp::Any visitPredicated(PrestoParser::PredicatedContext *ctx) override {
    PredicatedContextProxy proxy(ctx);
    return getSelf().call("visit_predicated", &proxy);
  }

  virtual antlrcpp::Any visitComparison(PrestoParser::ComparisonContext *ctx) override {
    ComparisonContextProxy proxy(ctx);
    return getSelf().call("visit_comparison", &proxy);
  }

  virtual antlrcpp::Any visitQuantifiedComparison(PrestoParser::QuantifiedComparisonContext *ctx) override {
    QuantifiedComparisonContextProxy proxy(ctx);
    return getSelf().call("visit_quantified_comparison", &proxy);
  }

  virtual antlrcpp::Any visitBetween(PrestoParser::BetweenContext *ctx) override {
    BetweenContextProxy proxy(ctx);
    return getSelf().call("visit_between", &proxy);
  }

  virtual antlrcpp::Any visitInList(PrestoParser::InListContext *ctx) override {
    InListContextProxy proxy(ctx);
    return getSelf().call("visit_in_list", &proxy);
  }

  virtual antlrcpp::Any visitInSubquery(PrestoParser::InSubqueryContext *ctx) override {
    InSubqueryContextProxy proxy(ctx);
    return getSelf().call("visit_in_subquery", &proxy);
  }

  virtual antlrcpp::Any visitLike(PrestoParser::LikeContext *ctx) override {
    LikeContextProxy proxy(ctx);
    return getSelf().call("visit_like", &proxy);
  }

  virtual antlrcpp::Any visitNullPredicate(PrestoParser::NullPredicateContext *ctx) override {
    NullPredicateContextProxy proxy(ctx);
    return getSelf().call("visit_null_predicate", &proxy);
  }

  virtual antlrcpp::Any visitDistinctFrom(PrestoParser::DistinctFromContext *ctx) override {
    DistinctFromContextProxy proxy(ctx);
    return getSelf().call("visit_distinct_from", &proxy);
  }

  virtual antlrcpp::Any visitValueExpressionDefault(PrestoParser::ValueExpressionDefaultContext *ctx) override {
    ValueExpressionDefaultContextProxy proxy(ctx);
    return getSelf().call("visit_value_expression_default", &proxy);
  }

  virtual antlrcpp::Any visitConcatenation(PrestoParser::ConcatenationContext *ctx) override {
    ConcatenationContextProxy proxy(ctx);
    return getSelf().call("visit_concatenation", &proxy);
  }

  virtual antlrcpp::Any visitArithmeticBinary(PrestoParser::ArithmeticBinaryContext *ctx) override {
    ArithmeticBinaryContextProxy proxy(ctx);
    return getSelf().call("visit_arithmetic_binary", &proxy);
  }

  virtual antlrcpp::Any visitArithmeticUnary(PrestoParser::ArithmeticUnaryContext *ctx) override {
    ArithmeticUnaryContextProxy proxy(ctx);
    return getSelf().call("visit_arithmetic_unary", &proxy);
  }

  virtual antlrcpp::Any visitAtTimeZone(PrestoParser::AtTimeZoneContext *ctx) override {
    AtTimeZoneContextProxy proxy(ctx);
    return getSelf().call("visit_at_time_zone", &proxy);
  }

  virtual antlrcpp::Any visitDereference(PrestoParser::DereferenceContext *ctx) override {
    DereferenceContextProxy proxy(ctx);
    return getSelf().call("visit_dereference", &proxy);
  }

  virtual antlrcpp::Any visitTypeConstructor(PrestoParser::TypeConstructorContext *ctx) override {
    TypeConstructorContextProxy proxy(ctx);
    return getSelf().call("visit_type_constructor", &proxy);
  }

  virtual antlrcpp::Any visitSpecialDateTimeFunction(PrestoParser::SpecialDateTimeFunctionContext *ctx) override {
    SpecialDateTimeFunctionContextProxy proxy(ctx);
    return getSelf().call("visit_special_date_time_function", &proxy);
  }

  virtual antlrcpp::Any visitSubstring(PrestoParser::SubstringContext *ctx) override {
    SubstringContextProxy proxy(ctx);
    return getSelf().call("visit_substring", &proxy);
  }

  virtual antlrcpp::Any visitCast(PrestoParser::CastContext *ctx) override {
    CastContextProxy proxy(ctx);
    return getSelf().call("visit_cast", &proxy);
  }

  virtual antlrcpp::Any visitLambda(PrestoParser::LambdaContext *ctx) override {
    LambdaContextProxy proxy(ctx);
    return getSelf().call("visit_lambda", &proxy);
  }

  virtual antlrcpp::Any visitParenthesizedExpression(PrestoParser::ParenthesizedExpressionContext *ctx) override {
    ParenthesizedExpressionContextProxy proxy(ctx);
    return getSelf().call("visit_parenthesized_expression", &proxy);
  }

  virtual antlrcpp::Any visitParameter(PrestoParser::ParameterContext *ctx) override {
    ParameterContextProxy proxy(ctx);
    return getSelf().call("visit_parameter", &proxy);
  }

  virtual antlrcpp::Any visitNormalize(PrestoParser::NormalizeContext *ctx) override {
    NormalizeContextProxy proxy(ctx);
    return getSelf().call("visit_normalize", &proxy);
  }

  virtual antlrcpp::Any visitIntervalLiteral(PrestoParser::IntervalLiteralContext *ctx) override {
    IntervalLiteralContextProxy proxy(ctx);
    return getSelf().call("visit_interval_literal", &proxy);
  }

  virtual antlrcpp::Any visitNumericLiteral(PrestoParser::NumericLiteralContext *ctx) override {
    NumericLiteralContextProxy proxy(ctx);
    return getSelf().call("visit_numeric_literal", &proxy);
  }

  virtual antlrcpp::Any visitBooleanLiteral(PrestoParser::BooleanLiteralContext *ctx) override {
    BooleanLiteralContextProxy proxy(ctx);
    return getSelf().call("visit_boolean_literal", &proxy);
  }

  virtual antlrcpp::Any visitSimpleCase(PrestoParser::SimpleCaseContext *ctx) override {
    SimpleCaseContextProxy proxy(ctx);
    return getSelf().call("visit_simple_case", &proxy);
  }

  virtual antlrcpp::Any visitColumnReference(PrestoParser::ColumnReferenceContext *ctx) override {
    ColumnReferenceContextProxy proxy(ctx);
    return getSelf().call("visit_column_reference", &proxy);
  }

  virtual antlrcpp::Any visitNullLiteral(PrestoParser::NullLiteralContext *ctx) override {
    NullLiteralContextProxy proxy(ctx);
    return getSelf().call("visit_null_literal", &proxy);
  }

  virtual antlrcpp::Any visitRowConstructor(PrestoParser::RowConstructorContext *ctx) override {
    RowConstructorContextProxy proxy(ctx);
    return getSelf().call("visit_row_constructor", &proxy);
  }

  virtual antlrcpp::Any visitSubscript(PrestoParser::SubscriptContext *ctx) override {
    SubscriptContextProxy proxy(ctx);
    return getSelf().call("visit_subscript", &proxy);
  }

  virtual antlrcpp::Any visitSubqueryExpression(PrestoParser::SubqueryExpressionContext *ctx) override {
    SubqueryExpressionContextProxy proxy(ctx);
    return getSelf().call("visit_subquery_expression", &proxy);
  }

  virtual antlrcpp::Any visitBinaryLiteral(PrestoParser::BinaryLiteralContext *ctx) override {
    BinaryLiteralContextProxy proxy(ctx);
    return getSelf().call("visit_binary_literal", &proxy);
  }

  virtual antlrcpp::Any visitExtract(PrestoParser::ExtractContext *ctx) override {
    ExtractContextProxy proxy(ctx);
    return getSelf().call("visit_extract", &proxy);
  }

  virtual antlrcpp::Any visitStringLiteral(PrestoParser::StringLiteralContext *ctx) override {
    StringLiteralContextProxy proxy(ctx);
    return getSelf().call("visit_string_literal", &proxy);
  }

  virtual antlrcpp::Any visitArrayConstructor(PrestoParser::ArrayConstructorContext *ctx) override {
    ArrayConstructorContextProxy proxy(ctx);
    return getSelf().call("visit_array_constructor", &proxy);
  }

  virtual antlrcpp::Any visitFunctionCall(PrestoParser::FunctionCallContext *ctx) override {
    FunctionCallContextProxy proxy(ctx);
    return getSelf().call("visit_function_call", &proxy);
  }

  virtual antlrcpp::Any visitExists(PrestoParser::ExistsContext *ctx) override {
    ExistsContextProxy proxy(ctx);
    return getSelf().call("visit_exists", &proxy);
  }

  virtual antlrcpp::Any visitPosition(PrestoParser::PositionContext *ctx) override {
    PositionContextProxy proxy(ctx);
    return getSelf().call("visit_position", &proxy);
  }

  virtual antlrcpp::Any visitSearchedCase(PrestoParser::SearchedCaseContext *ctx) override {
    SearchedCaseContextProxy proxy(ctx);
    return getSelf().call("visit_searched_case", &proxy);
  }

  virtual antlrcpp::Any visitTimeZoneInterval(PrestoParser::TimeZoneIntervalContext *ctx) override {
    TimeZoneIntervalContextProxy proxy(ctx);
    return getSelf().call("visit_time_zone_interval", &proxy);
  }

  virtual antlrcpp::Any visitTimeZoneString(PrestoParser::TimeZoneStringContext *ctx) override {
    TimeZoneStringContextProxy proxy(ctx);
    return getSelf().call("visit_time_zone_string", &proxy);
  }

  virtual antlrcpp::Any visitComparisonOperator(PrestoParser::ComparisonOperatorContext *ctx) override {
    ComparisonOperatorContextProxy proxy(ctx);
    return getSelf().call("visit_comparison_operator", &proxy);
  }

  virtual antlrcpp::Any visitComparisonQuantifier(PrestoParser::ComparisonQuantifierContext *ctx) override {
    ComparisonQuantifierContextProxy proxy(ctx);
    return getSelf().call("visit_comparison_quantifier", &proxy);
  }

  virtual antlrcpp::Any visitBooleanValue(PrestoParser::BooleanValueContext *ctx) override {
    BooleanValueContextProxy proxy(ctx);
    return getSelf().call("visit_boolean_value", &proxy);
  }

  virtual antlrcpp::Any visitInterval(PrestoParser::IntervalContext *ctx) override {
    IntervalContextProxy proxy(ctx);
    return getSelf().call("visit_interval", &proxy);
  }

  virtual antlrcpp::Any visitIntervalField(PrestoParser::IntervalFieldContext *ctx) override {
    IntervalFieldContextProxy proxy(ctx);
    return getSelf().call("visit_interval_field", &proxy);
  }

  virtual antlrcpp::Any visitType(PrestoParser::TypeContext *ctx) override {
    TypeContextProxy proxy(ctx);
    return getSelf().call("visit_type", &proxy);
  }

  virtual antlrcpp::Any visitTypeParameter(PrestoParser::TypeParameterContext *ctx) override {
    TypeParameterContextProxy proxy(ctx);
    return getSelf().call("visit_type_parameter", &proxy);
  }

  virtual antlrcpp::Any visitBaseType(PrestoParser::BaseTypeContext *ctx) override {
    BaseTypeContextProxy proxy(ctx);
    return getSelf().call("visit_base_type", &proxy);
  }

  virtual antlrcpp::Any visitWhenClause(PrestoParser::WhenClauseContext *ctx) override {
    WhenClauseContextProxy proxy(ctx);
    return getSelf().call("visit_when_clause", &proxy);
  }

  virtual antlrcpp::Any visitFilter(PrestoParser::FilterContext *ctx) override {
    FilterContextProxy proxy(ctx);
    return getSelf().call("visit_filter", &proxy);
  }

  virtual antlrcpp::Any visitOver(PrestoParser::OverContext *ctx) override {
    OverContextProxy proxy(ctx);
    return getSelf().call("visit_over", &proxy);
  }

  virtual antlrcpp::Any visitWindowFrame(PrestoParser::WindowFrameContext *ctx) override {
    WindowFrameContextProxy proxy(ctx);
    return getSelf().call("visit_window_frame", &proxy);
  }

  virtual antlrcpp::Any visitUnboundedFrame(PrestoParser::UnboundedFrameContext *ctx) override {
    UnboundedFrameContextProxy proxy(ctx);
    return getSelf().call("visit_unbounded_frame", &proxy);
  }

  virtual antlrcpp::Any visitCurrentRowBound(PrestoParser::CurrentRowBoundContext *ctx) override {
    CurrentRowBoundContextProxy proxy(ctx);
    return getSelf().call("visit_current_row_bound", &proxy);
  }

  virtual antlrcpp::Any visitBoundedFrame(PrestoParser::BoundedFrameContext *ctx) override {
    BoundedFrameContextProxy proxy(ctx);
    return getSelf().call("visit_bounded_frame", &proxy);
  }

  virtual antlrcpp::Any visitExplainFormat(PrestoParser::ExplainFormatContext *ctx) override {
    ExplainFormatContextProxy proxy(ctx);
    return getSelf().call("visit_explain_format", &proxy);
  }

  virtual antlrcpp::Any visitExplainType(PrestoParser::ExplainTypeContext *ctx) override {
    ExplainTypeContextProxy proxy(ctx);
    return getSelf().call("visit_explain_type", &proxy);
  }

  virtual antlrcpp::Any visitIsolationLevel(PrestoParser::IsolationLevelContext *ctx) override {
    IsolationLevelContextProxy proxy(ctx);
    return getSelf().call("visit_isolation_level", &proxy);
  }

  virtual antlrcpp::Any visitTransactionAccessMode(PrestoParser::TransactionAccessModeContext *ctx) override {
    TransactionAccessModeContextProxy proxy(ctx);
    return getSelf().call("visit_transaction_access_mode", &proxy);
  }

  virtual antlrcpp::Any visitReadUncommitted(PrestoParser::ReadUncommittedContext *ctx) override {
    ReadUncommittedContextProxy proxy(ctx);
    return getSelf().call("visit_read_uncommitted", &proxy);
  }

  virtual antlrcpp::Any visitReadCommitted(PrestoParser::ReadCommittedContext *ctx) override {
    ReadCommittedContextProxy proxy(ctx);
    return getSelf().call("visit_read_committed", &proxy);
  }

  virtual antlrcpp::Any visitRepeatableRead(PrestoParser::RepeatableReadContext *ctx) override {
    RepeatableReadContextProxy proxy(ctx);
    return getSelf().call("visit_repeatable_read", &proxy);
  }

  virtual antlrcpp::Any visitSerializable(PrestoParser::SerializableContext *ctx) override {
    SerializableContextProxy proxy(ctx);
    return getSelf().call("visit_serializable", &proxy);
  }

  virtual antlrcpp::Any visitPositionalArgument(PrestoParser::PositionalArgumentContext *ctx) override {
    PositionalArgumentContextProxy proxy(ctx);
    return getSelf().call("visit_positional_argument", &proxy);
  }

  virtual antlrcpp::Any visitNamedArgument(PrestoParser::NamedArgumentContext *ctx) override {
    NamedArgumentContextProxy proxy(ctx);
    return getSelf().call("visit_named_argument", &proxy);
  }

  virtual antlrcpp::Any visitPrivilege(PrestoParser::PrivilegeContext *ctx) override {
    PrivilegeContextProxy proxy(ctx);
    return getSelf().call("visit_privilege", &proxy);
  }

  virtual antlrcpp::Any visitQualifiedName(PrestoParser::QualifiedNameContext *ctx) override {
    QualifiedNameContextProxy proxy(ctx);
    return getSelf().call("visit_qualified_name", &proxy);
  }

  virtual antlrcpp::Any visitUnquotedIdentifier(PrestoParser::UnquotedIdentifierContext *ctx) override {
    UnquotedIdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_unquoted_identifier", &proxy);
  }

  virtual antlrcpp::Any visitQuotedIdentifierAlternative(PrestoParser::QuotedIdentifierAlternativeContext *ctx) override {
    QuotedIdentifierAlternativeContextProxy proxy(ctx);
    return getSelf().call("visit_quoted_identifier_alternative", &proxy);
  }

  virtual antlrcpp::Any visitBackQuotedIdentifier(PrestoParser::BackQuotedIdentifierContext *ctx) override {
    BackQuotedIdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_back_quoted_identifier", &proxy);
  }

  virtual antlrcpp::Any visitDigitIdentifier(PrestoParser::DigitIdentifierContext *ctx) override {
    DigitIdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_digit_identifier", &proxy);
  }

  virtual antlrcpp::Any visitQuotedIdentifier(PrestoParser::QuotedIdentifierContext *ctx) override {
    QuotedIdentifierContextProxy proxy(ctx);
    return getSelf().call("visit_quoted_identifier", &proxy);
  }

  virtual antlrcpp::Any visitDecimalLiteral(PrestoParser::DecimalLiteralContext *ctx) override {
    DecimalLiteralContextProxy proxy(ctx);
    return getSelf().call("visit_decimal_literal", &proxy);
  }

  virtual antlrcpp::Any visitIntegerLiteral(PrestoParser::IntegerLiteralContext *ctx) override {
    IntegerLiteralContextProxy proxy(ctx);
    return getSelf().call("visit_integer_literal", &proxy);
  }

  virtual antlrcpp::Any visitNonReserved(PrestoParser::NonReservedContext *ctx) override {
    NonReservedContextProxy proxy(ctx);
    return getSelf().call("visit_non_reserved", &proxy);
  }

  virtual antlrcpp::Any visitNormalForm(PrestoParser::NormalFormContext *ctx) override {
    NormalFormContextProxy proxy(ctx);
    return getSelf().call("visit_normal_form", &proxy);
  }

};

class ParserProxy {
public:
  static ParserProxy* parse(string code) {
    auto input = new ANTLRInputStream(code);
    return parseStream(input);
  }

  static ParserProxy* parseFile(string file) {
    ifstream stream;
    stream.open(file);

    auto input = new ANTLRInputStream(stream);
    auto parser = parseStream(input);

    stream.close();

    return parser;
  }

  Object singleQuery() {
    auto ctx = this -> parser -> singleQuery();

    SingleQueryContextProxy proxy((PrestoParser::SingleQueryContext*) ctx);
    return detail::To_Ruby<SingleQueryContextProxy>().convert(proxy);
  }

  Object visit(VisitorProxy* visitor) {
    auto result = visitor -> visit(this -> parser -> singleQuery());

    // reset for the next visit call
    this -> lexer -> reset();
    this -> parser -> reset();

    return std::any_cast<Object>(result);
  }

  ~ParserProxy() {
    delete this -> parser;
    delete this -> tokens;
    delete this -> lexer;
    delete this -> input;
  }

private:
  static ParserProxy* parseStream(ANTLRInputStream* input) {
    ParserProxy* parser = new ParserProxy();

    parser -> input = input;
    parser -> lexer = new PrestoLexer(parser -> input);
    parser -> tokens = new CommonTokenStream(parser -> lexer);
    parser -> parser = new PrestoParser(parser -> tokens);
    parser -> parser -> removeErrorListeners();
    parser -> parser -> addErrorListener(new PrestoErrorListener(rb_eSyntaxError));

    return parser;
  }

  ParserProxy() {};

  ANTLRInputStream* input;
  PrestoLexer* lexer;
  CommonTokenStream* tokens;
  PrestoParser* parser;
};

namespace Rice::detail {
  template <>
  class To_Ruby<ParserProxy*> {
  public:
    VALUE convert(ParserProxy* const &x) {
      if (!x) return Nil;
      return Data_Object<ParserProxy>(x, false, rb_cParser);
    }
  };
}


Object ContextProxy::wrapParseTree(tree::ParseTree* node) {
  if (antlrcpp::is<PrestoParser::SingleQueryContext*>(node)) {
    SingleQueryContextProxy proxy((PrestoParser::SingleQueryContext*)node);
    return detail::To_Ruby<SingleQueryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QueryContext*>(node)) {
    QueryContextProxy proxy((PrestoParser::QueryContext*)node);
    return detail::To_Ruby<QueryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QueryNoWithContext*>(node)) {
    QueryNoWithContextProxy proxy((PrestoParser::QueryNoWithContext*)node);
    return detail::To_Ruby<QueryNoWithContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::WithContext*>(node)) {
    WithContextProxy proxy((PrestoParser::WithContext*)node);
    return detail::To_Ruby<WithContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NamedQueryContext*>(node)) {
    NamedQueryContextProxy proxy((PrestoParser::NamedQueryContext*)node);
    return detail::To_Ruby<NamedQueryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TableElementContext*>(node)) {
    TableElementContextProxy proxy((PrestoParser::TableElementContext*)node);
    return detail::To_Ruby<TableElementContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ColumnDefinitionContext*>(node)) {
    ColumnDefinitionContextProxy proxy((PrestoParser::ColumnDefinitionContext*)node);
    return detail::To_Ruby<ColumnDefinitionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::LikeClauseContext*>(node)) {
    LikeClauseContextProxy proxy((PrestoParser::LikeClauseContext*)node);
    return detail::To_Ruby<LikeClauseContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::IdentifierContext*>(node)) {
    IdentifierContextProxy proxy((PrestoParser::IdentifierContext*)node);
    return detail::To_Ruby<IdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TypeContext*>(node)) {
    TypeContextProxy proxy((PrestoParser::TypeContext*)node);
    return detail::To_Ruby<TypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QualifiedNameContext*>(node)) {
    QualifiedNameContextProxy proxy((PrestoParser::QualifiedNameContext*)node);
    return detail::To_Ruby<QualifiedNameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TablePropertiesContext*>(node)) {
    TablePropertiesContextProxy proxy((PrestoParser::TablePropertiesContext*)node);
    return detail::To_Ruby<TablePropertiesContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TablePropertyContext*>(node)) {
    TablePropertyContextProxy proxy((PrestoParser::TablePropertyContext*)node);
    return detail::To_Ruby<TablePropertyContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ExpressionContext*>(node)) {
    ExpressionContextProxy proxy((PrestoParser::ExpressionContext*)node);
    return detail::To_Ruby<ExpressionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QueryTermContext*>(node)) {
    QueryTermContextProxy proxy((PrestoParser::QueryTermContext*)node);
    return detail::To_Ruby<QueryTermContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SortItemContext*>(node)) {
    SortItemContextProxy proxy((PrestoParser::SortItemContext*)node);
    return detail::To_Ruby<SortItemContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QueryPrimaryContext*>(node)) {
    QueryPrimaryContextProxy proxy((PrestoParser::QueryPrimaryContext*)node);
    return detail::To_Ruby<QueryPrimaryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QueryTermDefaultContext*>(node)) {
    QueryTermDefaultContextProxy proxy((PrestoParser::QueryTermDefaultContext*)node);
    return detail::To_Ruby<QueryTermDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SetOperationContext*>(node)) {
    SetOperationContextProxy proxy((PrestoParser::SetOperationContext*)node);
    return detail::To_Ruby<SetOperationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SetQuantifierContext*>(node)) {
    SetQuantifierContextProxy proxy((PrestoParser::SetQuantifierContext*)node);
    return detail::To_Ruby<SetQuantifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SubqueryContext*>(node)) {
    SubqueryContextProxy proxy((PrestoParser::SubqueryContext*)node);
    return detail::To_Ruby<SubqueryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QuerySpecificationContext*>(node)) {
    QuerySpecificationContextProxy proxy((PrestoParser::QuerySpecificationContext*)node);
    return detail::To_Ruby<QuerySpecificationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QueryPrimaryDefaultContext*>(node)) {
    QueryPrimaryDefaultContextProxy proxy((PrestoParser::QueryPrimaryDefaultContext*)node);
    return detail::To_Ruby<QueryPrimaryDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TableContext*>(node)) {
    TableContextProxy proxy((PrestoParser::TableContext*)node);
    return detail::To_Ruby<TableContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::InlineTableContext*>(node)) {
    InlineTableContextProxy proxy((PrestoParser::InlineTableContext*)node);
    return detail::To_Ruby<InlineTableContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SelectItemContext*>(node)) {
    SelectItemContextProxy proxy((PrestoParser::SelectItemContext*)node);
    return detail::To_Ruby<SelectItemContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::RelationContext*>(node)) {
    RelationContextProxy proxy((PrestoParser::RelationContext*)node);
    return detail::To_Ruby<RelationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::GroupByContext*>(node)) {
    GroupByContextProxy proxy((PrestoParser::GroupByContext*)node);
    return detail::To_Ruby<GroupByContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BooleanExpressionContext*>(node)) {
    BooleanExpressionContextProxy proxy((PrestoParser::BooleanExpressionContext*)node);
    return detail::To_Ruby<BooleanExpressionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::GroupingElementContext*>(node)) {
    GroupingElementContextProxy proxy((PrestoParser::GroupingElementContext*)node);
    return detail::To_Ruby<GroupingElementContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::MultipleGroupingSetsContext*>(node)) {
    MultipleGroupingSetsContextProxy proxy((PrestoParser::MultipleGroupingSetsContext*)node);
    return detail::To_Ruby<MultipleGroupingSetsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::GroupingSetContext*>(node)) {
    GroupingSetContextProxy proxy((PrestoParser::GroupingSetContext*)node);
    return detail::To_Ruby<GroupingSetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::GroupingExpressionsContext*>(node)) {
    GroupingExpressionsContextProxy proxy((PrestoParser::GroupingExpressionsContext*)node);
    return detail::To_Ruby<GroupingExpressionsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SingleGroupingSetContext*>(node)) {
    SingleGroupingSetContextProxy proxy((PrestoParser::SingleGroupingSetContext*)node);
    return detail::To_Ruby<SingleGroupingSetContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::CubeContext*>(node)) {
    CubeContextProxy proxy((PrestoParser::CubeContext*)node);
    return detail::To_Ruby<CubeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::RollupContext*>(node)) {
    RollupContextProxy proxy((PrestoParser::RollupContext*)node);
    return detail::To_Ruby<RollupContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ColumnAliasesContext*>(node)) {
    ColumnAliasesContextProxy proxy((PrestoParser::ColumnAliasesContext*)node);
    return detail::To_Ruby<ColumnAliasesContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SelectAllContext*>(node)) {
    SelectAllContextProxy proxy((PrestoParser::SelectAllContext*)node);
    return detail::To_Ruby<SelectAllContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SelectSingleContext*>(node)) {
    SelectSingleContextProxy proxy((PrestoParser::SelectSingleContext*)node);
    return detail::To_Ruby<SelectSingleContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SampledRelationContext*>(node)) {
    SampledRelationContextProxy proxy((PrestoParser::SampledRelationContext*)node);
    return detail::To_Ruby<SampledRelationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::RelationDefaultContext*>(node)) {
    RelationDefaultContextProxy proxy((PrestoParser::RelationDefaultContext*)node);
    return detail::To_Ruby<RelationDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::JoinRelationContext*>(node)) {
    JoinRelationContextProxy proxy((PrestoParser::JoinRelationContext*)node);
    return detail::To_Ruby<JoinRelationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::JoinTypeContext*>(node)) {
    JoinTypeContextProxy proxy((PrestoParser::JoinTypeContext*)node);
    return detail::To_Ruby<JoinTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::JoinCriteriaContext*>(node)) {
    JoinCriteriaContextProxy proxy((PrestoParser::JoinCriteriaContext*)node);
    return detail::To_Ruby<JoinCriteriaContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::AliasedRelationContext*>(node)) {
    AliasedRelationContextProxy proxy((PrestoParser::AliasedRelationContext*)node);
    return detail::To_Ruby<AliasedRelationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SampleTypeContext*>(node)) {
    SampleTypeContextProxy proxy((PrestoParser::SampleTypeContext*)node);
    return detail::To_Ruby<SampleTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::RelationPrimaryContext*>(node)) {
    RelationPrimaryContextProxy proxy((PrestoParser::RelationPrimaryContext*)node);
    return detail::To_Ruby<RelationPrimaryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SubqueryRelationContext*>(node)) {
    SubqueryRelationContextProxy proxy((PrestoParser::SubqueryRelationContext*)node);
    return detail::To_Ruby<SubqueryRelationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ParenthesizedRelationContext*>(node)) {
    ParenthesizedRelationContextProxy proxy((PrestoParser::ParenthesizedRelationContext*)node);
    return detail::To_Ruby<ParenthesizedRelationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::UnnestContext*>(node)) {
    UnnestContextProxy proxy((PrestoParser::UnnestContext*)node);
    return detail::To_Ruby<UnnestContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TableNameContext*>(node)) {
    TableNameContextProxy proxy((PrestoParser::TableNameContext*)node);
    return detail::To_Ruby<TableNameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::LogicalNotContext*>(node)) {
    LogicalNotContextProxy proxy((PrestoParser::LogicalNotContext*)node);
    return detail::To_Ruby<LogicalNotContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::PredicatedContext*>(node)) {
    PredicatedContextProxy proxy((PrestoParser::PredicatedContext*)node);
    return detail::To_Ruby<PredicatedContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BooleanDefaultContext*>(node)) {
    BooleanDefaultContextProxy proxy((PrestoParser::BooleanDefaultContext*)node);
    return detail::To_Ruby<BooleanDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::LogicalBinaryContext*>(node)) {
    LogicalBinaryContextProxy proxy((PrestoParser::LogicalBinaryContext*)node);
    return detail::To_Ruby<LogicalBinaryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ValueExpressionContext*>(node)) {
    ValueExpressionContextProxy proxy((PrestoParser::ValueExpressionContext*)node);
    return detail::To_Ruby<ValueExpressionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::PredicateContext*>(node)) {
    PredicateContextProxy proxy((PrestoParser::PredicateContext*)node);
    return detail::To_Ruby<PredicateContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ComparisonOperatorContext*>(node)) {
    ComparisonOperatorContextProxy proxy((PrestoParser::ComparisonOperatorContext*)node);
    return detail::To_Ruby<ComparisonOperatorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ComparisonContext*>(node)) {
    ComparisonContextProxy proxy((PrestoParser::ComparisonContext*)node);
    return detail::To_Ruby<ComparisonContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::LikeContext*>(node)) {
    LikeContextProxy proxy((PrestoParser::LikeContext*)node);
    return detail::To_Ruby<LikeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::InSubqueryContext*>(node)) {
    InSubqueryContextProxy proxy((PrestoParser::InSubqueryContext*)node);
    return detail::To_Ruby<InSubqueryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::DistinctFromContext*>(node)) {
    DistinctFromContextProxy proxy((PrestoParser::DistinctFromContext*)node);
    return detail::To_Ruby<DistinctFromContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::InListContext*>(node)) {
    InListContextProxy proxy((PrestoParser::InListContext*)node);
    return detail::To_Ruby<InListContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NullPredicateContext*>(node)) {
    NullPredicateContextProxy proxy((PrestoParser::NullPredicateContext*)node);
    return detail::To_Ruby<NullPredicateContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BetweenContext*>(node)) {
    BetweenContextProxy proxy((PrestoParser::BetweenContext*)node);
    return detail::To_Ruby<BetweenContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QuantifiedComparisonContext*>(node)) {
    QuantifiedComparisonContextProxy proxy((PrestoParser::QuantifiedComparisonContext*)node);
    return detail::To_Ruby<QuantifiedComparisonContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ComparisonQuantifierContext*>(node)) {
    ComparisonQuantifierContextProxy proxy((PrestoParser::ComparisonQuantifierContext*)node);
    return detail::To_Ruby<ComparisonQuantifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::PrimaryExpressionContext*>(node)) {
    PrimaryExpressionContextProxy proxy((PrestoParser::PrimaryExpressionContext*)node);
    return detail::To_Ruby<PrimaryExpressionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ValueExpressionDefaultContext*>(node)) {
    ValueExpressionDefaultContextProxy proxy((PrestoParser::ValueExpressionDefaultContext*)node);
    return detail::To_Ruby<ValueExpressionDefaultContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ConcatenationContext*>(node)) {
    ConcatenationContextProxy proxy((PrestoParser::ConcatenationContext*)node);
    return detail::To_Ruby<ConcatenationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ArithmeticBinaryContext*>(node)) {
    ArithmeticBinaryContextProxy proxy((PrestoParser::ArithmeticBinaryContext*)node);
    return detail::To_Ruby<ArithmeticBinaryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ArithmeticUnaryContext*>(node)) {
    ArithmeticUnaryContextProxy proxy((PrestoParser::ArithmeticUnaryContext*)node);
    return detail::To_Ruby<ArithmeticUnaryContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::AtTimeZoneContext*>(node)) {
    AtTimeZoneContextProxy proxy((PrestoParser::AtTimeZoneContext*)node);
    return detail::To_Ruby<AtTimeZoneContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TimeZoneSpecifierContext*>(node)) {
    TimeZoneSpecifierContextProxy proxy((PrestoParser::TimeZoneSpecifierContext*)node);
    return detail::To_Ruby<TimeZoneSpecifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::DereferenceContext*>(node)) {
    DereferenceContextProxy proxy((PrestoParser::DereferenceContext*)node);
    return detail::To_Ruby<DereferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TypeConstructorContext*>(node)) {
    TypeConstructorContextProxy proxy((PrestoParser::TypeConstructorContext*)node);
    return detail::To_Ruby<TypeConstructorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SpecialDateTimeFunctionContext*>(node)) {
    SpecialDateTimeFunctionContextProxy proxy((PrestoParser::SpecialDateTimeFunctionContext*)node);
    return detail::To_Ruby<SpecialDateTimeFunctionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SubstringContext*>(node)) {
    SubstringContextProxy proxy((PrestoParser::SubstringContext*)node);
    return detail::To_Ruby<SubstringContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::CastContext*>(node)) {
    CastContextProxy proxy((PrestoParser::CastContext*)node);
    return detail::To_Ruby<CastContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::LambdaContext*>(node)) {
    LambdaContextProxy proxy((PrestoParser::LambdaContext*)node);
    return detail::To_Ruby<LambdaContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ParenthesizedExpressionContext*>(node)) {
    ParenthesizedExpressionContextProxy proxy((PrestoParser::ParenthesizedExpressionContext*)node);
    return detail::To_Ruby<ParenthesizedExpressionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ParameterContext*>(node)) {
    ParameterContextProxy proxy((PrestoParser::ParameterContext*)node);
    return detail::To_Ruby<ParameterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NormalizeContext*>(node)) {
    NormalizeContextProxy proxy((PrestoParser::NormalizeContext*)node);
    return detail::To_Ruby<NormalizeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NormalFormContext*>(node)) {
    NormalFormContextProxy proxy((PrestoParser::NormalFormContext*)node);
    return detail::To_Ruby<NormalFormContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::IntervalContext*>(node)) {
    IntervalContextProxy proxy((PrestoParser::IntervalContext*)node);
    return detail::To_Ruby<IntervalContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::IntervalLiteralContext*>(node)) {
    IntervalLiteralContextProxy proxy((PrestoParser::IntervalLiteralContext*)node);
    return detail::To_Ruby<IntervalLiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NumberContext*>(node)) {
    NumberContextProxy proxy((PrestoParser::NumberContext*)node);
    return detail::To_Ruby<NumberContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NumericLiteralContext*>(node)) {
    NumericLiteralContextProxy proxy((PrestoParser::NumericLiteralContext*)node);
    return detail::To_Ruby<NumericLiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BooleanValueContext*>(node)) {
    BooleanValueContextProxy proxy((PrestoParser::BooleanValueContext*)node);
    return detail::To_Ruby<BooleanValueContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BooleanLiteralContext*>(node)) {
    BooleanLiteralContextProxy proxy((PrestoParser::BooleanLiteralContext*)node);
    return detail::To_Ruby<BooleanLiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SimpleCaseContext*>(node)) {
    SimpleCaseContextProxy proxy((PrestoParser::SimpleCaseContext*)node);
    return detail::To_Ruby<SimpleCaseContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::WhenClauseContext*>(node)) {
    WhenClauseContextProxy proxy((PrestoParser::WhenClauseContext*)node);
    return detail::To_Ruby<WhenClauseContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ColumnReferenceContext*>(node)) {
    ColumnReferenceContextProxy proxy((PrestoParser::ColumnReferenceContext*)node);
    return detail::To_Ruby<ColumnReferenceContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NullLiteralContext*>(node)) {
    NullLiteralContextProxy proxy((PrestoParser::NullLiteralContext*)node);
    return detail::To_Ruby<NullLiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::RowConstructorContext*>(node)) {
    RowConstructorContextProxy proxy((PrestoParser::RowConstructorContext*)node);
    return detail::To_Ruby<RowConstructorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SubscriptContext*>(node)) {
    SubscriptContextProxy proxy((PrestoParser::SubscriptContext*)node);
    return detail::To_Ruby<SubscriptContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SubqueryExpressionContext*>(node)) {
    SubqueryExpressionContextProxy proxy((PrestoParser::SubqueryExpressionContext*)node);
    return detail::To_Ruby<SubqueryExpressionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BinaryLiteralContext*>(node)) {
    BinaryLiteralContextProxy proxy((PrestoParser::BinaryLiteralContext*)node);
    return detail::To_Ruby<BinaryLiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ExtractContext*>(node)) {
    ExtractContextProxy proxy((PrestoParser::ExtractContext*)node);
    return detail::To_Ruby<ExtractContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::StringLiteralContext*>(node)) {
    StringLiteralContextProxy proxy((PrestoParser::StringLiteralContext*)node);
    return detail::To_Ruby<StringLiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ArrayConstructorContext*>(node)) {
    ArrayConstructorContextProxy proxy((PrestoParser::ArrayConstructorContext*)node);
    return detail::To_Ruby<ArrayConstructorContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::FunctionCallContext*>(node)) {
    FunctionCallContextProxy proxy((PrestoParser::FunctionCallContext*)node);
    return detail::To_Ruby<FunctionCallContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::FilterContext*>(node)) {
    FilterContextProxy proxy((PrestoParser::FilterContext*)node);
    return detail::To_Ruby<FilterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::OverContext*>(node)) {
    OverContextProxy proxy((PrestoParser::OverContext*)node);
    return detail::To_Ruby<OverContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ExistsContext*>(node)) {
    ExistsContextProxy proxy((PrestoParser::ExistsContext*)node);
    return detail::To_Ruby<ExistsContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::PositionContext*>(node)) {
    PositionContextProxy proxy((PrestoParser::PositionContext*)node);
    return detail::To_Ruby<PositionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SearchedCaseContext*>(node)) {
    SearchedCaseContextProxy proxy((PrestoParser::SearchedCaseContext*)node);
    return detail::To_Ruby<SearchedCaseContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TimeZoneIntervalContext*>(node)) {
    TimeZoneIntervalContextProxy proxy((PrestoParser::TimeZoneIntervalContext*)node);
    return detail::To_Ruby<TimeZoneIntervalContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TimeZoneStringContext*>(node)) {
    TimeZoneStringContextProxy proxy((PrestoParser::TimeZoneStringContext*)node);
    return detail::To_Ruby<TimeZoneStringContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::IntervalFieldContext*>(node)) {
    IntervalFieldContextProxy proxy((PrestoParser::IntervalFieldContext*)node);
    return detail::To_Ruby<IntervalFieldContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BaseTypeContext*>(node)) {
    BaseTypeContextProxy proxy((PrestoParser::BaseTypeContext*)node);
    return detail::To_Ruby<BaseTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TypeParameterContext*>(node)) {
    TypeParameterContextProxy proxy((PrestoParser::TypeParameterContext*)node);
    return detail::To_Ruby<TypeParameterContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::WindowFrameContext*>(node)) {
    WindowFrameContextProxy proxy((PrestoParser::WindowFrameContext*)node);
    return detail::To_Ruby<WindowFrameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::FrameBoundContext*>(node)) {
    FrameBoundContextProxy proxy((PrestoParser::FrameBoundContext*)node);
    return detail::To_Ruby<FrameBoundContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BoundedFrameContext*>(node)) {
    BoundedFrameContextProxy proxy((PrestoParser::BoundedFrameContext*)node);
    return detail::To_Ruby<BoundedFrameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::UnboundedFrameContext*>(node)) {
    UnboundedFrameContextProxy proxy((PrestoParser::UnboundedFrameContext*)node);
    return detail::To_Ruby<UnboundedFrameContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::CurrentRowBoundContext*>(node)) {
    CurrentRowBoundContextProxy proxy((PrestoParser::CurrentRowBoundContext*)node);
    return detail::To_Ruby<CurrentRowBoundContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ExplainOptionContext*>(node)) {
    ExplainOptionContextProxy proxy((PrestoParser::ExplainOptionContext*)node);
    return detail::To_Ruby<ExplainOptionContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ExplainFormatContext*>(node)) {
    ExplainFormatContextProxy proxy((PrestoParser::ExplainFormatContext*)node);
    return detail::To_Ruby<ExplainFormatContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ExplainTypeContext*>(node)) {
    ExplainTypeContextProxy proxy((PrestoParser::ExplainTypeContext*)node);
    return detail::To_Ruby<ExplainTypeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TransactionModeContext*>(node)) {
    TransactionModeContextProxy proxy((PrestoParser::TransactionModeContext*)node);
    return detail::To_Ruby<TransactionModeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::TransactionAccessModeContext*>(node)) {
    TransactionAccessModeContextProxy proxy((PrestoParser::TransactionAccessModeContext*)node);
    return detail::To_Ruby<TransactionAccessModeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::IsolationLevelContext*>(node)) {
    IsolationLevelContextProxy proxy((PrestoParser::IsolationLevelContext*)node);
    return detail::To_Ruby<IsolationLevelContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::LevelOfIsolationContext*>(node)) {
    LevelOfIsolationContextProxy proxy((PrestoParser::LevelOfIsolationContext*)node);
    return detail::To_Ruby<LevelOfIsolationContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ReadUncommittedContext*>(node)) {
    ReadUncommittedContextProxy proxy((PrestoParser::ReadUncommittedContext*)node);
    return detail::To_Ruby<ReadUncommittedContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::SerializableContext*>(node)) {
    SerializableContextProxy proxy((PrestoParser::SerializableContext*)node);
    return detail::To_Ruby<SerializableContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::ReadCommittedContext*>(node)) {
    ReadCommittedContextProxy proxy((PrestoParser::ReadCommittedContext*)node);
    return detail::To_Ruby<ReadCommittedContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::RepeatableReadContext*>(node)) {
    RepeatableReadContextProxy proxy((PrestoParser::RepeatableReadContext*)node);
    return detail::To_Ruby<RepeatableReadContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::CallArgumentContext*>(node)) {
    CallArgumentContextProxy proxy((PrestoParser::CallArgumentContext*)node);
    return detail::To_Ruby<CallArgumentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::PositionalArgumentContext*>(node)) {
    PositionalArgumentContextProxy proxy((PrestoParser::PositionalArgumentContext*)node);
    return detail::To_Ruby<PositionalArgumentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NamedArgumentContext*>(node)) {
    NamedArgumentContextProxy proxy((PrestoParser::NamedArgumentContext*)node);
    return detail::To_Ruby<NamedArgumentContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::PrivilegeContext*>(node)) {
    PrivilegeContextProxy proxy((PrestoParser::PrivilegeContext*)node);
    return detail::To_Ruby<PrivilegeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::BackQuotedIdentifierContext*>(node)) {
    BackQuotedIdentifierContextProxy proxy((PrestoParser::BackQuotedIdentifierContext*)node);
    return detail::To_Ruby<BackQuotedIdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QuotedIdentifierContext*>(node)) {
    QuotedIdentifierContextProxy proxy((PrestoParser::QuotedIdentifierContext*)node);
    return detail::To_Ruby<QuotedIdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::QuotedIdentifierAlternativeContext*>(node)) {
    QuotedIdentifierAlternativeContextProxy proxy((PrestoParser::QuotedIdentifierAlternativeContext*)node);
    return detail::To_Ruby<QuotedIdentifierAlternativeContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::DigitIdentifierContext*>(node)) {
    DigitIdentifierContextProxy proxy((PrestoParser::DigitIdentifierContext*)node);
    return detail::To_Ruby<DigitIdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::UnquotedIdentifierContext*>(node)) {
    UnquotedIdentifierContextProxy proxy((PrestoParser::UnquotedIdentifierContext*)node);
    return detail::To_Ruby<UnquotedIdentifierContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::NonReservedContext*>(node)) {
    NonReservedContextProxy proxy((PrestoParser::NonReservedContext*)node);
    return detail::To_Ruby<NonReservedContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::DecimalLiteralContext*>(node)) {
    DecimalLiteralContextProxy proxy((PrestoParser::DecimalLiteralContext*)node);
    return detail::To_Ruby<DecimalLiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<PrestoParser::IntegerLiteralContext*>(node)) {
    IntegerLiteralContextProxy proxy((PrestoParser::IntegerLiteralContext*)node);
    return detail::To_Ruby<IntegerLiteralContextProxy>().convert(proxy);
  }
  else if (antlrcpp::is<tree::TerminalNodeImpl*>(node)) {
    TerminalNodeProxy proxy(node);
    return detail::To_Ruby<TerminalNodeProxy>().convert(proxy);
  } else {
    return Nil;
  }
}


extern "C"
void Init_presto_parser() {
  Module rb_mPrestoParser = define_module("PrestoParser");

  rb_eSyntaxError = define_class_under(rb_mPrestoParser, "SyntaxError", rb_eStandardError);

  rb_cToken = define_class_under<Token>(rb_mPrestoParser, "Token")
    .define_method("text", &Token::getText)
    .define_method("channel", &Token::getChannel)
    .define_method("token_index", &Token::getTokenIndex);

  rb_cParseTree = define_class_under<tree::ParseTree>(rb_mPrestoParser, "ParseTree");

  rb_cContextProxy = define_class_under<ContextProxy>(rb_mPrestoParser, "Context")
    .define_method("children", &ContextProxy::getChildren)
    .define_method("child_count", &ContextProxy::childCount)
    .define_method("text", &ContextProxy::getText)
    .define_method("start", &ContextProxy::getStart)
    .define_method("stop", &ContextProxy::getStop)
    .define_method("parent", &ContextProxy::getParent)
    .define_method("==", &ContextProxy::doubleEquals);

  rb_cTerminalNode = define_class_under<TerminalNodeProxy, ContextProxy>(rb_mPrestoParser, "TerminalNodeImpl");

  define_class_under<PrestoBaseVisitor>(rb_mPrestoParser, "Visitor")
    .define_director<VisitorProxy>()
    .define_constructor(Constructor<VisitorProxy, Object>())
    .define_method("visit", &VisitorProxy::ruby_visit)
    .define_method("visit_children", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_single_query", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_with", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table_element", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_column_definition", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_like_clause", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table_properties", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table_property", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query_no_with", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query_term_default", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_set_operation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query_primary_default", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_inline_table", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_subquery", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sort_item", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_query_specification", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_group_by", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_single_grouping_set", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_rollup", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_cube", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_multiple_grouping_sets", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_grouping_expressions", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_grouping_set", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_query", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_set_quantifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_select_single", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_select_all", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_relation_default", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_join_relation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_join_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_join_criteria", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sampled_relation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_sample_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_aliased_relation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_column_aliases", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_table_name", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_subquery_relation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_unnest", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parenthesized_relation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_expression", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_logical_not", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_boolean_default", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_logical_binary", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_predicated", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_comparison", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_quantified_comparison", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_between", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_in_list", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_in_subquery", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_like", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_null_predicate", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_distinct_from", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_value_expression_default", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_concatenation", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_arithmetic_binary", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_arithmetic_unary", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_at_time_zone", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_dereference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_constructor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_special_date_time_function", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_substring", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_cast", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_lambda", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parenthesized_expression", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_parameter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_normalize", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_interval_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_numeric_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_boolean_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_simple_case", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_column_reference", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_null_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_row_constructor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_subscript", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_subquery_expression", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_binary_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_extract", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_string_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_array_constructor", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_function_call", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_exists", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_position", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_searched_case", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_time_zone_interval", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_time_zone_string", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_comparison_operator", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_comparison_quantifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_boolean_value", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_interval", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_interval_field", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_type_parameter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_base_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_when_clause", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_filter", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_over", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_window_frame", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_unbounded_frame", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_current_row_bound", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_bounded_frame", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_explain_format", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_explain_type", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_isolation_level", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_transaction_access_mode", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_read_uncommitted", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_read_committed", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_repeatable_read", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_serializable", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_positional_argument", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_named_argument", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_privilege", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_qualified_name", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_unquoted_identifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_quoted_identifier_alternative", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_back_quoted_identifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_digit_identifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_quoted_identifier", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_decimal_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_integer_literal", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_non_reserved", &VisitorProxy::ruby_visitChildren)
    .define_method("visit_normal_form", &VisitorProxy::ruby_visitChildren);

  rb_cParser = define_class_under<ParserProxy>(rb_mPrestoParser, "Parser")
    .define_singleton_function("parse", &ParserProxy::parse)
    .define_singleton_function("parse_file", &ParserProxy::parseFile)
    .define_method("singleQuery", &ParserProxy::singleQuery, Return().keepAlive())
    .define_method("visit", &ParserProxy::visit, Return().keepAlive());

  rb_cSingleQueryContext = define_class_under<SingleQueryContextProxy, ContextProxy>(rb_mPrestoParser, "SingleQueryContext")
    .define_method("query", &SingleQueryContextProxy::query)
    .define_method("EOF", &SingleQueryContextProxy::EOF);

  rb_cQueryContext = define_class_under<QueryContextProxy, ContextProxy>(rb_mPrestoParser, "QueryContext")
    .define_method("query_no_with", &QueryContextProxy::queryNoWith)
    .define_method("with", &QueryContextProxy::with);

  rb_cQueryNoWithContext = define_class_under<QueryNoWithContextProxy, ContextProxy>(rb_mPrestoParser, "QueryNoWithContext")
    .define_method("query_term", &QueryNoWithContextProxy::queryTerm)
    .define_method("sort_item", &QueryNoWithContextProxy::sortItem)
    .define_method("sort_item_at", &QueryNoWithContextProxy::sortItemAt)
    .define_method("ORDER", &QueryNoWithContextProxy::ORDER)
    .define_method("BY", &QueryNoWithContextProxy::BY)
    .define_method("LIMIT", &QueryNoWithContextProxy::LIMIT)
    .define_method("INTEGER_VALUE", &QueryNoWithContextProxy::INTEGER_VALUE)
    .define_method("ALL", &QueryNoWithContextProxy::ALL);

  rb_cWithContext = define_class_under<WithContextProxy, ContextProxy>(rb_mPrestoParser, "WithContext")
    .define_method("named_query", &WithContextProxy::namedQuery)
    .define_method("named_query_at", &WithContextProxy::namedQueryAt)
    .define_method("WITH", &WithContextProxy::WITH)
    .define_method("RECURSIVE", &WithContextProxy::RECURSIVE);

  rb_cNamedQueryContext = define_class_under<NamedQueryContextProxy, ContextProxy>(rb_mPrestoParser, "NamedQueryContext")
    .define_method("query", &NamedQueryContextProxy::query)
    .define_method("identifier", &NamedQueryContextProxy::identifier)
    .define_method("column_aliases", &NamedQueryContextProxy::columnAliases)
    .define_method("AS", &NamedQueryContextProxy::AS);

  rb_cTableElementContext = define_class_under<TableElementContextProxy, ContextProxy>(rb_mPrestoParser, "TableElementContext")
    .define_method("column_definition", &TableElementContextProxy::columnDefinition)
    .define_method("like_clause", &TableElementContextProxy::likeClause);

  rb_cColumnDefinitionContext = define_class_under<ColumnDefinitionContextProxy, ContextProxy>(rb_mPrestoParser, "ColumnDefinitionContext")
    .define_method("identifier", &ColumnDefinitionContextProxy::identifier)
    .define_method("type", &ColumnDefinitionContextProxy::type)
    .define_method("COMMENT", &ColumnDefinitionContextProxy::COMMENT)
    .define_method("STRING", &ColumnDefinitionContextProxy::STRING);

  rb_cLikeClauseContext = define_class_under<LikeClauseContextProxy, ContextProxy>(rb_mPrestoParser, "LikeClauseContext")
    .define_method("qualified_name", &LikeClauseContextProxy::qualifiedName)
    .define_method("LIKE", &LikeClauseContextProxy::LIKE)
    .define_method("PROPERTIES", &LikeClauseContextProxy::PROPERTIES)
    .define_method("INCLUDING", &LikeClauseContextProxy::INCLUDING)
    .define_method("EXCLUDING", &LikeClauseContextProxy::EXCLUDING);

  rb_cIdentifierContext = define_class_under<IdentifierContextProxy, ContextProxy>(rb_mPrestoParser, "IdentifierContext");

  rb_cTypeContext = define_class_under<TypeContextProxy, ContextProxy>(rb_mPrestoParser, "TypeContext")
    .define_method("type", &TypeContextProxy::type)
    .define_method("type_at", &TypeContextProxy::typeAt)
    .define_method("identifier", &TypeContextProxy::identifier)
    .define_method("identifier_at", &TypeContextProxy::identifierAt)
    .define_method("base_type", &TypeContextProxy::baseType)
    .define_method("type_parameter", &TypeContextProxy::typeParameter)
    .define_method("type_parameter_at", &TypeContextProxy::typeParameterAt)
    .define_method("ARRAY", &TypeContextProxy::ARRAY)
    .define_method("LT", &TypeContextProxy::LT)
    .define_method("GT", &TypeContextProxy::GT)
    .define_method("MAP", &TypeContextProxy::MAP)
    .define_method("ROW", &TypeContextProxy::ROW);

  rb_cQualifiedNameContext = define_class_under<QualifiedNameContextProxy, ContextProxy>(rb_mPrestoParser, "QualifiedNameContext")
    .define_method("identifier", &QualifiedNameContextProxy::identifier)
    .define_method("identifier_at", &QualifiedNameContextProxy::identifierAt);

  rb_cTablePropertiesContext = define_class_under<TablePropertiesContextProxy, ContextProxy>(rb_mPrestoParser, "TablePropertiesContext")
    .define_method("table_property", &TablePropertiesContextProxy::tableProperty)
    .define_method("table_property_at", &TablePropertiesContextProxy::tablePropertyAt);

  rb_cTablePropertyContext = define_class_under<TablePropertyContextProxy, ContextProxy>(rb_mPrestoParser, "TablePropertyContext")
    .define_method("identifier", &TablePropertyContextProxy::identifier)
    .define_method("expression", &TablePropertyContextProxy::expression)
    .define_method("EQ", &TablePropertyContextProxy::EQ);

  rb_cExpressionContext = define_class_under<ExpressionContextProxy, ContextProxy>(rb_mPrestoParser, "ExpressionContext")
    .define_method("boolean_expression", &ExpressionContextProxy::booleanExpression);

  rb_cQueryTermContext = define_class_under<QueryTermContextProxy, ContextProxy>(rb_mPrestoParser, "QueryTermContext");

  rb_cSortItemContext = define_class_under<SortItemContextProxy, ContextProxy>(rb_mPrestoParser, "SortItemContext")
    .define_method("expression", &SortItemContextProxy::expression)
    .define_method("NULLS", &SortItemContextProxy::NULLS)
    .define_method("ASC", &SortItemContextProxy::ASC)
    .define_method("DESC", &SortItemContextProxy::DESC)
    .define_method("FIRST", &SortItemContextProxy::FIRST)
    .define_method("LAST", &SortItemContextProxy::LAST);

  rb_cQueryPrimaryContext = define_class_under<QueryPrimaryContextProxy, ContextProxy>(rb_mPrestoParser, "QueryPrimaryContext");

  rb_cQueryTermDefaultContext = define_class_under<QueryTermDefaultContextProxy, ContextProxy>(rb_mPrestoParser, "QueryTermDefaultContext")
    .define_method("query_primary", &QueryTermDefaultContextProxy::queryPrimary);

  rb_cSetOperationContext = define_class_under<SetOperationContextProxy, ContextProxy>(rb_mPrestoParser, "SetOperationContext")
    .define_method("query_term", &SetOperationContextProxy::queryTerm)
    .define_method("query_term_at", &SetOperationContextProxy::queryTermAt)
    .define_method("set_quantifier", &SetOperationContextProxy::setQuantifier)
    .define_method("INTERSECT", &SetOperationContextProxy::INTERSECT)
    .define_method("UNION", &SetOperationContextProxy::UNION)
    .define_method("EXCEPT", &SetOperationContextProxy::EXCEPT);

  rb_cSetQuantifierContext = define_class_under<SetQuantifierContextProxy, ContextProxy>(rb_mPrestoParser, "SetQuantifierContext")
    .define_method("DISTINCT", &SetQuantifierContextProxy::DISTINCT)
    .define_method("ALL", &SetQuantifierContextProxy::ALL);

  rb_cSubqueryContext = define_class_under<SubqueryContextProxy, ContextProxy>(rb_mPrestoParser, "SubqueryContext")
    .define_method("query_no_with", &SubqueryContextProxy::queryNoWith);

  rb_cQuerySpecificationContext = define_class_under<QuerySpecificationContextProxy, ContextProxy>(rb_mPrestoParser, "QuerySpecificationContext")
    .define_method("select_item", &QuerySpecificationContextProxy::selectItem)
    .define_method("select_item_at", &QuerySpecificationContextProxy::selectItemAt)
    .define_method("set_quantifier", &QuerySpecificationContextProxy::setQuantifier)
    .define_method("relation", &QuerySpecificationContextProxy::relation)
    .define_method("relation_at", &QuerySpecificationContextProxy::relationAt)
    .define_method("group_by", &QuerySpecificationContextProxy::groupBy)
    .define_method("boolean_expression", &QuerySpecificationContextProxy::booleanExpression)
    .define_method("boolean_expression_at", &QuerySpecificationContextProxy::booleanExpressionAt)
    .define_method("SELECT", &QuerySpecificationContextProxy::SELECT)
    .define_method("FROM", &QuerySpecificationContextProxy::FROM)
    .define_method("WHERE", &QuerySpecificationContextProxy::WHERE)
    .define_method("GROUP", &QuerySpecificationContextProxy::GROUP)
    .define_method("BY", &QuerySpecificationContextProxy::BY)
    .define_method("HAVING", &QuerySpecificationContextProxy::HAVING);

  rb_cQueryPrimaryDefaultContext = define_class_under<QueryPrimaryDefaultContextProxy, ContextProxy>(rb_mPrestoParser, "QueryPrimaryDefaultContext")
    .define_method("query_specification", &QueryPrimaryDefaultContextProxy::querySpecification);

  rb_cTableContext = define_class_under<TableContextProxy, ContextProxy>(rb_mPrestoParser, "TableContext")
    .define_method("qualified_name", &TableContextProxy::qualifiedName)
    .define_method("TABLE", &TableContextProxy::TABLE);

  rb_cInlineTableContext = define_class_under<InlineTableContextProxy, ContextProxy>(rb_mPrestoParser, "InlineTableContext")
    .define_method("expression", &InlineTableContextProxy::expression)
    .define_method("expression_at", &InlineTableContextProxy::expressionAt)
    .define_method("VALUES", &InlineTableContextProxy::VALUES);

  rb_cSelectItemContext = define_class_under<SelectItemContextProxy, ContextProxy>(rb_mPrestoParser, "SelectItemContext");

  rb_cRelationContext = define_class_under<RelationContextProxy, ContextProxy>(rb_mPrestoParser, "RelationContext");

  rb_cGroupByContext = define_class_under<GroupByContextProxy, ContextProxy>(rb_mPrestoParser, "GroupByContext")
    .define_method("grouping_element", &GroupByContextProxy::groupingElement)
    .define_method("grouping_element_at", &GroupByContextProxy::groupingElementAt)
    .define_method("set_quantifier", &GroupByContextProxy::setQuantifier);

  rb_cBooleanExpressionContext = define_class_under<BooleanExpressionContextProxy, ContextProxy>(rb_mPrestoParser, "BooleanExpressionContext");

  rb_cGroupingElementContext = define_class_under<GroupingElementContextProxy, ContextProxy>(rb_mPrestoParser, "GroupingElementContext");

  rb_cMultipleGroupingSetsContext = define_class_under<MultipleGroupingSetsContextProxy, ContextProxy>(rb_mPrestoParser, "MultipleGroupingSetsContext")
    .define_method("grouping_set", &MultipleGroupingSetsContextProxy::groupingSet)
    .define_method("grouping_set_at", &MultipleGroupingSetsContextProxy::groupingSetAt)
    .define_method("GROUPING", &MultipleGroupingSetsContextProxy::GROUPING)
    .define_method("SETS", &MultipleGroupingSetsContextProxy::SETS);

  rb_cGroupingSetContext = define_class_under<GroupingSetContextProxy, ContextProxy>(rb_mPrestoParser, "GroupingSetContext")
    .define_method("qualified_name", &GroupingSetContextProxy::qualifiedName)
    .define_method("qualified_name_at", &GroupingSetContextProxy::qualifiedNameAt);

  rb_cGroupingExpressionsContext = define_class_under<GroupingExpressionsContextProxy, ContextProxy>(rb_mPrestoParser, "GroupingExpressionsContext")
    .define_method("expression", &GroupingExpressionsContextProxy::expression)
    .define_method("expression_at", &GroupingExpressionsContextProxy::expressionAt);

  rb_cSingleGroupingSetContext = define_class_under<SingleGroupingSetContextProxy, ContextProxy>(rb_mPrestoParser, "SingleGroupingSetContext")
    .define_method("grouping_expressions", &SingleGroupingSetContextProxy::groupingExpressions);

  rb_cCubeContext = define_class_under<CubeContextProxy, ContextProxy>(rb_mPrestoParser, "CubeContext")
    .define_method("qualified_name", &CubeContextProxy::qualifiedName)
    .define_method("qualified_name_at", &CubeContextProxy::qualifiedNameAt)
    .define_method("CUBE", &CubeContextProxy::CUBE);

  rb_cRollupContext = define_class_under<RollupContextProxy, ContextProxy>(rb_mPrestoParser, "RollupContext")
    .define_method("qualified_name", &RollupContextProxy::qualifiedName)
    .define_method("qualified_name_at", &RollupContextProxy::qualifiedNameAt)
    .define_method("ROLLUP", &RollupContextProxy::ROLLUP);

  rb_cColumnAliasesContext = define_class_under<ColumnAliasesContextProxy, ContextProxy>(rb_mPrestoParser, "ColumnAliasesContext")
    .define_method("identifier", &ColumnAliasesContextProxy::identifier)
    .define_method("identifier_at", &ColumnAliasesContextProxy::identifierAt);

  rb_cSelectAllContext = define_class_under<SelectAllContextProxy, ContextProxy>(rb_mPrestoParser, "SelectAllContext")
    .define_method("qualified_name", &SelectAllContextProxy::qualifiedName)
    .define_method("ASTERISK", &SelectAllContextProxy::ASTERISK);

  rb_cSelectSingleContext = define_class_under<SelectSingleContextProxy, ContextProxy>(rb_mPrestoParser, "SelectSingleContext")
    .define_method("expression", &SelectSingleContextProxy::expression)
    .define_method("identifier", &SelectSingleContextProxy::identifier)
    .define_method("AS", &SelectSingleContextProxy::AS);

  rb_cSampledRelationContext = define_class_under<SampledRelationContextProxy, ContextProxy>(rb_mPrestoParser, "SampledRelationContext")
    .define_method("aliased_relation", &SampledRelationContextProxy::aliasedRelation)
    .define_method("sample_type", &SampledRelationContextProxy::sampleType)
    .define_method("expression", &SampledRelationContextProxy::expression)
    .define_method("TABLESAMPLE", &SampledRelationContextProxy::TABLESAMPLE);

  rb_cRelationDefaultContext = define_class_under<RelationDefaultContextProxy, ContextProxy>(rb_mPrestoParser, "RelationDefaultContext")
    .define_method("sampled_relation", &RelationDefaultContextProxy::sampledRelation);

  rb_cJoinRelationContext = define_class_under<JoinRelationContextProxy, ContextProxy>(rb_mPrestoParser, "JoinRelationContext")
    .define_method("relation", &JoinRelationContextProxy::relation)
    .define_method("relation_at", &JoinRelationContextProxy::relationAt)
    .define_method("join_type", &JoinRelationContextProxy::joinType)
    .define_method("join_criteria", &JoinRelationContextProxy::joinCriteria)
    .define_method("sampled_relation", &JoinRelationContextProxy::sampledRelation)
    .define_method("CROSS", &JoinRelationContextProxy::CROSS)
    .define_method("JOIN", &JoinRelationContextProxy::JOIN)
    .define_method("NATURAL", &JoinRelationContextProxy::NATURAL);

  rb_cJoinTypeContext = define_class_under<JoinTypeContextProxy, ContextProxy>(rb_mPrestoParser, "JoinTypeContext")
    .define_method("INNER", &JoinTypeContextProxy::INNER)
    .define_method("LEFT", &JoinTypeContextProxy::LEFT)
    .define_method("OUTER", &JoinTypeContextProxy::OUTER)
    .define_method("RIGHT", &JoinTypeContextProxy::RIGHT)
    .define_method("FULL", &JoinTypeContextProxy::FULL);

  rb_cJoinCriteriaContext = define_class_under<JoinCriteriaContextProxy, ContextProxy>(rb_mPrestoParser, "JoinCriteriaContext")
    .define_method("boolean_expression", &JoinCriteriaContextProxy::booleanExpression)
    .define_method("identifier", &JoinCriteriaContextProxy::identifier)
    .define_method("identifier_at", &JoinCriteriaContextProxy::identifierAt)
    .define_method("ON", &JoinCriteriaContextProxy::ON)
    .define_method("USING", &JoinCriteriaContextProxy::USING);

  rb_cAliasedRelationContext = define_class_under<AliasedRelationContextProxy, ContextProxy>(rb_mPrestoParser, "AliasedRelationContext")
    .define_method("relation_primary", &AliasedRelationContextProxy::relationPrimary)
    .define_method("identifier", &AliasedRelationContextProxy::identifier)
    .define_method("column_aliases", &AliasedRelationContextProxy::columnAliases)
    .define_method("AS", &AliasedRelationContextProxy::AS);

  rb_cSampleTypeContext = define_class_under<SampleTypeContextProxy, ContextProxy>(rb_mPrestoParser, "SampleTypeContext")
    .define_method("BERNOULLI", &SampleTypeContextProxy::BERNOULLI)
    .define_method("SYSTEM", &SampleTypeContextProxy::SYSTEM)
    .define_method("POISSONIZED", &SampleTypeContextProxy::POISSONIZED);

  rb_cRelationPrimaryContext = define_class_under<RelationPrimaryContextProxy, ContextProxy>(rb_mPrestoParser, "RelationPrimaryContext");

  rb_cSubqueryRelationContext = define_class_under<SubqueryRelationContextProxy, ContextProxy>(rb_mPrestoParser, "SubqueryRelationContext")
    .define_method("query", &SubqueryRelationContextProxy::query);

  rb_cParenthesizedRelationContext = define_class_under<ParenthesizedRelationContextProxy, ContextProxy>(rb_mPrestoParser, "ParenthesizedRelationContext")
    .define_method("relation", &ParenthesizedRelationContextProxy::relation);

  rb_cUnnestContext = define_class_under<UnnestContextProxy, ContextProxy>(rb_mPrestoParser, "UnnestContext")
    .define_method("expression", &UnnestContextProxy::expression)
    .define_method("expression_at", &UnnestContextProxy::expressionAt)
    .define_method("UNNEST", &UnnestContextProxy::UNNEST)
    .define_method("WITH", &UnnestContextProxy::WITH)
    .define_method("ORDINALITY", &UnnestContextProxy::ORDINALITY);

  rb_cTableNameContext = define_class_under<TableNameContextProxy, ContextProxy>(rb_mPrestoParser, "TableNameContext")
    .define_method("qualified_name", &TableNameContextProxy::qualifiedName);

  rb_cLogicalNotContext = define_class_under<LogicalNotContextProxy, ContextProxy>(rb_mPrestoParser, "LogicalNotContext")
    .define_method("boolean_expression", &LogicalNotContextProxy::booleanExpression)
    .define_method("NOT", &LogicalNotContextProxy::NOT);

  rb_cPredicatedContext = define_class_under<PredicatedContextProxy, ContextProxy>(rb_mPrestoParser, "PredicatedContext")
    .define_method("value_expression", &PredicatedContextProxy::valueExpression)
    .define_method("predicate", &PredicatedContextProxy::predicate);

  rb_cBooleanDefaultContext = define_class_under<BooleanDefaultContextProxy, ContextProxy>(rb_mPrestoParser, "BooleanDefaultContext")
    .define_method("predicated", &BooleanDefaultContextProxy::predicated);

  rb_cLogicalBinaryContext = define_class_under<LogicalBinaryContextProxy, ContextProxy>(rb_mPrestoParser, "LogicalBinaryContext")
    .define_method("boolean_expression", &LogicalBinaryContextProxy::booleanExpression)
    .define_method("boolean_expression_at", &LogicalBinaryContextProxy::booleanExpressionAt)
    .define_method("AND", &LogicalBinaryContextProxy::AND)
    .define_method("OR", &LogicalBinaryContextProxy::OR);

  rb_cValueExpressionContext = define_class_under<ValueExpressionContextProxy, ContextProxy>(rb_mPrestoParser, "ValueExpressionContext");

  rb_cPredicateContext = define_class_under<PredicateContextProxy, ContextProxy>(rb_mPrestoParser, "PredicateContext");

  rb_cComparisonOperatorContext = define_class_under<ComparisonOperatorContextProxy, ContextProxy>(rb_mPrestoParser, "ComparisonOperatorContext")
    .define_method("EQ", &ComparisonOperatorContextProxy::EQ)
    .define_method("NEQ", &ComparisonOperatorContextProxy::NEQ)
    .define_method("LT", &ComparisonOperatorContextProxy::LT)
    .define_method("LTE", &ComparisonOperatorContextProxy::LTE)
    .define_method("GT", &ComparisonOperatorContextProxy::GT)
    .define_method("GTE", &ComparisonOperatorContextProxy::GTE);

  rb_cComparisonContext = define_class_under<ComparisonContextProxy, ContextProxy>(rb_mPrestoParser, "ComparisonContext")
    .define_method("comparison_operator", &ComparisonContextProxy::comparisonOperator)
    .define_method("value_expression", &ComparisonContextProxy::valueExpression);

  rb_cLikeContext = define_class_under<LikeContextProxy, ContextProxy>(rb_mPrestoParser, "LikeContext")
    .define_method("value_expression", &LikeContextProxy::valueExpression)
    .define_method("value_expression_at", &LikeContextProxy::valueExpressionAt)
    .define_method("LIKE", &LikeContextProxy::LIKE)
    .define_method("NOT", &LikeContextProxy::NOT)
    .define_method("ESCAPE", &LikeContextProxy::ESCAPE);

  rb_cInSubqueryContext = define_class_under<InSubqueryContextProxy, ContextProxy>(rb_mPrestoParser, "InSubqueryContext")
    .define_method("query", &InSubqueryContextProxy::query)
    .define_method("IN", &InSubqueryContextProxy::IN)
    .define_method("NOT", &InSubqueryContextProxy::NOT);

  rb_cDistinctFromContext = define_class_under<DistinctFromContextProxy, ContextProxy>(rb_mPrestoParser, "DistinctFromContext")
    .define_method("value_expression", &DistinctFromContextProxy::valueExpression)
    .define_method("IS", &DistinctFromContextProxy::IS)
    .define_method("DISTINCT", &DistinctFromContextProxy::DISTINCT)
    .define_method("FROM", &DistinctFromContextProxy::FROM)
    .define_method("NOT", &DistinctFromContextProxy::NOT);

  rb_cInListContext = define_class_under<InListContextProxy, ContextProxy>(rb_mPrestoParser, "InListContext")
    .define_method("expression", &InListContextProxy::expression)
    .define_method("expression_at", &InListContextProxy::expressionAt)
    .define_method("IN", &InListContextProxy::IN)
    .define_method("NOT", &InListContextProxy::NOT);

  rb_cNullPredicateContext = define_class_under<NullPredicateContextProxy, ContextProxy>(rb_mPrestoParser, "NullPredicateContext")
    .define_method("IS", &NullPredicateContextProxy::IS)
    .define_method("NULLTOKEN", &NullPredicateContextProxy::NULLTOKEN)
    .define_method("NOT", &NullPredicateContextProxy::NOT);

  rb_cBetweenContext = define_class_under<BetweenContextProxy, ContextProxy>(rb_mPrestoParser, "BetweenContext")
    .define_method("value_expression", &BetweenContextProxy::valueExpression)
    .define_method("value_expression_at", &BetweenContextProxy::valueExpressionAt)
    .define_method("BETWEEN", &BetweenContextProxy::BETWEEN)
    .define_method("AND", &BetweenContextProxy::AND)
    .define_method("NOT", &BetweenContextProxy::NOT);

  rb_cQuantifiedComparisonContext = define_class_under<QuantifiedComparisonContextProxy, ContextProxy>(rb_mPrestoParser, "QuantifiedComparisonContext")
    .define_method("comparison_operator", &QuantifiedComparisonContextProxy::comparisonOperator)
    .define_method("comparison_quantifier", &QuantifiedComparisonContextProxy::comparisonQuantifier)
    .define_method("query", &QuantifiedComparisonContextProxy::query);

  rb_cComparisonQuantifierContext = define_class_under<ComparisonQuantifierContextProxy, ContextProxy>(rb_mPrestoParser, "ComparisonQuantifierContext")
    .define_method("ALL", &ComparisonQuantifierContextProxy::ALL)
    .define_method("SOME", &ComparisonQuantifierContextProxy::SOME)
    .define_method("ANY", &ComparisonQuantifierContextProxy::ANY);

  rb_cPrimaryExpressionContext = define_class_under<PrimaryExpressionContextProxy, ContextProxy>(rb_mPrestoParser, "PrimaryExpressionContext");

  rb_cValueExpressionDefaultContext = define_class_under<ValueExpressionDefaultContextProxy, ContextProxy>(rb_mPrestoParser, "ValueExpressionDefaultContext")
    .define_method("primary_expression", &ValueExpressionDefaultContextProxy::primaryExpression);

  rb_cConcatenationContext = define_class_under<ConcatenationContextProxy, ContextProxy>(rb_mPrestoParser, "ConcatenationContext")
    .define_method("value_expression", &ConcatenationContextProxy::valueExpression)
    .define_method("value_expression_at", &ConcatenationContextProxy::valueExpressionAt)
    .define_method("CONCAT", &ConcatenationContextProxy::CONCAT);

  rb_cArithmeticBinaryContext = define_class_under<ArithmeticBinaryContextProxy, ContextProxy>(rb_mPrestoParser, "ArithmeticBinaryContext")
    .define_method("value_expression", &ArithmeticBinaryContextProxy::valueExpression)
    .define_method("value_expression_at", &ArithmeticBinaryContextProxy::valueExpressionAt)
    .define_method("ASTERISK", &ArithmeticBinaryContextProxy::ASTERISK)
    .define_method("SLASH", &ArithmeticBinaryContextProxy::SLASH)
    .define_method("PERCENT", &ArithmeticBinaryContextProxy::PERCENT)
    .define_method("PLUS", &ArithmeticBinaryContextProxy::PLUS)
    .define_method("MINUS", &ArithmeticBinaryContextProxy::MINUS);

  rb_cArithmeticUnaryContext = define_class_under<ArithmeticUnaryContextProxy, ContextProxy>(rb_mPrestoParser, "ArithmeticUnaryContext")
    .define_method("value_expression", &ArithmeticUnaryContextProxy::valueExpression)
    .define_method("MINUS", &ArithmeticUnaryContextProxy::MINUS)
    .define_method("PLUS", &ArithmeticUnaryContextProxy::PLUS);

  rb_cAtTimeZoneContext = define_class_under<AtTimeZoneContextProxy, ContextProxy>(rb_mPrestoParser, "AtTimeZoneContext")
    .define_method("value_expression", &AtTimeZoneContextProxy::valueExpression)
    .define_method("time_zone_specifier", &AtTimeZoneContextProxy::timeZoneSpecifier)
    .define_method("AT", &AtTimeZoneContextProxy::AT);

  rb_cTimeZoneSpecifierContext = define_class_under<TimeZoneSpecifierContextProxy, ContextProxy>(rb_mPrestoParser, "TimeZoneSpecifierContext");

  rb_cDereferenceContext = define_class_under<DereferenceContextProxy, ContextProxy>(rb_mPrestoParser, "DereferenceContext")
    .define_method("primary_expression", &DereferenceContextProxy::primaryExpression)
    .define_method("identifier", &DereferenceContextProxy::identifier);

  rb_cTypeConstructorContext = define_class_under<TypeConstructorContextProxy, ContextProxy>(rb_mPrestoParser, "TypeConstructorContext")
    .define_method("identifier", &TypeConstructorContextProxy::identifier)
    .define_method("STRING", &TypeConstructorContextProxy::STRING)
    .define_method("DOUBLE_PRECISION", &TypeConstructorContextProxy::DOUBLE_PRECISION);

  rb_cSpecialDateTimeFunctionContext = define_class_under<SpecialDateTimeFunctionContextProxy, ContextProxy>(rb_mPrestoParser, "SpecialDateTimeFunctionContext")
    .define_method("CURRENT_DATE", &SpecialDateTimeFunctionContextProxy::CURRENT_DATE)
    .define_method("CURRENT_TIME", &SpecialDateTimeFunctionContextProxy::CURRENT_TIME)
    .define_method("INTEGER_VALUE", &SpecialDateTimeFunctionContextProxy::INTEGER_VALUE)
    .define_method("CURRENT_TIMESTAMP", &SpecialDateTimeFunctionContextProxy::CURRENT_TIMESTAMP)
    .define_method("LOCALTIME", &SpecialDateTimeFunctionContextProxy::LOCALTIME)
    .define_method("LOCALTIMESTAMP", &SpecialDateTimeFunctionContextProxy::LOCALTIMESTAMP);

  rb_cSubstringContext = define_class_under<SubstringContextProxy, ContextProxy>(rb_mPrestoParser, "SubstringContext")
    .define_method("value_expression", &SubstringContextProxy::valueExpression)
    .define_method("value_expression_at", &SubstringContextProxy::valueExpressionAt)
    .define_method("SUBSTRING", &SubstringContextProxy::SUBSTRING)
    .define_method("FROM", &SubstringContextProxy::FROM)
    .define_method("FOR", &SubstringContextProxy::FOR);

  rb_cCastContext = define_class_under<CastContextProxy, ContextProxy>(rb_mPrestoParser, "CastContext")
    .define_method("expression", &CastContextProxy::expression)
    .define_method("type", &CastContextProxy::type)
    .define_method("CAST", &CastContextProxy::CAST)
    .define_method("AS", &CastContextProxy::AS)
    .define_method("TRY_CAST", &CastContextProxy::TRY_CAST);

  rb_cLambdaContext = define_class_under<LambdaContextProxy, ContextProxy>(rb_mPrestoParser, "LambdaContext")
    .define_method("identifier", &LambdaContextProxy::identifier)
    .define_method("identifier_at", &LambdaContextProxy::identifierAt)
    .define_method("expression", &LambdaContextProxy::expression);

  rb_cParenthesizedExpressionContext = define_class_under<ParenthesizedExpressionContextProxy, ContextProxy>(rb_mPrestoParser, "ParenthesizedExpressionContext")
    .define_method("expression", &ParenthesizedExpressionContextProxy::expression);

  rb_cParameterContext = define_class_under<ParameterContextProxy, ContextProxy>(rb_mPrestoParser, "ParameterContext");

  rb_cNormalizeContext = define_class_under<NormalizeContextProxy, ContextProxy>(rb_mPrestoParser, "NormalizeContext")
    .define_method("value_expression", &NormalizeContextProxy::valueExpression)
    .define_method("normal_form", &NormalizeContextProxy::normalForm)
    .define_method("NORMALIZE", &NormalizeContextProxy::NORMALIZE);

  rb_cNormalFormContext = define_class_under<NormalFormContextProxy, ContextProxy>(rb_mPrestoParser, "NormalFormContext")
    .define_method("NFD", &NormalFormContextProxy::NFD)
    .define_method("NFC", &NormalFormContextProxy::NFC)
    .define_method("NFKD", &NormalFormContextProxy::NFKD)
    .define_method("NFKC", &NormalFormContextProxy::NFKC);

  rb_cIntervalContext = define_class_under<IntervalContextProxy, ContextProxy>(rb_mPrestoParser, "IntervalContext")
    .define_method("interval_field", &IntervalContextProxy::intervalField)
    .define_method("interval_field_at", &IntervalContextProxy::intervalFieldAt)
    .define_method("INTERVAL", &IntervalContextProxy::INTERVAL)
    .define_method("STRING", &IntervalContextProxy::STRING)
    .define_method("TO", &IntervalContextProxy::TO)
    .define_method("PLUS", &IntervalContextProxy::PLUS)
    .define_method("MINUS", &IntervalContextProxy::MINUS);

  rb_cIntervalLiteralContext = define_class_under<IntervalLiteralContextProxy, ContextProxy>(rb_mPrestoParser, "IntervalLiteralContext")
    .define_method("interval", &IntervalLiteralContextProxy::interval);

  rb_cNumberContext = define_class_under<NumberContextProxy, ContextProxy>(rb_mPrestoParser, "NumberContext");

  rb_cNumericLiteralContext = define_class_under<NumericLiteralContextProxy, ContextProxy>(rb_mPrestoParser, "NumericLiteralContext")
    .define_method("number", &NumericLiteralContextProxy::number);

  rb_cBooleanValueContext = define_class_under<BooleanValueContextProxy, ContextProxy>(rb_mPrestoParser, "BooleanValueContext")
    .define_method("TRUE", &BooleanValueContextProxy::TRUE)
    .define_method("FALSE", &BooleanValueContextProxy::FALSE);

  rb_cBooleanLiteralContext = define_class_under<BooleanLiteralContextProxy, ContextProxy>(rb_mPrestoParser, "BooleanLiteralContext")
    .define_method("boolean_value", &BooleanLiteralContextProxy::booleanValue);

  rb_cSimpleCaseContext = define_class_under<SimpleCaseContextProxy, ContextProxy>(rb_mPrestoParser, "SimpleCaseContext")
    .define_method("value_expression", &SimpleCaseContextProxy::valueExpression)
    .define_method("when_clause", &SimpleCaseContextProxy::whenClause)
    .define_method("when_clause_at", &SimpleCaseContextProxy::whenClauseAt)
    .define_method("expression", &SimpleCaseContextProxy::expression)
    .define_method("CASE", &SimpleCaseContextProxy::CASE)
    .define_method("END", &SimpleCaseContextProxy::END)
    .define_method("ELSE", &SimpleCaseContextProxy::ELSE);

  rb_cWhenClauseContext = define_class_under<WhenClauseContextProxy, ContextProxy>(rb_mPrestoParser, "WhenClauseContext")
    .define_method("expression", &WhenClauseContextProxy::expression)
    .define_method("expression_at", &WhenClauseContextProxy::expressionAt)
    .define_method("WHEN", &WhenClauseContextProxy::WHEN)
    .define_method("THEN", &WhenClauseContextProxy::THEN);

  rb_cColumnReferenceContext = define_class_under<ColumnReferenceContextProxy, ContextProxy>(rb_mPrestoParser, "ColumnReferenceContext")
    .define_method("identifier", &ColumnReferenceContextProxy::identifier);

  rb_cNullLiteralContext = define_class_under<NullLiteralContextProxy, ContextProxy>(rb_mPrestoParser, "NullLiteralContext")
    .define_method("NULLTOKEN", &NullLiteralContextProxy::NULLTOKEN);

  rb_cRowConstructorContext = define_class_under<RowConstructorContextProxy, ContextProxy>(rb_mPrestoParser, "RowConstructorContext")
    .define_method("expression", &RowConstructorContextProxy::expression)
    .define_method("expression_at", &RowConstructorContextProxy::expressionAt)
    .define_method("ROW", &RowConstructorContextProxy::ROW);

  rb_cSubscriptContext = define_class_under<SubscriptContextProxy, ContextProxy>(rb_mPrestoParser, "SubscriptContext")
    .define_method("primary_expression", &SubscriptContextProxy::primaryExpression)
    .define_method("value_expression", &SubscriptContextProxy::valueExpression);

  rb_cSubqueryExpressionContext = define_class_under<SubqueryExpressionContextProxy, ContextProxy>(rb_mPrestoParser, "SubqueryExpressionContext")
    .define_method("query", &SubqueryExpressionContextProxy::query);

  rb_cBinaryLiteralContext = define_class_under<BinaryLiteralContextProxy, ContextProxy>(rb_mPrestoParser, "BinaryLiteralContext")
    .define_method("BINARY_LITERAL", &BinaryLiteralContextProxy::BINARY_LITERAL);

  rb_cExtractContext = define_class_under<ExtractContextProxy, ContextProxy>(rb_mPrestoParser, "ExtractContext")
    .define_method("identifier", &ExtractContextProxy::identifier)
    .define_method("value_expression", &ExtractContextProxy::valueExpression)
    .define_method("EXTRACT", &ExtractContextProxy::EXTRACT)
    .define_method("FROM", &ExtractContextProxy::FROM);

  rb_cStringLiteralContext = define_class_under<StringLiteralContextProxy, ContextProxy>(rb_mPrestoParser, "StringLiteralContext")
    .define_method("STRING", &StringLiteralContextProxy::STRING);

  rb_cArrayConstructorContext = define_class_under<ArrayConstructorContextProxy, ContextProxy>(rb_mPrestoParser, "ArrayConstructorContext")
    .define_method("expression", &ArrayConstructorContextProxy::expression)
    .define_method("expression_at", &ArrayConstructorContextProxy::expressionAt)
    .define_method("ARRAY", &ArrayConstructorContextProxy::ARRAY);

  rb_cFunctionCallContext = define_class_under<FunctionCallContextProxy, ContextProxy>(rb_mPrestoParser, "FunctionCallContext")
    .define_method("qualified_name", &FunctionCallContextProxy::qualifiedName)
    .define_method("filter", &FunctionCallContextProxy::filter)
    .define_method("over", &FunctionCallContextProxy::over)
    .define_method("expression", &FunctionCallContextProxy::expression)
    .define_method("expression_at", &FunctionCallContextProxy::expressionAt)
    .define_method("set_quantifier", &FunctionCallContextProxy::setQuantifier)
    .define_method("ASTERISK", &FunctionCallContextProxy::ASTERISK);

  rb_cFilterContext = define_class_under<FilterContextProxy, ContextProxy>(rb_mPrestoParser, "FilterContext")
    .define_method("boolean_expression", &FilterContextProxy::booleanExpression)
    .define_method("FILTER", &FilterContextProxy::FILTER)
    .define_method("WHERE", &FilterContextProxy::WHERE);

  rb_cOverContext = define_class_under<OverContextProxy, ContextProxy>(rb_mPrestoParser, "OverContext")
    .define_method("sort_item", &OverContextProxy::sortItem)
    .define_method("sort_item_at", &OverContextProxy::sortItemAt)
    .define_method("window_frame", &OverContextProxy::windowFrame)
    .define_method("expression", &OverContextProxy::expression)
    .define_method("expression_at", &OverContextProxy::expressionAt)
    .define_method("OVER", &OverContextProxy::OVER)
    .define_method("PARTITION", &OverContextProxy::PARTITION)
    .define_method("BY", &OverContextProxy::BY)
    .define_method("BYAt", &OverContextProxy::BY)
    .define_method("ORDER", &OverContextProxy::ORDER);

  rb_cExistsContext = define_class_under<ExistsContextProxy, ContextProxy>(rb_mPrestoParser, "ExistsContext")
    .define_method("query", &ExistsContextProxy::query)
    .define_method("EXISTS", &ExistsContextProxy::EXISTS);

  rb_cPositionContext = define_class_under<PositionContextProxy, ContextProxy>(rb_mPrestoParser, "PositionContext")
    .define_method("value_expression", &PositionContextProxy::valueExpression)
    .define_method("value_expression_at", &PositionContextProxy::valueExpressionAt)
    .define_method("POSITION", &PositionContextProxy::POSITION)
    .define_method("IN", &PositionContextProxy::IN);

  rb_cSearchedCaseContext = define_class_under<SearchedCaseContextProxy, ContextProxy>(rb_mPrestoParser, "SearchedCaseContext")
    .define_method("when_clause", &SearchedCaseContextProxy::whenClause)
    .define_method("when_clause_at", &SearchedCaseContextProxy::whenClauseAt)
    .define_method("expression", &SearchedCaseContextProxy::expression)
    .define_method("CASE", &SearchedCaseContextProxy::CASE)
    .define_method("END", &SearchedCaseContextProxy::END)
    .define_method("ELSE", &SearchedCaseContextProxy::ELSE);

  rb_cTimeZoneIntervalContext = define_class_under<TimeZoneIntervalContextProxy, ContextProxy>(rb_mPrestoParser, "TimeZoneIntervalContext")
    .define_method("interval", &TimeZoneIntervalContextProxy::interval)
    .define_method("TIME", &TimeZoneIntervalContextProxy::TIME)
    .define_method("ZONE", &TimeZoneIntervalContextProxy::ZONE);

  rb_cTimeZoneStringContext = define_class_under<TimeZoneStringContextProxy, ContextProxy>(rb_mPrestoParser, "TimeZoneStringContext")
    .define_method("TIME", &TimeZoneStringContextProxy::TIME)
    .define_method("ZONE", &TimeZoneStringContextProxy::ZONE)
    .define_method("STRING", &TimeZoneStringContextProxy::STRING);

  rb_cIntervalFieldContext = define_class_under<IntervalFieldContextProxy, ContextProxy>(rb_mPrestoParser, "IntervalFieldContext")
    .define_method("YEAR", &IntervalFieldContextProxy::YEAR)
    .define_method("MONTH", &IntervalFieldContextProxy::MONTH)
    .define_method("DAY", &IntervalFieldContextProxy::DAY)
    .define_method("HOUR", &IntervalFieldContextProxy::HOUR)
    .define_method("MINUTE", &IntervalFieldContextProxy::MINUTE)
    .define_method("SECOND", &IntervalFieldContextProxy::SECOND);

  rb_cBaseTypeContext = define_class_under<BaseTypeContextProxy, ContextProxy>(rb_mPrestoParser, "BaseTypeContext")
    .define_method("identifier", &BaseTypeContextProxy::identifier)
    .define_method("TIME_WITH_TIME_ZONE", &BaseTypeContextProxy::TIME_WITH_TIME_ZONE)
    .define_method("TIMESTAMP_WITH_TIME_ZONE", &BaseTypeContextProxy::TIMESTAMP_WITH_TIME_ZONE)
    .define_method("DOUBLE_PRECISION", &BaseTypeContextProxy::DOUBLE_PRECISION);

  rb_cTypeParameterContext = define_class_under<TypeParameterContextProxy, ContextProxy>(rb_mPrestoParser, "TypeParameterContext")
    .define_method("type", &TypeParameterContextProxy::type)
    .define_method("INTEGER_VALUE", &TypeParameterContextProxy::INTEGER_VALUE);

  rb_cWindowFrameContext = define_class_under<WindowFrameContextProxy, ContextProxy>(rb_mPrestoParser, "WindowFrameContext")
    .define_method("frame_bound", &WindowFrameContextProxy::frameBound)
    .define_method("frame_bound_at", &WindowFrameContextProxy::frameBoundAt)
    .define_method("RANGE", &WindowFrameContextProxy::RANGE)
    .define_method("ROWS", &WindowFrameContextProxy::ROWS)
    .define_method("BETWEEN", &WindowFrameContextProxy::BETWEEN)
    .define_method("AND", &WindowFrameContextProxy::AND);

  rb_cFrameBoundContext = define_class_under<FrameBoundContextProxy, ContextProxy>(rb_mPrestoParser, "FrameBoundContext");

  rb_cBoundedFrameContext = define_class_under<BoundedFrameContextProxy, ContextProxy>(rb_mPrestoParser, "BoundedFrameContext")
    .define_method("expression", &BoundedFrameContextProxy::expression)
    .define_method("PRECEDING", &BoundedFrameContextProxy::PRECEDING)
    .define_method("FOLLOWING", &BoundedFrameContextProxy::FOLLOWING);

  rb_cUnboundedFrameContext = define_class_under<UnboundedFrameContextProxy, ContextProxy>(rb_mPrestoParser, "UnboundedFrameContext")
    .define_method("UNBOUNDED", &UnboundedFrameContextProxy::UNBOUNDED)
    .define_method("PRECEDING", &UnboundedFrameContextProxy::PRECEDING)
    .define_method("FOLLOWING", &UnboundedFrameContextProxy::FOLLOWING);

  rb_cCurrentRowBoundContext = define_class_under<CurrentRowBoundContextProxy, ContextProxy>(rb_mPrestoParser, "CurrentRowBoundContext")
    .define_method("CURRENT", &CurrentRowBoundContextProxy::CURRENT)
    .define_method("ROW", &CurrentRowBoundContextProxy::ROW);

  rb_cExplainOptionContext = define_class_under<ExplainOptionContextProxy, ContextProxy>(rb_mPrestoParser, "ExplainOptionContext");

  rb_cExplainFormatContext = define_class_under<ExplainFormatContextProxy, ContextProxy>(rb_mPrestoParser, "ExplainFormatContext")
    .define_method("FORMAT", &ExplainFormatContextProxy::FORMAT)
    .define_method("TEXT", &ExplainFormatContextProxy::TEXT)
    .define_method("GRAPHVIZ", &ExplainFormatContextProxy::GRAPHVIZ);

  rb_cExplainTypeContext = define_class_under<ExplainTypeContextProxy, ContextProxy>(rb_mPrestoParser, "ExplainTypeContext")
    .define_method("TYPE", &ExplainTypeContextProxy::TYPE)
    .define_method("LOGICAL", &ExplainTypeContextProxy::LOGICAL)
    .define_method("DISTRIBUTED", &ExplainTypeContextProxy::DISTRIBUTED)
    .define_method("VALIDATE", &ExplainTypeContextProxy::VALIDATE);

  rb_cTransactionModeContext = define_class_under<TransactionModeContextProxy, ContextProxy>(rb_mPrestoParser, "TransactionModeContext");

  rb_cTransactionAccessModeContext = define_class_under<TransactionAccessModeContextProxy, ContextProxy>(rb_mPrestoParser, "TransactionAccessModeContext")
    .define_method("READ", &TransactionAccessModeContextProxy::READ)
    .define_method("ONLY", &TransactionAccessModeContextProxy::ONLY)
    .define_method("WRITE", &TransactionAccessModeContextProxy::WRITE);

  rb_cIsolationLevelContext = define_class_under<IsolationLevelContextProxy, ContextProxy>(rb_mPrestoParser, "IsolationLevelContext")
    .define_method("level_of_isolation", &IsolationLevelContextProxy::levelOfIsolation)
    .define_method("ISOLATION", &IsolationLevelContextProxy::ISOLATION)
    .define_method("LEVEL", &IsolationLevelContextProxy::LEVEL);

  rb_cLevelOfIsolationContext = define_class_under<LevelOfIsolationContextProxy, ContextProxy>(rb_mPrestoParser, "LevelOfIsolationContext");

  rb_cReadUncommittedContext = define_class_under<ReadUncommittedContextProxy, ContextProxy>(rb_mPrestoParser, "ReadUncommittedContext")
    .define_method("READ", &ReadUncommittedContextProxy::READ)
    .define_method("UNCOMMITTED", &ReadUncommittedContextProxy::UNCOMMITTED);

  rb_cSerializableContext = define_class_under<SerializableContextProxy, ContextProxy>(rb_mPrestoParser, "SerializableContext")
    .define_method("SERIALIZABLE", &SerializableContextProxy::SERIALIZABLE);

  rb_cReadCommittedContext = define_class_under<ReadCommittedContextProxy, ContextProxy>(rb_mPrestoParser, "ReadCommittedContext")
    .define_method("READ", &ReadCommittedContextProxy::READ)
    .define_method("COMMITTED", &ReadCommittedContextProxy::COMMITTED);

  rb_cRepeatableReadContext = define_class_under<RepeatableReadContextProxy, ContextProxy>(rb_mPrestoParser, "RepeatableReadContext")
    .define_method("REPEATABLE", &RepeatableReadContextProxy::REPEATABLE)
    .define_method("READ", &RepeatableReadContextProxy::READ);

  rb_cCallArgumentContext = define_class_under<CallArgumentContextProxy, ContextProxy>(rb_mPrestoParser, "CallArgumentContext");

  rb_cPositionalArgumentContext = define_class_under<PositionalArgumentContextProxy, ContextProxy>(rb_mPrestoParser, "PositionalArgumentContext")
    .define_method("expression", &PositionalArgumentContextProxy::expression);

  rb_cNamedArgumentContext = define_class_under<NamedArgumentContextProxy, ContextProxy>(rb_mPrestoParser, "NamedArgumentContext")
    .define_method("identifier", &NamedArgumentContextProxy::identifier)
    .define_method("expression", &NamedArgumentContextProxy::expression);

  rb_cPrivilegeContext = define_class_under<PrivilegeContextProxy, ContextProxy>(rb_mPrestoParser, "PrivilegeContext")
    .define_method("identifier", &PrivilegeContextProxy::identifier)
    .define_method("SELECT", &PrivilegeContextProxy::SELECT)
    .define_method("DELETE", &PrivilegeContextProxy::DELETE)
    .define_method("INSERT", &PrivilegeContextProxy::INSERT);

  rb_cBackQuotedIdentifierContext = define_class_under<BackQuotedIdentifierContextProxy, ContextProxy>(rb_mPrestoParser, "BackQuotedIdentifierContext")
    .define_method("BACKQUOTED_IDENTIFIER", &BackQuotedIdentifierContextProxy::BACKQUOTED_IDENTIFIER);

  rb_cQuotedIdentifierContext = define_class_under<QuotedIdentifierContextProxy, ContextProxy>(rb_mPrestoParser, "QuotedIdentifierContext")
    .define_method("QUOTED_IDENTIFIER", &QuotedIdentifierContextProxy::QUOTED_IDENTIFIER);

  rb_cQuotedIdentifierAlternativeContext = define_class_under<QuotedIdentifierAlternativeContextProxy, ContextProxy>(rb_mPrestoParser, "QuotedIdentifierAlternativeContext")
    .define_method("quoted_identifier", &QuotedIdentifierAlternativeContextProxy::quotedIdentifier);

  rb_cDigitIdentifierContext = define_class_under<DigitIdentifierContextProxy, ContextProxy>(rb_mPrestoParser, "DigitIdentifierContext")
    .define_method("DIGIT_IDENTIFIER", &DigitIdentifierContextProxy::DIGIT_IDENTIFIER);

  rb_cUnquotedIdentifierContext = define_class_under<UnquotedIdentifierContextProxy, ContextProxy>(rb_mPrestoParser, "UnquotedIdentifierContext")
    .define_method("non_reserved", &UnquotedIdentifierContextProxy::nonReserved)
    .define_method("IDENTIFIER", &UnquotedIdentifierContextProxy::IDENTIFIER);

  rb_cNonReservedContext = define_class_under<NonReservedContextProxy, ContextProxy>(rb_mPrestoParser, "NonReservedContext")
    .define_method("normal_form", &NonReservedContextProxy::normalForm)
    .define_method("SHOW", &NonReservedContextProxy::SHOW)
    .define_method("TABLES", &NonReservedContextProxy::TABLES)
    .define_method("COLUMNS", &NonReservedContextProxy::COLUMNS)
    .define_method("COLUMN", &NonReservedContextProxy::COLUMN)
    .define_method("PARTITIONS", &NonReservedContextProxy::PARTITIONS)
    .define_method("FUNCTIONS", &NonReservedContextProxy::FUNCTIONS)
    .define_method("SCHEMAS", &NonReservedContextProxy::SCHEMAS)
    .define_method("CATALOGS", &NonReservedContextProxy::CATALOGS)
    .define_method("SESSION", &NonReservedContextProxy::SESSION)
    .define_method("ADD", &NonReservedContextProxy::ADD)
    .define_method("FILTER", &NonReservedContextProxy::FILTER)
    .define_method("AT", &NonReservedContextProxy::AT)
    .define_method("OVER", &NonReservedContextProxy::OVER)
    .define_method("PARTITION", &NonReservedContextProxy::PARTITION)
    .define_method("RANGE", &NonReservedContextProxy::RANGE)
    .define_method("ROWS", &NonReservedContextProxy::ROWS)
    .define_method("PRECEDING", &NonReservedContextProxy::PRECEDING)
    .define_method("FOLLOWING", &NonReservedContextProxy::FOLLOWING)
    .define_method("CURRENT", &NonReservedContextProxy::CURRENT)
    .define_method("ROW", &NonReservedContextProxy::ROW)
    .define_method("MAP", &NonReservedContextProxy::MAP)
    .define_method("ARRAY", &NonReservedContextProxy::ARRAY)
    .define_method("TINYINT", &NonReservedContextProxy::TINYINT)
    .define_method("SMALLINT", &NonReservedContextProxy::SMALLINT)
    .define_method("INTEGER", &NonReservedContextProxy::INTEGER)
    .define_method("DATE", &NonReservedContextProxy::DATE)
    .define_method("TIME", &NonReservedContextProxy::TIME)
    .define_method("TIMESTAMP", &NonReservedContextProxy::TIMESTAMP)
    .define_method("INTERVAL", &NonReservedContextProxy::INTERVAL)
    .define_method("ZONE", &NonReservedContextProxy::ZONE)
    .define_method("YEAR", &NonReservedContextProxy::YEAR)
    .define_method("MONTH", &NonReservedContextProxy::MONTH)
    .define_method("DAY", &NonReservedContextProxy::DAY)
    .define_method("HOUR", &NonReservedContextProxy::HOUR)
    .define_method("MINUTE", &NonReservedContextProxy::MINUTE)
    .define_method("SECOND", &NonReservedContextProxy::SECOND)
    .define_method("EXPLAIN", &NonReservedContextProxy::EXPLAIN)
    .define_method("ANALYZE", &NonReservedContextProxy::ANALYZE)
    .define_method("FORMAT", &NonReservedContextProxy::FORMAT)
    .define_method("TYPE", &NonReservedContextProxy::TYPE)
    .define_method("TEXT", &NonReservedContextProxy::TEXT)
    .define_method("GRAPHVIZ", &NonReservedContextProxy::GRAPHVIZ)
    .define_method("LOGICAL", &NonReservedContextProxy::LOGICAL)
    .define_method("DISTRIBUTED", &NonReservedContextProxy::DISTRIBUTED)
    .define_method("VALIDATE", &NonReservedContextProxy::VALIDATE)
    .define_method("TABLESAMPLE", &NonReservedContextProxy::TABLESAMPLE)
    .define_method("SYSTEM", &NonReservedContextProxy::SYSTEM)
    .define_method("BERNOULLI", &NonReservedContextProxy::BERNOULLI)
    .define_method("POISSONIZED", &NonReservedContextProxy::POISSONIZED)
    .define_method("USE", &NonReservedContextProxy::USE)
    .define_method("TO", &NonReservedContextProxy::TO)
    .define_method("SET", &NonReservedContextProxy::SET)
    .define_method("RESET", &NonReservedContextProxy::RESET)
    .define_method("VIEW", &NonReservedContextProxy::VIEW)
    .define_method("REPLACE", &NonReservedContextProxy::REPLACE)
    .define_method("IF", &NonReservedContextProxy::IF)
    .define_method("NULLIF", &NonReservedContextProxy::NULLIF)
    .define_method("COALESCE", &NonReservedContextProxy::COALESCE)
    .define_method("POSITION", &NonReservedContextProxy::POSITION)
    .define_method("NO", &NonReservedContextProxy::NO)
    .define_method("DATA", &NonReservedContextProxy::DATA)
    .define_method("START", &NonReservedContextProxy::START)
    .define_method("TRANSACTION", &NonReservedContextProxy::TRANSACTION)
    .define_method("COMMIT", &NonReservedContextProxy::COMMIT)
    .define_method("ROLLBACK", &NonReservedContextProxy::ROLLBACK)
    .define_method("WORK", &NonReservedContextProxy::WORK)
    .define_method("ISOLATION", &NonReservedContextProxy::ISOLATION)
    .define_method("LEVEL", &NonReservedContextProxy::LEVEL)
    .define_method("SERIALIZABLE", &NonReservedContextProxy::SERIALIZABLE)
    .define_method("REPEATABLE", &NonReservedContextProxy::REPEATABLE)
    .define_method("COMMITTED", &NonReservedContextProxy::COMMITTED)
    .define_method("UNCOMMITTED", &NonReservedContextProxy::UNCOMMITTED)
    .define_method("READ", &NonReservedContextProxy::READ)
    .define_method("WRITE", &NonReservedContextProxy::WRITE)
    .define_method("ONLY", &NonReservedContextProxy::ONLY)
    .define_method("COMMENT", &NonReservedContextProxy::COMMENT)
    .define_method("CALL", &NonReservedContextProxy::CALL)
    .define_method("GRANT", &NonReservedContextProxy::GRANT)
    .define_method("REVOKE", &NonReservedContextProxy::REVOKE)
    .define_method("PRIVILEGES", &NonReservedContextProxy::PRIVILEGES)
    .define_method("PUBLIC", &NonReservedContextProxy::PUBLIC)
    .define_method("OPTION", &NonReservedContextProxy::OPTION)
    .define_method("SUBSTRING", &NonReservedContextProxy::SUBSTRING)
    .define_method("SCHEMA", &NonReservedContextProxy::SCHEMA)
    .define_method("CASCADE", &NonReservedContextProxy::CASCADE)
    .define_method("RESTRICT", &NonReservedContextProxy::RESTRICT)
    .define_method("INPUT", &NonReservedContextProxy::INPUT)
    .define_method("OUTPUT", &NonReservedContextProxy::OUTPUT)
    .define_method("INCLUDING", &NonReservedContextProxy::INCLUDING)
    .define_method("EXCLUDING", &NonReservedContextProxy::EXCLUDING)
    .define_method("PROPERTIES", &NonReservedContextProxy::PROPERTIES)
    .define_method("ALL", &NonReservedContextProxy::ALL)
    .define_method("SOME", &NonReservedContextProxy::SOME)
    .define_method("ANY", &NonReservedContextProxy::ANY);

  rb_cDecimalLiteralContext = define_class_under<DecimalLiteralContextProxy, ContextProxy>(rb_mPrestoParser, "DecimalLiteralContext")
    .define_method("DECIMAL_VALUE", &DecimalLiteralContextProxy::DECIMAL_VALUE);

  rb_cIntegerLiteralContext = define_class_under<IntegerLiteralContextProxy, ContextProxy>(rb_mPrestoParser, "IntegerLiteralContext")
    .define_method("INTEGER_VALUE", &IntegerLiteralContextProxy::INTEGER_VALUE);
}

