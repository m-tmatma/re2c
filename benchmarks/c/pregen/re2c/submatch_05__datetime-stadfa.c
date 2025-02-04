/* Generated by re2c */
#line 1 "../../../benchmarks/c/src/re2c/submatch_05__datetime.re"
#line 1 "../../../benchmarks/c/src/re2c/common.re"
#include <assert.h>
#include <stdlib.h>
#include "common.h"

#line 15 "../../../benchmarks/c/src/re2c/common.re"


typedef struct taglist_t {
    struct taglist_t *pred;
    long dist;
} taglist_t;

typedef struct taglistpool_t {
    taglist_t *head;
    taglist_t *next;
    taglist_t *last;
} taglistpool_t;

typedef struct {
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    
#line 30 "gen/re2c/submatch_05__datetime-stadfa.c"
char *yyt1;
char *yyt2;
char *yyt3;
char *yyt4;
#line 34 "../../../benchmarks/c/src/re2c/common.re"

    
#line 38 "gen/re2c/submatch_05__datetime-stadfa.c"
#line 35 "../../../benchmarks/c/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 49 "gen/re2c/submatch_05__datetime-stadfa.c"
#line 43 "../../../benchmarks/c/src/re2c/common.re"

}

static inline void taglistpool_init(taglistpool_t *tlp)
{
    static const unsigned size = 1024 * 1024;
    tlp->head = (taglist_t*)malloc(size * sizeof(taglist_t));
    tlp->next = tlp->head;
    tlp->last = tlp->head + size;
}

static inline void taglistpool_free(taglistpool_t *tlp)
{
    free(tlp->head);
    tlp->head = tlp->next = tlp->last = NULL;
}

static inline void taglist(taglist_t **ptl, const char *b, const char *t, taglistpool_t *tlp)
{
#ifdef GROW_MTAG_LIST
    if (tlp->next >= tlp->last) {
        const unsigned size = tlp->last - tlp->head;
        taglist_t *head = (taglist_t*)malloc(2 * size * sizeof(taglist_t));
        memcpy(head, tlp->head, size * sizeof(taglist_t));
        free(tlp->head);
        tlp->head = head;
        tlp->next = head + size;
        tlp->last = head + size * 2;
    }
#else
    assert(tlp->next < tlp->last);
#endif
    taglist_t *tl = tlp->next++;
    tl->pred = *ptl;
    tl->dist = t - b;
    *ptl = tl;
}

#line 1 "../../../benchmarks/c/src/re2c/include/fill.re"
#line 4 "../../../benchmarks/c/src/re2c/include/fill.re"


#line 93 "gen/re2c/submatch_05__datetime-stadfa.c"
#define YYMAXFILL 26
#line 6 "../../../benchmarks/c/src/re2c/include/fill.re"


static inline int fill(input_t *in, size_t need)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free >= need);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 112 "gen/re2c/submatch_05__datetime-stadfa.c"
if (in->yyt1) in->yyt1 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;
#line 21 "../../../benchmarks/c/src/re2c/include/fill.re"


    in->lim += fread(in->lim, 1, free, stdin);

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + YYMAXFILL);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 139 "gen/re2c/submatch_05__datetime-stadfa.c"
in->yyt1 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
#line 41 "../../../benchmarks/c/src/re2c/include/fill.re"

    
#line 147 "gen/re2c/submatch_05__datetime-stadfa.c"
#line 42 "../../../benchmarks/c/src/re2c/include/fill.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
}
#line 81 "../../../benchmarks/c/src/re2c/common.re"


static inline void free_input(input_t *in)
{
    free(in->buf);
    taglistpool_free(&in->tlp);
}

static int lex(input_t *in, Output *out);

int main(int argc, char **argv)
{
    PRE;
    input_t in;
    Output out;

    init_input(&in);
    init_output(&out);

    switch (lex(&in, &out)) {
        case 0:  break;
        case 1:  fprintf(stderr, "*** %s: syntax error\n", argv[0]); break;
        case 2:  fprintf(stderr, "*** %s: yyfill error\n", argv[0]); break;
        default: fprintf(stderr, "*** %s: panic\n", argv[0]); break;
    }

    flush(&out);
    free_output(&out);
    free_input(&in);

    POST;
    return 0;
}
#line 1 "../../../benchmarks/c/src/re2c/submatch_05__datetime.re"


static int lex(input_t *in, Output *out)
{
    const char
        *s1, *y1, *h1, *m1, *d1, *M1, *z1,
        *s2, *y2, *h2, *m2, *d2, *M2, *z2;
loop:
    in->tok = in->cur;

#line 198 "gen/re2c/submatch_05__datetime-stadfa.c"
{
	char yych;
	if ((in->lim - in->cur) < 26) if (fill(in, 26) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case 0x00: goto yy1;
		case '0': goto yy4;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy5;
		default: goto yy2;
	}
yy1:
	++in->cur;
#line 3 "../../../benchmarks/c/src/re2c/include/fill.re"
	{ return 0; }
#line 221 "gen/re2c/submatch_05__datetime-stadfa.c"
yy2:
	++in->cur;
yy3:
#line 20 "../../../benchmarks/c/src/re2c/submatch_05__datetime.re"
	{ return 1; }
#line 227 "gen/re2c/submatch_05__datetime-stadfa.c"
yy4:
	yych = *(in->mar = ++in->cur);
	in->yyt2 = in->cur - 1;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy6;
		default: goto yy3;
	}
yy5:
	yych = *(in->mar = ++in->cur);
	in->yyt2 = in->cur - 1;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy8;
		default: goto yy3;
	}
