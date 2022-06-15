#include <antlr4-runtime.h>
#include <rice/rice.hpp>
#include <rice/stl.hpp>

using namespace std;
using namespace Rice;
using namespace antlr4;

class PrestoErrorListener : public ConsoleErrorListener {
public:
    virtual void syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine,
                                const std::string &msg, std::exception_ptr e);
};