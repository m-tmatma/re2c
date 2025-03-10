/* Generated by re2c */
#include "re2c/base.h"

namespace re2c_submatch_10__alt1_2 {





#define YYMAXFILL 2


struct input_t {
    FILE* file;
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    char *yyt1;
char *yyt2;
char *yyt3;
char *yyt4;

    
    taglistpool_t tlp;
    int eof;
};

static inline void free_input(input_t *in) {
    free(in->buf);
    taglistpool_free(&in->tlp);
    if (in->file) fclose(in->file);
}

static inline int fill_buffered_eof(input_t *in) {
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free > 0);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    if (in->yyt1) in->yyt1 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;


    in->lim += fread(in->lim, 1, free, in->file);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline int fill_buffered_scc(input_t *in, size_t need) {
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free >= need);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    if (in->yyt1) in->yyt1 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;


    in->lim += fread(in->lim, 1, free, in->file);

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }

    return 0;
}

static inline void init_input_simple(input_t *in, const char* fname) {
    FILE* f = fopen(fname, "rb");

    fseek(f, 0, SEEK_END);
    size_t flen = (size_t) ftell(f);
    fseek(f, 0, SEEK_SET);

    in->file = nullptr; // unused
    in->buf = (char*) malloc(flen + 1);
    in->lim = nullptr; // unused
    in->cur = in->mar = in->tok = in->buf;
    in->yyt1 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0; // unused

    fread(in->buf, 1, flen, f);
    in->buf[flen] = 0;

    fclose(f);
}

static inline void init_input_buffered_eof(input_t *in, const char* fname) {
    in->file = fopen(fname, "rb");
    in->buf = (char*) malloc(SIZE + 1);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    in->yyt1 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill_buffered_eof(in);
}

static inline void init_input_buffered_scc(input_t *in, const char* fname) {
    in->file = fopen(fname, "rb");
    in->buf = (char*) malloc(SIZE + YYMAXFILL);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    in->yyt1 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0;
}

#define YYCURSOR cur
#define YYMARKER mar
#define YYTOKEN tok
#define TLP_CLEAR() do { \
    in->tlp.next = in->tlp.head; \
     \
} while (0)

int lex_simple(input_t *in) {
    char *cur = in->buf, *mar, *tok;
    (void) mar; // maybe unused
    (void) tok; // maybe unused
    char *yyt1;
char *yyt2;
char *yyt3;
char *yyt4;

    
    const char* a1;const char* a2;const char* b1;const char* b2;
    
    long count = 0;
loop:
    tok = cur;
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy1;
		case '\n':
			yyt1 = YYCURSOR;
			yyt2 = YYCURSOR;
			yyt3 = NULL;
			yyt4 = NULL;
			goto yy4;
		case 'a':
			yyt1 = YYCURSOR;
			goto yy5;
		case 'b':
			yyt4 = YYCURSOR;
			goto yy6;
		default: goto yy2;
	}
yy1:
	++YYCURSOR;
	{ return count; }
yy2:
	++YYCURSOR;
yy3:
	{ return -1; }
yy4:
	++YYCURSOR;
	a1 = yyt1;
	a2 = yyt2;
	b1 = yyt4;
	b2 = yyt3;
	{
        if (a1)      { OUTC('A'); OUTS(a1, a2); }
        else if (b1) { OUTC('B'); OUTS(b1, b2); }
        OUTC('\n');
        goto loop;
    }
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
			yyt2 = YYCURSOR;
			yyt3 = NULL;
			yyt4 = NULL;
			goto yy4;
		case 'a': goto yy7;
		default: goto yy3;
	}
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
			yyt1 = NULL;
			yyt2 = NULL;
			yyt3 = YYCURSOR;
			goto yy4;
		case 'b': goto yy9;
		default: goto yy3;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case '\n':
			yyt2 = YYCURSOR;
			yyt3 = NULL;
			yyt4 = NULL;
			goto yy4;
		case 'a': goto yy7;
		default: goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	goto yy3;
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case '\n':
			yyt1 = NULL;
			yyt2 = NULL;
			yyt3 = YYCURSOR;
			goto yy4;
		case 'b': goto yy9;
		default: goto yy8;
	}
}

}

#undef YYCURSOR
#undef YYMARKER
#undef YYTOKEN
#undef TLP_CLEAR

#define YYCURSOR in->cur
#define YYMARKER in->mar
#define YYLIMIT in->lim
#define YYTOKEN in->tok
#define TLP_CLEAR() do { \
    in->tlp.next = in->tlp.head; \
     \
} while (0)

int lex_buffered_eof(input_t *in) {
    const char* a1;const char* a2;const char* b1;const char* b2;
    
    long count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = YYCURSOR;
			in->yyt2 = YYCURSOR;
			in->yyt3 = NULL;
			in->yyt4 = NULL;
			goto yy13;
		case 'a':
			in->yyt1 = YYCURSOR;
			goto yy14;
		case 'b':
			in->yyt4 = YYCURSOR;
			goto yy15;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel0;
				goto yy19;
			}
			goto yy11;
	}
