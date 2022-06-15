#include "PrestoErrorListener.h"

using namespace std;
using namespace Rice;
using namespace antlr4;

void PrestoErrorListener::syntaxError(Recognizer * /*recognizer*/, Token * /*offendingSymbol*/,
    size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr /*e*/)  {
    std::string message = std::string("line ") + std::to_string(line) + ":" + std::to_string(charPositionInLine) + " " + msg;
    throw Exception(rb_exc_new_cstr(this->rbExceptionClass, message.c_str()));
};