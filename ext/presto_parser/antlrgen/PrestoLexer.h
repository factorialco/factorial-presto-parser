
// Generated from ./Presto.g4 by ANTLR 4.10.1

#pragma once


#include "antlr4-runtime.h"




class  PrestoLexer : public antlr4::Lexer {
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
    WS = 211, UNRECOGNIZED = 212
  };

  explicit PrestoLexer(antlr4::CharStream *input);

  ~PrestoLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