yy11:
	++YYCURSOR;
yy12:
	{ return -1; }
yy13:
	++YYCURSOR;
	a1 = in->yyt1;
	a2 = in->yyt2;
	b1 = in->yyt4;
	b2 = in->yyt3;
	{
        if (a1)      { OUTC('A'); OUTS(a1, a2); }
        else if (b1) { OUTC('B'); OUTS(b1, b2); }
        OUTC('\n');
        goto loop;
    }
yy14:
	YYMARKER = ++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt2 = YYCURSOR;
			in->yyt3 = NULL;
			in->yyt4 = NULL;
			goto yy13;
		case 'a': goto yy16;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel1;
			}
			goto yy12;
	}
yy15:
	YYMARKER = ++YYCURSOR;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = YYCURSOR;
			goto yy13;
		case 'b': goto yy18;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel2;
			}
			goto yy12;
	}
yy16:
	++YYCURSOR;
yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt2 = YYCURSOR;
			in->yyt3 = NULL;
			in->yyt4 = NULL;
			goto yy13;
		case 'a': goto yy16;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel3;
			}
			goto yy17;
	}
yy17:
	YYCURSOR = YYMARKER;
	goto yy12;
yy18:
	++YYCURSOR;
yyFillLabel4:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = YYCURSOR;
			goto yy13;
		case 'b': goto yy18;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel4;
			}
			goto yy17;
	}
yy19:
	{ return count; }
}

}

int lex_buffered_scc(input_t *in) {
    const char* a1;const char* a2;const char* b1;const char* b2;
    
    long count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
	if ((YYLIMIT - YYCURSOR) < 2) if (fill_buffered_scc(in, 2) != 0) return -2;
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy21;
		case '\n':
			in->yyt1 = YYCURSOR;
			in->yyt2 = YYCURSOR;
			in->yyt3 = NULL;
			in->yyt4 = NULL;
			goto yy24;
		case 'a':
			in->yyt1 = YYCURSOR;
			goto yy25;
		case 'b':
			in->yyt4 = YYCURSOR;
			goto yy26;
		default: goto yy22;
	}
yy21:
	++YYCURSOR;
	{ return count; }
yy22:
	++YYCURSOR;
yy23:
	{ return -1; }
yy24:
	++YYCURSOR;
	a1 = in->yyt1;
	a2 = in->yyt2;
	b1 = in->yyt4;
	b2 = in->yyt3;
	{
        if (a1)      { OUTC('A'); OUTS(a1, a2); }
        else if (b1) { OUTC('B'); OUTS(b1, b2); }
        OUTC('\n');
        goto loop;
    }
yy25:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
			in->yyt2 = YYCURSOR;
			in->yyt3 = NULL;
			in->yyt4 = NULL;
			goto yy24;
		case 'a': goto yy27;
		default: goto yy23;
	}
yy26:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = YYCURSOR;
			goto yy24;
		case 'b': goto yy29;
		default: goto yy23;
	}
yy27:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt2 = YYCURSOR;
			in->yyt3 = NULL;
			in->yyt4 = NULL;
			goto yy24;
		case 'a': goto yy27;
		default: goto yy28;
	}
yy28:
	YYCURSOR = YYMARKER;
	goto yy23;
yy29:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = YYCURSOR;
			goto yy24;
		case 'b': goto yy29;
		default: goto yy28;
	}
}

}

#undef YYCURSOR
#undef YYMARKER
#undef YYLIMIT
#undef YYTOKEN
#undef TLP_CLEAR

#define FN_BENCH(suffix) \
void bench_##suffix::operator()( \
        benchmark::State &state, const char* input, long expected) const { \
    long count = 0; \
    for (auto _ : state) { \
        input_t in; \
        init_input_##suffix(&in, input); \
        count = lex_##suffix(&in); \
        free_input(&in); \
    } \
    if (count != expected) state.SkipWithError("re2c: error"); \
}
FN_BENCH(simple)
FN_BENCH(buffered_eof)
FN_BENCH(buffered_scc)
#undef FN_BENCH

#define FN_TEST(suffix) \
bool test_##suffix(const char* input, long expected) { \
    input_t in; \
    init_input_##suffix(&in, input); \
    long count = lex_##suffix(&in); \
    switch (count) { \
    default: \
        if (count != expected) { \
            fprintf(stderr, "re2c: wrong count, expected %ld, got %ld\n", expected, count); \
        } \
        break; \
    case -1: \
        fprintf(stderr, "re2c: syntax error\n"); \
        break; \
    case -2: \
        fprintf(stderr, "re2c: yyfill error\n"); \
        break; \
    } \
    free_input(&in); \
    return count == expected; \
}
FN_TEST(simple)
FN_TEST(buffered_eof)
FN_TEST(buffered_scc)
#undef FN_TEST


} // namespace re2c_submatch_10__alt1_2
