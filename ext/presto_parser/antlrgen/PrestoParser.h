
// Generated from ./Presto.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  PrestoParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, SELECT = 10, FROM = 11, ADD = 12, AS = 13, ALL = 14, 
    SOME = 15, ANY = 16, DISTINCT = 17, WHERE = 18, GROUP = 19, BY = 20, 
    GROUPING = 21, SETS = 22, CUBE = 23, ROLLUP = 24, ORDER = 25, HAVING = 26, 
    LIMIT = 27, AT = 28, OR = 29, AND = 30, IN = 31, NOT = 32, NO = 33, 
    EXISTS = 34, BETWEEN = 35, LIKE = 36, IS = 37, NULLTOKEN = 38, TRUE = 39, 
    FALSE = 40, NULLS = 41, FIRST = 42, LAST = 43, ESCAPE = 44, ASC = 45, 
    DESC = 46, SUBSTRING = 47, POSITION = 48, FOR = 49, TINYINT = 50, SMALLINT = 51, 
    INTEGER = 52, DATE = 53, TIME = 54, TIMESTAMP = 55, INTERVAL = 56, YEAR = 57, 
    MONTH = 58, DAY = 59, HOUR = 60, MINUTE = 61, SECOND = 62, ZONE = 63, 
    CURRENT_DATE = 64, CURRENT_TIME = 65, CURRENT_TIMESTAMP = 66, LOCALTIME = 67, 
    LOCALTIMESTAMP = 68, EXTRACT = 69, CASE = 70, WHEN = 71, THEN = 72, 
    ELSE = 73, END = 74, JOIN = 75, CROSS = 76, OUTER = 77, INNER = 78, 
    LEFT = 79, RIGHT = 80, FULL = 81, NATURAL = 82, USING = 83, ON = 84, 
    FILTER = 85, OVER = 86, PARTITION = 87, RANGE = 88, ROWS = 89, UNBOUNDED = 90, 
    PRECEDING = 91, FOLLOWING = 92, CURRENT = 93, ROW = 94, WITH = 95, RECURSIVE = 96, 
    VALUES = 97, CREATE = 98, SCHEMA = 99, TABLE = 100, COMMENT = 101, VIEW = 102, 
    REPLACE = 103, INSERT = 104, DELETE = 105, INTO = 106, CONSTRAINT = 107, 
    DESCRIBE = 108, GRANT = 109, REVOKE = 110, PRIVILEGES = 111, PUBLIC = 112, 
    OPTION = 113, EXPLAIN = 114, ANALYZE = 115, FORMAT = 116, TYPE = 117, 
    TEXT = 118, GRAPHVIZ = 119, LOGICAL = 120, DISTRIBUTED = 121, VALIDATE = 122, 
    CAST = 123, TRY_CAST = 124, SHOW = 125, TABLES = 126, SCHEMAS = 127, 
    CATALOGS = 128, COLUMNS = 129, COLUMN = 130, USE = 131, PARTITIONS = 132, 
    FUNCTIONS = 133, DROP = 134, UNION = 135, EXCEPT = 136, INTERSECT = 137, 
    TO = 138, SYSTEM = 139, BERNOULLI = 140, POISSONIZED = 141, TABLESAMPLE = 142, 
    ALTER = 143, RENAME = 144, UNNEST = 145, ORDINALITY = 146, ARRAY = 147, 
    MAP = 148, SET = 149, RESET = 150, SESSION = 151, DATA = 152, START = 153, 
    TRANSACTION = 154, COMMIT = 155, ROLLBACK = 156, WORK = 157, ISOLATION = 158, 
    LEVEL = 159, SERIALIZABLE = 160, REPEATABLE = 161, COMMITTED = 162, 
    UNCOMMITTED = 163, READ = 164, WRITE = 165, ONLY = 166, CALL = 167, 
    PREPARE = 168, DEALLOCATE = 169, EXECUTE = 170, INPUT = 171, OUTPUT = 172, 
    CASCADE = 173, RESTRICT = 174, INCLUDING = 175, EXCLUDING = 176, PROPERTIES = 177, 
    NORMALIZE = 178, NFD = 179, NFC = 180, NFKD = 181, NFKC = 182, IF = 183, 
    NULLIF = 184, COALESCE = 185, EQ = 186, NEQ = 187, LT = 188, LTE = 189, 
    GT = 190, GTE = 191, PLUS = 192, MINUS = 193, ASTERISK = 194, SLASH = 195, 
    PERCENT = 196, CONCAT = 197, STRING = 198, BINARY_LITERAL = 199, INTEGER_VALUE = 200, 
    DECIMAL_VALUE = 201, IDENTIFIER = 202, DIGIT_IDENTIFIER = 203, QUOTED_IDENTIFIER = 204, 
    BACKQUOTED_IDENTIFIER = 205, TIME_WITH_TIME_ZONE = 206, TIMESTAMP_WITH_TIME_ZONE = 207, 
    DOUBLE_PRECISION = 208, SIMPLE_COMMENT = 209, BRACKETED_COMMENT = 210, 
    WS = 211, UNRECOGNIZED = 212, DELIMITER = 213
  };

  enum {
    RuleSingleQuery = 0, RuleQuery = 1, RuleWith = 2, RuleTableElement = 3, 
    RuleColumnDefinition = 4, RuleLikeClause = 5, RuleTableProperties = 6, 
    RuleTableProperty = 7, RuleQueryNoWith = 8, RuleQueryTerm = 9, RuleQueryPrimary = 10, 
    RuleSortItem = 11, RuleQuerySpecification = 12, RuleGroupBy = 13, RuleGroupingElement = 14, 
    RuleGroupingExpressions = 15, RuleGroupingSet = 16, RuleNamedQuery = 17, 
    RuleSetQuantifier = 18, RuleSelectItem = 19, RuleRelation = 20, RuleJoinType = 21, 
    RuleJoinCriteria = 22, RuleSampledRelation = 23, RuleSampleType = 24, 
    RuleAliasedRelation = 25, RuleColumnAliases = 26, RuleRelationPrimary = 27, 
    RuleExpression = 28, RuleBooleanExpression = 29, RulePredicated = 30, 
    RulePredicate = 31, RuleValueExpression = 32, RulePrimaryExpression = 33, 
    RuleTimeZoneSpecifier = 34, RuleComparisonOperator = 35, RuleComparisonQuantifier = 36, 
    RuleBooleanValue = 37, RuleInterval = 38, RuleIntervalField = 39, RuleType = 40, 
    RuleTypeParameter = 41, RuleBaseType = 42, RuleWhenClause = 43, RuleFilter = 44, 
    RuleOver = 45, RuleWindowFrame = 46, RuleFrameBound = 47, RuleExplainOption = 48, 
    RuleTransactionMode = 49, RuleLevelOfIsolation = 50, RuleCallArgument = 51, 
    RulePrivilege = 52, RuleQualifiedName = 53, RuleIdentifier = 54, RuleQuotedIdentifier = 55, 
    RuleNumber = 56, RuleNonReserved = 57, RuleNormalForm = 58
  };

  explicit PrestoParser(antlr4::TokenStream *input);

  PrestoParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PrestoParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class SingleQueryContext;
  class QueryContext;
  class WithContext;
  class TableElementContext;
  class ColumnDefinitionContext;
  class LikeClauseContext;
  class TablePropertiesContext;
  class TablePropertyContext;
  class QueryNoWithContext;
  class QueryTermContext;
  class QueryPrimaryContext;
  class SortItemContext;
  class QuerySpecificationContext;
  class GroupByContext;
  class GroupingElementContext;
  class GroupingExpressionsContext;
  class GroupingSetContext;
  class NamedQueryContext;
  class SetQuantifierContext;
  class SelectItemContext;
  class RelationContext;
  class JoinTypeContext;
  class JoinCriteriaContext;
  class SampledRelationContext;
  class SampleTypeContext;
  class AliasedRelationContext;
  class ColumnAliasesContext;
  class RelationPrimaryContext;
  class ExpressionContext;
  class BooleanExpressionContext;
  class PredicatedContext;
  class PredicateContext;
  class ValueExpressionContext;
  class PrimaryExpressionContext;
  class TimeZoneSpecifierContext;
  class ComparisonOperatorContext;
  class ComparisonQuantifierContext;
  class BooleanValueContext;
  class IntervalContext;
  class IntervalFieldContext;
  class TypeContext;
  class TypeParameterContext;
  class BaseTypeContext;
  class WhenClauseContext;
  class FilterContext;
  class OverContext;
  class WindowFrameContext;
  class FrameBoundContext;
  class ExplainOptionContext;
  class TransactionModeContext;
  class LevelOfIsolationContext;
  class CallArgumentContext;
  class PrivilegeContext;
  class QualifiedNameContext;
  class IdentifierContext;
  class QuotedIdentifierContext;
  class NumberContext;
  class NonReservedContext;
  class NormalFormContext; 

  class  SingleQueryContext : public antlr4::ParserRuleContext {
  public:
    SingleQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryContext *query();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleQueryContext* singleQuery();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryNoWithContext *queryNoWith();
    WithContext *with();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  WithContext : public antlr4::ParserRuleContext {
  public:
    WithContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    std::vector<NamedQueryContext *> namedQuery();
    NamedQueryContext* namedQuery(size_t i);
    antlr4::tree::TerminalNode *RECURSIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithContext* with();

  class  TableElementContext : public antlr4::ParserRuleContext {
  public:
    TableElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnDefinitionContext *columnDefinition();
    LikeClauseContext *likeClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableElementContext* tableElement();

  class  ColumnDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ColumnDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    TypeContext *type();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnDefinitionContext* columnDefinition();

  class  LikeClauseContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *optionType = nullptr;
    LikeClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIKE();
    QualifiedNameContext *qualifiedName();
    antlr4::tree::TerminalNode *PROPERTIES();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *EXCLUDING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LikeClauseContext* likeClause();

  class  TablePropertiesContext : public antlr4::ParserRuleContext {
  public:
    TablePropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TablePropertyContext *> tableProperty();
    TablePropertyContext* tableProperty(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertiesContext* tableProperties();

  class  TablePropertyContext : public antlr4::ParserRuleContext {
  public:
    TablePropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TablePropertyContext* tableProperty();

  class  QueryNoWithContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *limit = nullptr;
    QueryNoWithContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryTermContext *queryTerm();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    std::vector<SortItemContext *> sortItem();
    SortItemContext* sortItem(size_t i);
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryNoWithContext* queryNoWith();

  class  QueryTermContext : public antlr4::ParserRuleContext {
  public:
    QueryTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    QueryTermContext() = default;
    void copyFrom(QueryTermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  QueryTermDefaultContext : public QueryTermContext {
  public:
    QueryTermDefaultContext(QueryTermContext *ctx);

    QueryPrimaryContext *queryPrimary();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetOperationContext : public QueryTermContext {
  public:
    SetOperationContext(QueryTermContext *ctx);

    PrestoParser::QueryTermContext *left = nullptr;
    antlr4::Token *operator_ = nullptr;
    PrestoParser::QueryTermContext *right = nullptr;
    std::vector<QueryTermContext *> queryTerm();
    QueryTermContext* queryTerm(size_t i);
    antlr4::tree::TerminalNode *INTERSECT();
    SetQuantifierContext *setQuantifier();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *EXCEPT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  QueryTermContext* queryTerm();
  QueryTermContext* queryTerm(int precedence);
  class  QueryPrimaryContext : public antlr4::ParserRuleContext {
  public:
    QueryPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    QueryPrimaryContext() = default;
    void copyFrom(QueryPrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubqueryContext : public QueryPrimaryContext {
  public:
    SubqueryContext(QueryPrimaryContext *ctx);

    QueryNoWithContext *queryNoWith();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QueryPrimaryDefaultContext : public QueryPrimaryContext {
  public:
    QueryPrimaryDefaultContext(QueryPrimaryContext *ctx);

    QuerySpecificationContext *querySpecification();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableContext : public QueryPrimaryContext {
  public:
    TableContext(QueryPrimaryContext *ctx);

    antlr4::tree::TerminalNode *TABLE();
    QualifiedNameContext *qualifiedName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InlineTableContext : public QueryPrimaryContext {
  public:
    InlineTableContext(QueryPrimaryContext *ctx);

    antlr4::tree::TerminalNode *VALUES();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  QueryPrimaryContext* queryPrimary();

  class  SortItemContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *ordering = nullptr;
    antlr4::Token *nullOrdering = nullptr;
    SortItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *ASC();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SortItemContext* sortItem();

  class  QuerySpecificationContext : public antlr4::ParserRuleContext {
  public:
    PrestoParser::BooleanExpressionContext *where = nullptr;
    PrestoParser::BooleanExpressionContext *having = nullptr;
    QuerySpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    std::vector<SelectItemContext *> selectItem();
    SelectItemContext* selectItem(size_t i);
    SetQuantifierContext *setQuantifier();
    antlr4::tree::TerminalNode *FROM();
    std::vector<RelationContext *> relation();
    RelationContext* relation(size_t i);
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    GroupByContext *groupBy();
    antlr4::tree::TerminalNode *HAVING();
    std::vector<BooleanExpressionContext *> booleanExpression();
    BooleanExpressionContext* booleanExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuerySpecificationContext* querySpecification();

  class  GroupByContext : public antlr4::ParserRuleContext {
  public:
    GroupByContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GroupingElementContext *> groupingElement();
    GroupingElementContext* groupingElement(size_t i);
    SetQuantifierContext *setQuantifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByContext* groupBy();

  class  GroupingElementContext : public antlr4::ParserRuleContext {
  public:
    GroupingElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    GroupingElementContext() = default;
    void copyFrom(GroupingElementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MultipleGroupingSetsContext : public GroupingElementContext {
  public:
    MultipleGroupingSetsContext(GroupingElementContext *ctx);

    antlr4::tree::TerminalNode *GROUPING();
    antlr4::tree::TerminalNode *SETS();
    std::vector<GroupingSetContext *> groupingSet();
    GroupingSetContext* groupingSet(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SingleGroupingSetContext : public GroupingElementContext {
  public:
    SingleGroupingSetContext(GroupingElementContext *ctx);

    GroupingExpressionsContext *groupingExpressions();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CubeContext : public GroupingElementContext {
  public:
    CubeContext(GroupingElementContext *ctx);

    antlr4::tree::TerminalNode *CUBE();
    std::vector<QualifiedNameContext *> qualifiedName();
    QualifiedNameContext* qualifiedName(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RollupContext : public GroupingElementContext {
  public:
    RollupContext(GroupingElementContext *ctx);

    antlr4::tree::TerminalNode *ROLLUP();
    std::vector<QualifiedNameContext *> qualifiedName();
    QualifiedNameContext* qualifiedName(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  GroupingElementContext* groupingElement();

  class  GroupingExpressionsContext : public antlr4::ParserRuleContext {
  public:
    GroupingExpressionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingExpressionsContext* groupingExpressions();

  class  GroupingSetContext : public antlr4::ParserRuleContext {
  public:
    GroupingSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QualifiedNameContext *> qualifiedName();
    QualifiedNameContext* qualifiedName(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupingSetContext* groupingSet();

  class  NamedQueryContext : public antlr4::ParserRuleContext {
  public:
    PrestoParser::IdentifierContext *name = nullptr;
    NamedQueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AS();
    QueryContext *query();
    IdentifierContext *identifier();
    ColumnAliasesContext *columnAliases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamedQueryContext* namedQuery();

  class  SetQuantifierContext : public antlr4::ParserRuleContext {
  public:
    SetQuantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetQuantifierContext* setQuantifier();

  class  SelectItemContext : public antlr4::ParserRuleContext {
  public:
    SelectItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SelectItemContext() = default;
    void copyFrom(SelectItemContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SelectAllContext : public SelectItemContext {
  public:
    SelectAllContext(SelectItemContext *ctx);

    QualifiedNameContext *qualifiedName();
    antlr4::tree::TerminalNode *ASTERISK();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SelectSingleContext : public SelectItemContext {
  public:
    SelectSingleContext(SelectItemContext *ctx);

    ExpressionContext *expression();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SelectItemContext* selectItem();

  class  RelationContext : public antlr4::ParserRuleContext {
  public:
    RelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RelationContext() = default;
    void copyFrom(RelationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RelationDefaultContext : public RelationContext {
  public:
    RelationDefaultContext(RelationContext *ctx);

    SampledRelationContext *sampledRelation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JoinRelationContext : public RelationContext {
  public:
    JoinRelationContext(RelationContext *ctx);

    PrestoParser::RelationContext *left = nullptr;
    PrestoParser::SampledRelationContext *right = nullptr;
    PrestoParser::RelationContext *rightRelation = nullptr;
    std::vector<RelationContext *> relation();
    RelationContext* relation(size_t i);
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *JOIN();
    JoinTypeContext *joinType();
    JoinCriteriaContext *joinCriteria();
    antlr4::tree::TerminalNode *NATURAL();
    SampledRelationContext *sampledRelation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RelationContext* relation();
  RelationContext* relation(int precedence);
  class  JoinTypeContext : public antlr4::ParserRuleContext {
  public:
    JoinTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *FULL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinTypeContext* joinType();

  class  JoinCriteriaContext : public antlr4::ParserRuleContext {
  public:
    JoinCriteriaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    BooleanExpressionContext *booleanExpression();
    antlr4::tree::TerminalNode *USING();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinCriteriaContext* joinCriteria();

  class  SampledRelationContext : public antlr4::ParserRuleContext {
  public:
    PrestoParser::ExpressionContext *percentage = nullptr;
    SampledRelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AliasedRelationContext *aliasedRelation();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    SampleTypeContext *sampleType();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SampledRelationContext* sampledRelation();

  class  SampleTypeContext : public antlr4::ParserRuleContext {
  public:
    SampleTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *POISSONIZED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SampleTypeContext* sampleType();

  class  AliasedRelationContext : public antlr4::ParserRuleContext {
  public:
    AliasedRelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationPrimaryContext *relationPrimary();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS();
    ColumnAliasesContext *columnAliases();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasedRelationContext* aliasedRelation();

  class  ColumnAliasesContext : public antlr4::ParserRuleContext {
  public:
    ColumnAliasesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnAliasesContext* columnAliases();

  class  RelationPrimaryContext : public antlr4::ParserRuleContext {
  public:
    RelationPrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RelationPrimaryContext() = default;
    void copyFrom(RelationPrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SubqueryRelationContext : public RelationPrimaryContext {
  public:
    SubqueryRelationContext(RelationPrimaryContext *ctx);

    QueryContext *query();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedRelationContext : public RelationPrimaryContext {
  public:
    ParenthesizedRelationContext(RelationPrimaryContext *ctx);

    RelationContext *relation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnnestContext : public RelationPrimaryContext {
  public:
    UnnestContext(RelationPrimaryContext *ctx);

    antlr4::tree::TerminalNode *UNNEST();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *ORDINALITY();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableNameContext : public RelationPrimaryContext {
  public:
    TableNameContext(RelationPrimaryContext *ctx);

    QualifiedNameContext *qualifiedName();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RelationPrimaryContext* relationPrimary();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanExpressionContext *booleanExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  BooleanExpressionContext : public antlr4::ParserRuleContext {
  public:
    BooleanExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BooleanExpressionContext() = default;
    void copyFrom(BooleanExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LogicalNotContext : public BooleanExpressionContext {
  public:
    LogicalNotContext(BooleanExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    BooleanExpressionContext *booleanExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanDefaultContext : public BooleanExpressionContext {
  public:
    BooleanDefaultContext(BooleanExpressionContext *ctx);

    PredicatedContext *predicated();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalBinaryContext : public BooleanExpressionContext {
  public:
    LogicalBinaryContext(BooleanExpressionContext *ctx);

    PrestoParser::BooleanExpressionContext *left = nullptr;
    antlr4::Token *operator_ = nullptr;
    PrestoParser::BooleanExpressionContext *right = nullptr;
    std::vector<BooleanExpressionContext *> booleanExpression();
    BooleanExpressionContext* booleanExpression(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BooleanExpressionContext* booleanExpression();
  BooleanExpressionContext* booleanExpression(int precedence);
  class  PredicatedContext : public antlr4::ParserRuleContext {
  public:
    PredicatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueExpressionContext *valueExpression();
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicatedContext* predicated();

  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PredicateContext() = default;
    void copyFrom(PredicateContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ComparisonContext : public PredicateContext {
  public:
    ComparisonContext(PredicateContext *ctx);

    PrestoParser::ValueExpressionContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    ValueExpressionContext *valueExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LikeContext : public PredicateContext {
  public:
    LikeContext(PredicateContext *ctx);

    PrestoParser::ValueExpressionContext *pattern = nullptr;
    PrestoParser::ValueExpressionContext *escape = nullptr;
    antlr4::tree::TerminalNode *LIKE();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *ESCAPE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InSubqueryContext : public PredicateContext {
  public:
    InSubqueryContext(PredicateContext *ctx);

    antlr4::tree::TerminalNode *IN();
    QueryContext *query();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DistinctFromContext : public PredicateContext {
  public:
    DistinctFromContext(PredicateContext *ctx);

    PrestoParser::ValueExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *FROM();
    ValueExpressionContext *valueExpression();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InListContext : public PredicateContext {
  public:
    InListContext(PredicateContext *ctx);

    antlr4::tree::TerminalNode *IN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullPredicateContext : public PredicateContext {
  public:
    NullPredicateContext(PredicateContext *ctx);

    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULLTOKEN();
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BetweenContext : public PredicateContext {
  public:
    BetweenContext(PredicateContext *ctx);

    PrestoParser::ValueExpressionContext *lower = nullptr;
    PrestoParser::ValueExpressionContext *upper = nullptr;
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *NOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QuantifiedComparisonContext : public PredicateContext {
  public:
    QuantifiedComparisonContext(PredicateContext *ctx);

    ComparisonOperatorContext *comparisonOperator();
    ComparisonQuantifierContext *comparisonQuantifier();
    QueryContext *query();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PredicateContext* predicate();

  class  ValueExpressionContext : public antlr4::ParserRuleContext {
  public:
    ValueExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueExpressionContext() = default;
    void copyFrom(ValueExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValueExpressionDefaultContext : public ValueExpressionContext {
  public:
    ValueExpressionDefaultContext(ValueExpressionContext *ctx);

    PrimaryExpressionContext *primaryExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConcatenationContext : public ValueExpressionContext {
  public:
    ConcatenationContext(ValueExpressionContext *ctx);

    PrestoParser::ValueExpressionContext *left = nullptr;
    PrestoParser::ValueExpressionContext *right = nullptr;
    antlr4::tree::TerminalNode *CONCAT();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticBinaryContext : public ValueExpressionContext {
  public:
    ArithmeticBinaryContext(ValueExpressionContext *ctx);

    PrestoParser::ValueExpressionContext *left = nullptr;
    antlr4::Token *operator_ = nullptr;
    PrestoParser::ValueExpressionContext *right = nullptr;
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticUnaryContext : public ValueExpressionContext {
  public:
    ArithmeticUnaryContext(ValueExpressionContext *ctx);

    antlr4::Token *operator_ = nullptr;
    ValueExpressionContext *valueExpression();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AtTimeZoneContext : public ValueExpressionContext {
  public:
    AtTimeZoneContext(ValueExpressionContext *ctx);

    ValueExpressionContext *valueExpression();
    antlr4::tree::TerminalNode *AT();
    TimeZoneSpecifierContext *timeZoneSpecifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueExpressionContext* valueExpression();
  ValueExpressionContext* valueExpression(int precedence);
  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryExpressionContext() = default;
    void copyFrom(PrimaryExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DereferenceContext : public PrimaryExpressionContext {
  public:
    DereferenceContext(PrimaryExpressionContext *ctx);

    PrestoParser::PrimaryExpressionContext *base = nullptr;
    PrestoParser::IdentifierContext *fieldName = nullptr;
    PrimaryExpressionContext *primaryExpression();
    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeConstructorContext : public PrimaryExpressionContext {
  public:
    TypeConstructorContext(PrimaryExpressionContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *DOUBLE_PRECISION();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SpecialDateTimeFunctionContext : public PrimaryExpressionContext {
  public:
    SpecialDateTimeFunctionContext(PrimaryExpressionContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::Token *precision = nullptr;
    antlr4::tree::TerminalNode *CURRENT_DATE();
    antlr4::tree::TerminalNode *CURRENT_TIME();
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    antlr4::tree::TerminalNode *CURRENT_TIMESTAMP();
    antlr4::tree::TerminalNode *LOCALTIME();
    antlr4::tree::TerminalNode *LOCALTIMESTAMP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubstringContext : public PrimaryExpressionContext {
  public:
    SubstringContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *SUBSTRING();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *FOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CastContext : public PrimaryExpressionContext {
  public:
    CastContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *CAST();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *AS();
    TypeContext *type();
    antlr4::tree::TerminalNode *TRY_CAST();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LambdaContext : public PrimaryExpressionContext {
  public:
    LambdaContext(PrimaryExpressionContext *ctx);

    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedExpressionContext : public PrimaryExpressionContext {
  public:
    ParenthesizedExpressionContext(PrimaryExpressionContext *ctx);

    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParameterContext : public PrimaryExpressionContext {
  public:
    ParameterContext(PrimaryExpressionContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NormalizeContext : public PrimaryExpressionContext {
  public:
    NormalizeContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *NORMALIZE();
    ValueExpressionContext *valueExpression();
    NormalFormContext *normalForm();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntervalLiteralContext : public PrimaryExpressionContext {
  public:
    IntervalLiteralContext(PrimaryExpressionContext *ctx);

    IntervalContext *interval();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumericLiteralContext : public PrimaryExpressionContext {
  public:
    NumericLiteralContext(PrimaryExpressionContext *ctx);

    NumberContext *number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanLiteralContext : public PrimaryExpressionContext {
  public:
    BooleanLiteralContext(PrimaryExpressionContext *ctx);

    BooleanValueContext *booleanValue();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleCaseContext : public PrimaryExpressionContext {
  public:
    SimpleCaseContext(PrimaryExpressionContext *ctx);

    PrestoParser::ExpressionContext *elseExpression = nullptr;
    antlr4::tree::TerminalNode *CASE();
    ValueExpressionContext *valueExpression();
    antlr4::tree::TerminalNode *END();
    std::vector<WhenClauseContext *> whenClause();
    WhenClauseContext* whenClause(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnReferenceContext : public PrimaryExpressionContext {
  public:
    ColumnReferenceContext(PrimaryExpressionContext *ctx);

    IdentifierContext *identifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullLiteralContext : public PrimaryExpressionContext {
  public:
    NullLiteralContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *NULLTOKEN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RowConstructorContext : public PrimaryExpressionContext {
  public:
    RowConstructorContext(PrimaryExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ROW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubscriptContext : public PrimaryExpressionContext {
  public:
    SubscriptContext(PrimaryExpressionContext *ctx);

    PrestoParser::PrimaryExpressionContext *value = nullptr;
    PrestoParser::ValueExpressionContext *index = nullptr;
    PrimaryExpressionContext *primaryExpression();
    ValueExpressionContext *valueExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubqueryExpressionContext : public PrimaryExpressionContext {
  public:
    SubqueryExpressionContext(PrimaryExpressionContext *ctx);

    QueryContext *query();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryLiteralContext : public PrimaryExpressionContext {
  public:
    BinaryLiteralContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *BINARY_LITERAL();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExtractContext : public PrimaryExpressionContext {
  public:
    ExtractContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *EXTRACT();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FROM();
    ValueExpressionContext *valueExpression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  StringLiteralContext : public PrimaryExpressionContext {
  public:
    StringLiteralContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayConstructorContext : public PrimaryExpressionContext {
  public:
    ArrayConstructorContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *ARRAY();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallContext : public PrimaryExpressionContext {
  public:
    FunctionCallContext(PrimaryExpressionContext *ctx);

    QualifiedNameContext *qualifiedName();
    antlr4::tree::TerminalNode *ASTERISK();
    FilterContext *filter();
    OverContext *over();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    SetQuantifierContext *setQuantifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExistsContext : public PrimaryExpressionContext {
  public:
    ExistsContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *EXISTS();
    QueryContext *query();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PositionContext : public PrimaryExpressionContext {
  public:
    PositionContext(PrimaryExpressionContext *ctx);

    antlr4::tree::TerminalNode *POSITION();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *IN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SearchedCaseContext : public PrimaryExpressionContext {
  public:
    SearchedCaseContext(PrimaryExpressionContext *ctx);

    PrestoParser::ExpressionContext *elseExpression = nullptr;
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<WhenClauseContext *> whenClause();
    WhenClauseContext* whenClause(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryExpressionContext* primaryExpression();
  PrimaryExpressionContext* primaryExpression(int precedence);
  class  TimeZoneSpecifierContext : public antlr4::ParserRuleContext {
  public:
    TimeZoneSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TimeZoneSpecifierContext() = default;
    void copyFrom(TimeZoneSpecifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TimeZoneIntervalContext : public TimeZoneSpecifierContext {
  public:
    TimeZoneIntervalContext(TimeZoneSpecifierContext *ctx);

    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    IntervalContext *interval();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TimeZoneStringContext : public TimeZoneSpecifierContext {
  public:
    TimeZoneStringContext(TimeZoneSpecifierContext *ctx);

    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *ZONE();
    antlr4::tree::TerminalNode *STRING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TimeZoneSpecifierContext* timeZoneSpecifier();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  ComparisonQuantifierContext : public antlr4::ParserRuleContext {
  public:
    ComparisonQuantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *ANY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonQuantifierContext* comparisonQuantifier();

  class  BooleanValueContext : public antlr4::ParserRuleContext {
  public:
    BooleanValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanValueContext* booleanValue();

  class  IntervalContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *sign = nullptr;
    PrestoParser::IntervalFieldContext *from = nullptr;
    PrestoParser::IntervalFieldContext *to = nullptr;
    IntervalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *STRING();
    std::vector<IntervalFieldContext *> intervalField();
    IntervalFieldContext* intervalField(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalContext* interval();

  class  IntervalFieldContext : public antlr4::ParserRuleContext {
  public:
    IntervalFieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *SECOND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntervalFieldContext* intervalField();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *LT();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *ROW();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    BaseTypeContext *baseType();
    std::vector<TypeParameterContext *> typeParameter();
    TypeParameterContext* typeParameter(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();
  TypeContext* type(int precedence);
  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER_VALUE();
    TypeContext *type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterContext* typeParameter();

  class  BaseTypeContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIME_WITH_TIME_ZONE();
    antlr4::tree::TerminalNode *TIMESTAMP_WITH_TIME_ZONE();
    antlr4::tree::TerminalNode *DOUBLE_PRECISION();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseTypeContext* baseType();

  class  WhenClauseContext : public antlr4::ParserRuleContext {
  public:
    PrestoParser::ExpressionContext *condition = nullptr;
    PrestoParser::ExpressionContext *result = nullptr;
    WhenClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenClauseContext* whenClause();

  class  FilterContext : public antlr4::ParserRuleContext {
  public:
    FilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *WHERE();
    BooleanExpressionContext *booleanExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterContext* filter();

  class  OverContext : public antlr4::ParserRuleContext {
  public:
    PrestoParser::ExpressionContext *expressionContext = nullptr;
    std::vector<ExpressionContext *> partition;
    OverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *PARTITION();
    std::vector<antlr4::tree::TerminalNode *> BY();
    antlr4::tree::TerminalNode* BY(size_t i);
    antlr4::tree::TerminalNode *ORDER();
    std::vector<SortItemContext *> sortItem();
    SortItemContext* sortItem(size_t i);
    WindowFrameContext *windowFrame();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OverContext* over();

  class  WindowFrameContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *frameType = nullptr;
    PrestoParser::FrameBoundContext *start = nullptr;
    PrestoParser::FrameBoundContext *end = nullptr;
    WindowFrameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANGE();
    std::vector<FrameBoundContext *> frameBound();
    FrameBoundContext* frameBound(size_t i);
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WindowFrameContext* windowFrame();

  class  FrameBoundContext : public antlr4::ParserRuleContext {
  public:
    FrameBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FrameBoundContext() = default;
    void copyFrom(FrameBoundContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BoundedFrameContext : public FrameBoundContext {
  public:
    BoundedFrameContext(FrameBoundContext *ctx);

    antlr4::Token *boundType = nullptr;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *FOLLOWING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnboundedFrameContext : public FrameBoundContext {
  public:
    UnboundedFrameContext(FrameBoundContext *ctx);

    antlr4::Token *boundType = nullptr;
    antlr4::tree::TerminalNode *UNBOUNDED();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *FOLLOWING();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CurrentRowBoundContext : public FrameBoundContext {
  public:
    CurrentRowBoundContext(FrameBoundContext *ctx);

    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *ROW();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FrameBoundContext* frameBound();

  class  ExplainOptionContext : public antlr4::ParserRuleContext {
  public:
    ExplainOptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExplainOptionContext() = default;
    void copyFrom(ExplainOptionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExplainFormatContext : public ExplainOptionContext {
  public:
    ExplainFormatContext(ExplainOptionContext *ctx);

    antlr4::Token *value = nullptr;
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *GRAPHVIZ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExplainTypeContext : public ExplainOptionContext {
  public:
    ExplainTypeContext(ExplainOptionContext *ctx);

    antlr4::Token *value = nullptr;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *VALIDATE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExplainOptionContext* explainOption();

  class  TransactionModeContext : public antlr4::ParserRuleContext {
  public:
    TransactionModeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TransactionModeContext() = default;
    void copyFrom(TransactionModeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TransactionAccessModeContext : public TransactionModeContext {
  public:
    TransactionAccessModeContext(TransactionModeContext *ctx);

    antlr4::Token *accessMode = nullptr;
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *WRITE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IsolationLevelContext : public TransactionModeContext {
  public:
    IsolationLevelContext(TransactionModeContext *ctx);

    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    LevelOfIsolationContext *levelOfIsolation();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TransactionModeContext* transactionMode();

  class  LevelOfIsolationContext : public antlr4::ParserRuleContext {
  public:
    LevelOfIsolationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LevelOfIsolationContext() = default;
    void copyFrom(LevelOfIsolationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ReadUncommittedContext : public LevelOfIsolationContext {
  public:
    ReadUncommittedContext(LevelOfIsolationContext *ctx);

    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SerializableContext : public LevelOfIsolationContext {
  public:
    SerializableContext(LevelOfIsolationContext *ctx);

    antlr4::tree::TerminalNode *SERIALIZABLE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReadCommittedContext : public LevelOfIsolationContext {
  public:
    ReadCommittedContext(LevelOfIsolationContext *ctx);

    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *COMMITTED();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RepeatableReadContext : public LevelOfIsolationContext {
  public:
    RepeatableReadContext(LevelOfIsolationContext *ctx);

    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *READ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LevelOfIsolationContext* levelOfIsolation();

  class  CallArgumentContext : public antlr4::ParserRuleContext {
  public:
    CallArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CallArgumentContext() = default;
    void copyFrom(CallArgumentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PositionalArgumentContext : public CallArgumentContext {
  public:
    PositionalArgumentContext(CallArgumentContext *ctx);

    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NamedArgumentContext : public CallArgumentContext {
  public:
    NamedArgumentContext(CallArgumentContext *ctx);

    IdentifierContext *identifier();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CallArgumentContext* callArgument();

  class  PrivilegeContext : public antlr4::ParserRuleContext {
  public:
    PrivilegeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *INSERT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrivilegeContext* privilege();

  class  QualifiedNameContext : public antlr4::ParserRuleContext {
  public:
    QualifiedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QualifiedNameContext* qualifiedName();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IdentifierContext() = default;
    void copyFrom(IdentifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BackQuotedIdentifierContext : public IdentifierContext {
  public:
    BackQuotedIdentifierContext(IdentifierContext *ctx);

    antlr4::tree::TerminalNode *BACKQUOTED_IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QuotedIdentifierAlternativeContext : public IdentifierContext {
  public:
    QuotedIdentifierAlternativeContext(IdentifierContext *ctx);

    QuotedIdentifierContext *quotedIdentifier();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DigitIdentifierContext : public IdentifierContext {
  public:
    DigitIdentifierContext(IdentifierContext *ctx);

    antlr4::tree::TerminalNode *DIGIT_IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnquotedIdentifierContext : public IdentifierContext {
  public:
    UnquotedIdentifierContext(IdentifierContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    NonReservedContext *nonReserved();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IdentifierContext* identifier();

  class  QuotedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    QuotedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUOTED_IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuotedIdentifierContext* quotedIdentifier();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DecimalLiteralContext : public NumberContext {
  public:
    DecimalLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *DECIMAL_VALUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntegerLiteralContext : public NumberContext {
  public:
    IntegerLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER_VALUE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  NonReservedContext : public antlr4::ParserRuleContext {
  public:
    NonReservedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *COLUMNS();
    antlr4::tree::TerminalNode *COLUMN();
    antlr4::tree::TerminalNode *PARTITIONS();
    antlr4::tree::TerminalNode *FUNCTIONS();
    antlr4::tree::TerminalNode *SCHEMAS();
    antlr4::tree::TerminalNode *CATALOGS();
    antlr4::tree::TerminalNode *SESSION();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *FILTER();
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *OVER();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *RANGE();
    antlr4::tree::TerminalNode *ROWS();
    antlr4::tree::TerminalNode *PRECEDING();
    antlr4::tree::TerminalNode *FOLLOWING();
    antlr4::tree::TerminalNode *CURRENT();
    antlr4::tree::TerminalNode *ROW();
    antlr4::tree::TerminalNode *MAP();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *TINYINT();
    antlr4::tree::TerminalNode *SMALLINT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *DATE();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *ZONE();
    antlr4::tree::TerminalNode *YEAR();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *EXPLAIN();
    antlr4::tree::TerminalNode *ANALYZE();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *TEXT();
    antlr4::tree::TerminalNode *GRAPHVIZ();
    antlr4::tree::TerminalNode *LOGICAL();
    antlr4::tree::TerminalNode *DISTRIBUTED();
    antlr4::tree::TerminalNode *VALIDATE();
    antlr4::tree::TerminalNode *TABLESAMPLE();
    antlr4::tree::TerminalNode *SYSTEM();
    antlr4::tree::TerminalNode *BERNOULLI();
    antlr4::tree::TerminalNode *POISSONIZED();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *RESET();
    antlr4::tree::TerminalNode *VIEW();
    antlr4::tree::TerminalNode *REPLACE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NULLIF();
    antlr4::tree::TerminalNode *COALESCE();
    NormalFormContext *normalForm();
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *NO();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *TRANSACTION();
    antlr4::tree::TerminalNode *COMMIT();
    antlr4::tree::TerminalNode *ROLLBACK();
    antlr4::tree::TerminalNode *WORK();
    antlr4::tree::TerminalNode *ISOLATION();
    antlr4::tree::TerminalNode *LEVEL();
    antlr4::tree::TerminalNode *SERIALIZABLE();
    antlr4::tree::TerminalNode *REPEATABLE();
    antlr4::tree::TerminalNode *COMMITTED();
    antlr4::tree::TerminalNode *UNCOMMITTED();
    antlr4::tree::TerminalNode *READ();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *ONLY();
    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *GRANT();
    antlr4::tree::TerminalNode *REVOKE();
    antlr4::tree::TerminalNode *PRIVILEGES();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *OPTION();
    antlr4::tree::TerminalNode *SUBSTRING();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *CASCADE();
    antlr4::tree::TerminalNode *RESTRICT();
    antlr4::tree::TerminalNode *INPUT();
    antlr4::tree::TerminalNode *OUTPUT();
    antlr4::tree::TerminalNode *INCLUDING();
    antlr4::tree::TerminalNode *EXCLUDING();
    antlr4::tree::TerminalNode *PROPERTIES();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *SOME();
    antlr4::tree::TerminalNode *ANY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NonReservedContext* nonReserved();

  class  NormalFormContext : public antlr4::ParserRuleContext {
  public:
    NormalFormContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NFD();
    antlr4::tree::TerminalNode *NFC();
    antlr4::tree::TerminalNode *NFKD();
    antlr4::tree::TerminalNode *NFKC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NormalFormContext* normalForm();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool queryTermSempred(QueryTermContext *_localctx, size_t predicateIndex);
  bool relationSempred(RelationContext *_localctx, size_t predicateIndex);
  bool booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex);
  bool valueExpressionSempred(ValueExpressionContext *_localctx, size_t predicateIndex);
  bool primaryExpressionSempred(PrimaryExpressionContext *_localctx, size_t predicateIndex);
  bool typeSempred(TypeContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

