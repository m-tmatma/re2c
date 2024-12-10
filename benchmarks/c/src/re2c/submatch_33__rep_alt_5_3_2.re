#include "re2c/base.h"

namespace re2c_submatch_33__rep_alt_5_3_2 {

/*!rules:re2c:main
    aaa = (([a]{5} | [a]{3} | [a]{2}) #t)*;

    *        { return -1; }
    aaa [\n] {
        print(count, in->tok, t);
        OUTC('\n');
        taglistpool_clear(&in->tlp, in);
        goto loop;
    }
*/

static const char *print(long& count, const char *tok, const taglist_t *t) {
    if (!t) return tok;

    const char *s = print(count, tok, t->pred);
    const char *e = tok + t->dist;
    OUTS(s, e);
    OUTC('.');
    return e;
}

/*!include:re2c "base.re" */

} // namespace re2c_submatch_33__rep_alt_5_3_2
