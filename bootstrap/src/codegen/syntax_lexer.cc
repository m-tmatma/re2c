/* Generated by re2c 3.0 */
#line 1 "../src/codegen/syntax_lexer.re"
#include <stdint.h>

#include "src/codegen/syntax.h"
#include "src/msg/msg.h"

namespace re2c {

Ret lex_syntax_file(const uint8_t* text) {
    const uint8_t* YYCURSOR = text;
    const uint8_t* YYMARKER;


#line 16 "src/codegen/syntax_lexer.cc"
{
	uint8_t yych;
	++YYCURSOR;
#line 16 "../src/codegen/syntax_lexer.re"
	{ RET_FAIL(error("syntax error in syntax file")); }
#line 22 "src/codegen/syntax_lexer.cc"
}
#line 17 "../src/codegen/syntax_lexer.re"

    return Ret::OK;
}

} // namespace re2c