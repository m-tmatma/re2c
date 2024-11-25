/* Generated by re2c 4.0.1 */

#ifndef _RE2C_PARSE_LEX_
#define _RE2C_PARSE_LEX_

#include <stddef.h>
#include <string.h>
#include "src/util/forbid_copy.h"

namespace re2c {

struct LexerState {
    enum class LexMode: uint32_t { NORMAL, FLEX_NAME };

    LexMode mode;
    size_t BSIZE;
    uint8_t* bot, *lim, *cur, *mar, *ctx, *tok, *ptr, *pos, *eof;
    
#line 20 "src/parse/lexer.h"
uint8_t* yyt1;uint8_t* yyt2;uint8_t* yyt3;
#line 78 "../src/parse/lexer.re"


    inline LexerState()
        : mode(LexMode::NORMAL),
          BSIZE(8192),
          bot(new uint8_t[BSIZE + maxfill()]),
          lim(bot + BSIZE),
          cur(lim),
          mar(lim),
          ctx(lim),
          tok(lim),
          ptr(lim),
          pos(lim),
          eof(nullptr)
          
#line 38 "src/parse/lexer.h"
, yyt1(lim), yyt2(lim), yyt3(lim)
#line 92 "../src/parse/lexer.re"
 {
        memset(lim, 0, maxfill());
    }

    inline ~LexerState() {
        delete[] bot;
    }

    inline void reset_ptrs() {
        // reset lexer back to its initial state
        cur = mar = ctx = tok = ptr = pos = lim = bot + BSIZE;
        memset(lim, 0, maxfill());
        eof = nullptr;
    }

    inline void shift_ptrs(ptrdiff_t offs) {
        lim += offs;
        cur += offs;
        mar += offs;
        ctx += offs;
        tok += offs;
        ptr += offs;
        pos += offs;
        
#line 65 "src/parse/lexer.h"
if (yyt1) { yyt1 += offs; }if (yyt2) { yyt2 += offs; }if (yyt3) { yyt3 += offs; }
#line 115 "../src/parse/lexer.re"

    }

    static size_t maxfill() {
        return std::max(maxfill_main(), maxfill_conf());
    }

  private:
    static size_t maxfill_main();
    static size_t maxfill_conf();

    FORBID_COPY(LexerState);
};

} // namespace re2c

#endif // _RE2C_PARSE_LEX_