yy6:
	yych = *++in->cur;
	in->yyt3 = in->yyt2;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy9;
		default: goto yy7;
	}
yy7:
	in->cur = in->mar;
	goto yy3;
yy8:
	yych = *++in->cur;
	in->yyt3 = in->yyt2;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy10;
		default: goto yy7;
	}
yy9:
	yych = *++in->cur;
	in->yyt4 = in->yyt3;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy11;
		default: goto yy7;
	}
yy10:
	yych = *++in->cur;
	in->yyt4 = in->yyt3;
	in->yyt3 = in->yyt2;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy12;
		default: goto yy7;
	}
yy11:
	yych = *++in->cur;
	in->yyt1 = in->yyt4;
	switch (yych) {
		case '-': goto yy13;
		default: goto yy7;
	}
yy12:
	++in->cur;
	if ((in->lim - in->cur) < 22) if (fill(in, 22) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt4;
	in->yyt4 = in->yyt3;
	in->yyt3 = in->yyt2;
	switch (yych) {
		case '-': goto yy13;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy12;
		default: goto yy7;
	}
yy13:
	yych = *++in->cur;
	switch (yych) {
		case '0': goto yy14;
		case '1': goto yy15;
		default: goto yy7;
	}
yy14:
	yych = *++in->cur;
	switch (yych) {
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy16;
		default: goto yy7;
	}
yy15:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2': goto yy16;
		default: goto yy7;
	}
yy16:
	yych = *++in->cur;
	switch (yych) {
		case '-': goto yy17;
		default: goto yy7;
	}
yy17:
	yych = *++in->cur;
	switch (yych) {
		case '0': goto yy18;
		case '1':
		case '2': goto yy19;
		case '3': goto yy20;
		default: goto yy7;
	}
yy18:
	yych = *++in->cur;
	switch (yych) {
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy21;
		default: goto yy7;
	}
yy19:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy21;
		default: goto yy7;
	}
yy20:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1': goto yy21;
		default: goto yy7;
	}
yy21:
	yych = *++in->cur;
	switch (yych) {
		case 'T': goto yy22;
		default: goto yy7;
	}
yy22:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1': goto yy23;
		case '2': goto yy24;
		default: goto yy7;
	}
yy23:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy25;
		default: goto yy7;
	}
yy24:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3': goto yy25;
		default: goto yy7;
	}
yy25:
	yych = *++in->cur;
	switch (yych) {
		case ':': goto yy26;
		default: goto yy7;
	}
yy26:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5': goto yy27;
		default: goto yy7;
	}
yy27:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy28;
		default: goto yy7;
	}
yy28:
	yych = *++in->cur;
	switch (yych) {
		case ':': goto yy29;
		default: goto yy7;
	}
yy29:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5': goto yy30;
		default: goto yy7;
	}
yy30:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy31;
		default: goto yy7;
	}
yy31:
	yych = *++in->cur;
	switch (yych) {
		case '+':
		case '-': goto yy32;
		case 'Z': goto yy33;
		default: goto yy7;
	}
yy32:
	yych = *++in->cur;
	in->yyt2 = in->cur - 1;
	switch (yych) {
		case '0':
		case '1': goto yy34;
		case '2': goto yy35;
		default: goto yy7;
	}
yy33:
	yych = *++in->cur;
	in->yyt2 = in->cur - 1;
	switch (yych) {
		case '\n': goto yy36;
		default: goto yy7;
	}
yy34:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy37;
		default: goto yy7;
	}
yy35:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3': goto yy37;
		default: goto yy7;
	}
yy36:
	++in->cur;
	y1 = in->yyt1;
	z1 = in->yyt2;
	y2 = in->yyt2 - 15;
	m1 = in->yyt2 - 14;
	m2 = in->yyt2 - 12;
	d1 = in->yyt2 - 11;
	d2 = in->yyt2 - 9;
	h1 = in->yyt2 - 8;
	h2 = in->yyt2 - 6;
	M1 = in->yyt2 - 5;
	M2 = in->yyt2 - 3;
	s1 = in->yyt2 - 2;
	s2 = in->yyt2;
	z2 = in->cur - 1;
#line 21 "../../../benchmarks/c/src/re2c/submatch_05__datetime.re"
	{
        OUT("year: ",    y1, y2);
        OUT("month: ",   m1, m2);
        OUT("day: ",     d1, d2);
        OUT("hours: ",   h1, h2);
        OUT("minutes: ", M1, M2);
        OUT("seconds: ", s1, s2);
        OUT("tz: ",      z1, z2);
        outc(out, '\n');
        goto loop;
    }
#line 614 "gen/re2c/submatch_05__datetime-stadfa.c"
yy37:
	yych = *++in->cur;
	switch (yych) {
		case ':': goto yy38;
		default: goto yy7;
	}
yy38:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5': goto yy39;
		default: goto yy7;
	}
yy39:
	yych = *++in->cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy40;
		default: goto yy7;
	}
yy40:
	yych = *++in->cur;
	switch (yych) {
		case '\n': goto yy36;
		default: goto yy7;
	}
}
#line 32 "../../../benchmarks/c/src/re2c/submatch_05__datetime.re"

}
