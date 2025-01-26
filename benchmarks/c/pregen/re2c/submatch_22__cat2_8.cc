/* Generated by re2c */
#include "re2c/base.h"

namespace re2c_submatch_22__cat2_8 {





#define YYMAXFILL 16


struct input_t {
    FILE* file;
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt17;
char *yyt18;
char *yyt19;
char *yyt2;
char *yyt20;
char *yyt21;
char *yyt22;
char *yyt23;
char *yyt24;
char *yyt25;
char *yyt26;
char *yyt27;
char *yyt28;
char *yyt29;
char *yyt3;
char *yyt30;
char *yyt31;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;

    
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
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt17) in->yyt17 -= free;
if (in->yyt18) in->yyt18 -= free;
if (in->yyt19) in->yyt19 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt20) in->yyt20 -= free;
if (in->yyt21) in->yyt21 -= free;
if (in->yyt22) in->yyt22 -= free;
if (in->yyt23) in->yyt23 -= free;
if (in->yyt24) in->yyt24 -= free;
if (in->yyt25) in->yyt25 -= free;
if (in->yyt26) in->yyt26 -= free;
if (in->yyt27) in->yyt27 -= free;
if (in->yyt28) in->yyt28 -= free;
if (in->yyt29) in->yyt29 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt30) in->yyt30 -= free;
if (in->yyt31) in->yyt31 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;


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
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt17) in->yyt17 -= free;
if (in->yyt18) in->yyt18 -= free;
if (in->yyt19) in->yyt19 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt20) in->yyt20 -= free;
if (in->yyt21) in->yyt21 -= free;
if (in->yyt22) in->yyt22 -= free;
if (in->yyt23) in->yyt23 -= free;
if (in->yyt24) in->yyt24 -= free;
if (in->yyt25) in->yyt25 -= free;
if (in->yyt26) in->yyt26 -= free;
if (in->yyt27) in->yyt27 -= free;
if (in->yyt28) in->yyt28 -= free;
if (in->yyt29) in->yyt29 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt30) in->yyt30 -= free;
if (in->yyt31) in->yyt31 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;


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
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt17 = 0;
in->yyt18 = 0;
in->yyt19 = 0;
in->yyt2 = 0;
in->yyt20 = 0;
in->yyt21 = 0;
in->yyt22 = 0;
in->yyt23 = 0;
in->yyt24 = 0;
in->yyt25 = 0;
in->yyt26 = 0;
in->yyt27 = 0;
in->yyt28 = 0;
in->yyt29 = 0;
in->yyt3 = 0;
in->yyt30 = 0;
in->yyt31 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

    
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
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt17 = 0;
in->yyt18 = 0;
in->yyt19 = 0;
in->yyt2 = 0;
in->yyt20 = 0;
in->yyt21 = 0;
in->yyt22 = 0;
in->yyt23 = 0;
in->yyt24 = 0;
in->yyt25 = 0;
in->yyt26 = 0;
in->yyt27 = 0;
in->yyt28 = 0;
in->yyt29 = 0;
in->yyt3 = 0;
in->yyt30 = 0;
in->yyt31 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

    
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
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt17 = 0;
in->yyt18 = 0;
in->yyt19 = 0;
in->yyt2 = 0;
in->yyt20 = 0;
in->yyt21 = 0;
in->yyt22 = 0;
in->yyt23 = 0;
in->yyt24 = 0;
in->yyt25 = 0;
in->yyt26 = 0;
in->yyt27 = 0;
in->yyt28 = 0;
in->yyt29 = 0;
in->yyt3 = 0;
in->yyt30 = 0;
in->yyt31 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

    
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
    (void) tok; // may be unused
    char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt17;
char *yyt18;
char *yyt19;
char *yyt2;
char *yyt20;
char *yyt21;
char *yyt22;
char *yyt23;
char *yyt24;
char *yyt25;
char *yyt26;
char *yyt27;
char *yyt28;
char *yyt29;
char *yyt3;
char *yyt30;
char *yyt31;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;

    
    const char* a0;const char* a1;const char* b0;const char* b1;
    
    long count = 0;
loop:
    tok = cur;
    
{
	char yych;
	static const unsigned char yybm[256] = {
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0, 192,  32,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0
	};
	yych = *YYCURSOR;
	if (yych <= 0x00) goto yy1;
	if (yych == 'a') {
		yyt1 = YYCURSOR;
		yyt2 = YYCURSOR;
		goto yy4;
	}
	goto yy2;
yy1:
	++YYCURSOR;
	{ return count; }
yy2:
	++YYCURSOR;
yy3:
	{ return -1; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych != 'a') goto yy3;
	yyt3 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych == 'a') {
		yyt4 = YYCURSOR;
		goto yy6;
	}
yy5:
	YYCURSOR = YYMARKER;
	goto yy3;
yy6:
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy5;
	yyt5 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy5;
	yyt6 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy5;
	yyt7 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy5;
	yyt8 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy5;
	yyt9 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy8;
	yyt10 = YYCURSOR;
	yyt11 = YYCURSOR;
	yyt12 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy5;
	if (yych <= 'a') {
		yyt13 = YYCURSOR;
		yyt14 = YYCURSOR;
		yyt15 = YYCURSOR;
		goto yy9;
	}
	if (yych >= 'c') goto yy5;
	yyt2 = yyt3;
yy7:
	yych = *++YYCURSOR;
yy8:
	if (yybm[0+yych] & 32) goto yy7;
	if (yych == 'a') {
		yyt11 = YYCURSOR;
		yyt12 = YYCURSOR;
		goto yy10;
	}
	goto yy5;
yy9:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy5;
	if (yych <= 'a') {
		yyt16 = YYCURSOR;
		yyt17 = YYCURSOR;
		yyt18 = YYCURSOR;
		goto yy11;
	}
	if (yych <= 'b') {
		yyt2 = yyt4;
		goto yy7;
	}
	goto yy5;
yy10:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		yyt3 = YYCURSOR;
		goto yy12;
	}
	goto yy5;
yy11:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy5;
	if (yych <= 'a') {
		yyt19 = YYCURSOR;
		yyt20 = YYCURSOR;
		yyt21 = YYCURSOR;
		goto yy13;
	}
	if (yych <= 'b') {
		yyt2 = yyt5;
		goto yy7;
	}
	goto yy5;
yy12:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		yyt4 = YYCURSOR;
		goto yy14;
	}
	goto yy5;
yy13:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy5;
	if (yych <= 'a') {
		yyt22 = YYCURSOR;
		yyt23 = YYCURSOR;
		yyt24 = YYCURSOR;
		goto yy15;
	}
	if (yych <= 'b') {
		yyt2 = yyt6;
		goto yy7;
	}
	goto yy5;
yy14:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		yyt5 = YYCURSOR;
		goto yy16;
	}
	goto yy5;
yy15:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy5;
	if (yych <= 'a') {
		yyt25 = YYCURSOR;
		yyt26 = YYCURSOR;
		yyt27 = YYCURSOR;
		goto yy17;
	}
	if (yych <= 'b') {
		yyt2 = yyt7;
		goto yy7;
	}
	goto yy5;
yy16:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		yyt6 = YYCURSOR;
		goto yy18;
	}
	goto yy5;
yy17:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy5;
	if (yych <= 'a') {
		yyt28 = YYCURSOR;
		yyt29 = YYCURSOR;
		goto yy19;
	}
	if (yych <= 'b') {
		yyt2 = yyt8;
		goto yy7;
	}
	goto yy5;
yy18:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		yyt7 = YYCURSOR;
		goto yy20;
	}
	goto yy5;
yy19:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy5;
	if (yych <= 'a') {
		yyt30 = YYCURSOR;
		yyt31 = YYCURSOR;
		goto yy21;
	}
	if (yych <= 'b') {
		yyt2 = yyt9;
		goto yy7;
	}
	goto yy5;
yy20:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		yyt8 = YYCURSOR;
		goto yy22;
	}
	goto yy5;
yy21:
	yych = *++YYCURSOR;
	if (yybm[0+yych] & 64) {
		yyt2 = yyt3;
		yyt3 = yyt4;
		yyt4 = yyt5;
		yyt5 = yyt6;
		yyt6 = yyt7;
		yyt7 = yyt8;
		yyt8 = yyt9;
		yyt11 = yyt14;
		yyt12 = yyt15;
		yyt14 = yyt17;
		yyt15 = yyt18;
		yyt17 = yyt20;
		yyt18 = yyt21;
		yyt20 = yyt23;
		yyt21 = yyt24;
		yyt23 = yyt26;
		yyt24 = yyt27;
		yyt26 = yyt29;
		yyt27 = yyt29;
		yyt29 = yyt31;
		yyt31 = YYCURSOR;
		yyt9 = yyt10;
		yyt10 = yyt13;
		yyt13 = yyt16;
		yyt16 = yyt19;
		yyt19 = yyt22;
		yyt22 = yyt25;
		yyt25 = yyt28;
		yyt28 = yyt30;
		yyt30 = YYCURSOR;
		goto yy21;
	}
	if (yych == '\n') goto yy23;
	if (yych <= '`') goto yy5;
	if (yych <= 'b') goto yy24;
	goto yy5;
yy22:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		yyt9 = YYCURSOR;
		goto yy25;
	}
	goto yy5;
yy23:
	++YYCURSOR;
	a0 = yyt1;
	b0 = yyt2;
	a1 = yyt11;
	b1 = yyt12;
	{
        OUTS(a0, b0); OUTC('.'); OUTS(b0, a1); OUTC('.');
        OUTS(a1, b1); OUTC('.'); OUTS(b1, YYCURSOR);
        goto loop;
    }
yy24:
	yych = *++YYCURSOR;
	if (yych <= '`') {
		if (yych == '\n') goto yy23;
		goto yy5;
	} else {
		if (yych <= 'a') {
			yyt2 = yyt10;
			yyt11 = YYCURSOR;
			yyt12 = YYCURSOR;
			goto yy10;
		}
		if (yych <= 'b') goto yy24;
		goto yy5;
	}
yy25:
	yych = *++YYCURSOR;
	if (yybm[0+yych] & 128) {
		yyt12 = yyt3;
		yyt3 = yyt4;
		yyt4 = yyt5;
		yyt5 = yyt6;
		yyt6 = yyt7;
		yyt7 = yyt8;
		yyt8 = yyt9;
		yyt9 = YYCURSOR;
		goto yy25;
	}
	if (yych == '\n') goto yy23;
	if (yych <= '`') goto yy5;
	if (yych >= 'c') goto yy5;
yy26:
	yych = *++YYCURSOR;
	if (yych == '\n') goto yy23;
	if (yych == 'b') goto yy26;
	goto yy5;
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
    const char* a0;const char* a1;const char* b0;const char* b1;
    
    long count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt1 = YYCURSOR;
			in->yyt2 = YYCURSOR;
			goto yy30;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel0;
				goto yy60;
			}
			goto yy28;
	}
yy28:
	++YYCURSOR;
yy29:
	{ return -1; }
yy30:
	YYMARKER = ++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt3 = YYCURSOR;
			goto yy31;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel1;
			}
			goto yy29;
	}
yy31:
	++YYCURSOR;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt4 = YYCURSOR;
			goto yy33;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel2;
			}
			goto yy32;
	}
yy32:
	YYCURSOR = YYMARKER;
	goto yy29;
yy33:
	++YYCURSOR;
yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt5 = YYCURSOR;
			goto yy34;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel3;
			}
			goto yy32;
	}
yy34:
	++YYCURSOR;
yyFillLabel4:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt6 = YYCURSOR;
			goto yy35;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel4;
			}
			goto yy32;
	}
yy35:
	++YYCURSOR;
yyFillLabel5:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt7 = YYCURSOR;
			goto yy36;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel5;
			}
			goto yy32;
	}
yy36:
	++YYCURSOR;
yyFillLabel6:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt8 = YYCURSOR;
			goto yy37;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel6;
			}
			goto yy32;
	}
yy37:
	++YYCURSOR;
yyFillLabel7:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt9 = YYCURSOR;
			goto yy38;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel7;
			}
			goto yy32;
	}
yy38:
	++YYCURSOR;
yyFillLabel8:
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel8;
			}
			goto yy32;
		case 'a':
			in->yyt10 = YYCURSOR;
			in->yyt11 = YYCURSOR;
			in->yyt12 = YYCURSOR;
			goto yy39;
		default: goto yy41;
	}
yy39:
	++YYCURSOR;
yyFillLabel9:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt13 = YYCURSOR;
			in->yyt14 = YYCURSOR;
			in->yyt15 = YYCURSOR;
			goto yy42;
		case 'b':
			in->yyt2 = in->yyt3;
			goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel9;
			}
			goto yy32;
	}
yy40:
	++YYCURSOR;
yyFillLabel10:
	yych = *YYCURSOR;
yy41:
	switch (yych) {
		case 'a':
			in->yyt11 = YYCURSOR;
			in->yyt12 = YYCURSOR;
			goto yy43;
		case 'b': goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel10;
			}
			goto yy32;
	}
yy42:
	++YYCURSOR;
yyFillLabel11:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt16 = YYCURSOR;
			in->yyt17 = YYCURSOR;
			in->yyt18 = YYCURSOR;
			goto yy44;
		case 'b':
			in->yyt2 = in->yyt4;
			goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel11;
			}
			goto yy32;
	}
yy43:
	++YYCURSOR;
yyFillLabel12:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt3 = YYCURSOR;
			goto yy45;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel12;
			}
			goto yy32;
	}
yy44:
	++YYCURSOR;
yyFillLabel13:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt19 = YYCURSOR;
			in->yyt20 = YYCURSOR;
			in->yyt21 = YYCURSOR;
			goto yy46;
		case 'b':
			in->yyt2 = in->yyt5;
			goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel13;
			}
			goto yy32;
	}
yy45:
	++YYCURSOR;
yyFillLabel14:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt4 = YYCURSOR;
			goto yy47;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel14;
			}
			goto yy32;
	}
yy46:
	++YYCURSOR;
yyFillLabel15:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt22 = YYCURSOR;
			in->yyt23 = YYCURSOR;
			in->yyt24 = YYCURSOR;
			goto yy48;
		case 'b':
			in->yyt2 = in->yyt6;
			goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel15;
			}
			goto yy32;
	}
yy47:
	++YYCURSOR;
yyFillLabel16:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt5 = YYCURSOR;
			goto yy49;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel16;
			}
			goto yy32;
	}
yy48:
	++YYCURSOR;
yyFillLabel17:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt25 = YYCURSOR;
			in->yyt26 = YYCURSOR;
			in->yyt27 = YYCURSOR;
			goto yy50;
		case 'b':
			in->yyt2 = in->yyt7;
			goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel17;
			}
			goto yy32;
	}
yy49:
	++YYCURSOR;
yyFillLabel18:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt6 = YYCURSOR;
			goto yy51;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel18;
			}
			goto yy32;
	}
yy50:
	++YYCURSOR;
yyFillLabel19:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt28 = YYCURSOR;
			in->yyt29 = YYCURSOR;
			goto yy52;
		case 'b':
			in->yyt2 = in->yyt8;
			goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel19;
			}
			goto yy32;
	}
yy51:
	++YYCURSOR;
yyFillLabel20:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt7 = YYCURSOR;
			goto yy53;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel20;
			}
			goto yy32;
	}
yy52:
	++YYCURSOR;
yyFillLabel21:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt30 = YYCURSOR;
			in->yyt31 = YYCURSOR;
			goto yy54;
		case 'b':
			in->yyt2 = in->yyt9;
			goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel21;
			}
			goto yy32;
	}
yy53:
	++YYCURSOR;
yyFillLabel22:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt8 = YYCURSOR;
			goto yy55;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel22;
			}
			goto yy32;
	}
yy54:
	++YYCURSOR;
yyFillLabel23:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy56;
		case 'a':
			in->yyt2 = in->yyt3;
			in->yyt3 = in->yyt4;
			in->yyt4 = in->yyt5;
			in->yyt5 = in->yyt6;
			in->yyt6 = in->yyt7;
			in->yyt7 = in->yyt8;
			in->yyt8 = in->yyt9;
			in->yyt11 = in->yyt14;
			in->yyt12 = in->yyt15;
			in->yyt14 = in->yyt17;
			in->yyt15 = in->yyt18;
			in->yyt17 = in->yyt20;
			in->yyt18 = in->yyt21;
			in->yyt20 = in->yyt23;
			in->yyt21 = in->yyt24;
			in->yyt23 = in->yyt26;
			in->yyt24 = in->yyt27;
			in->yyt26 = in->yyt29;
			in->yyt27 = in->yyt29;
			in->yyt29 = in->yyt31;
			in->yyt31 = YYCURSOR;
			in->yyt9 = in->yyt10;
			in->yyt10 = in->yyt13;
			in->yyt13 = in->yyt16;
			in->yyt16 = in->yyt19;
			in->yyt19 = in->yyt22;
			in->yyt22 = in->yyt25;
			in->yyt25 = in->yyt28;
			in->yyt28 = in->yyt30;
			in->yyt30 = YYCURSOR;
			goto yy54;
		case 'b': goto yy57;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel23;
			}
			goto yy32;
	}
yy55:
	++YYCURSOR;
yyFillLabel24:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			in->yyt9 = YYCURSOR;
			goto yy58;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel24;
			}
			goto yy32;
	}
yy56:
	++YYCURSOR;
	a0 = in->yyt1;
	b0 = in->yyt2;
	a1 = in->yyt11;
	b1 = in->yyt12;
	{
        OUTS(a0, b0); OUTC('.'); OUTS(b0, a1); OUTC('.');
        OUTS(a1, b1); OUTC('.'); OUTS(b1, YYCURSOR);
        goto loop;
    }
yy57:
	++YYCURSOR;
yyFillLabel25:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy56;
		case 'a':
			in->yyt2 = in->yyt10;
			in->yyt11 = YYCURSOR;
			in->yyt12 = YYCURSOR;
			goto yy43;
		case 'b': goto yy57;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel25;
			}
			goto yy32;
	}
yy58:
	++YYCURSOR;
yyFillLabel26:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy56;
		case 'a':
			in->yyt12 = in->yyt3;
			in->yyt3 = in->yyt4;
			in->yyt4 = in->yyt5;
			in->yyt5 = in->yyt6;
			in->yyt6 = in->yyt7;
			in->yyt7 = in->yyt8;
			in->yyt8 = in->yyt9;
			in->yyt9 = YYCURSOR;
			goto yy58;
		case 'b': goto yy59;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel26;
			}
			goto yy32;
	}
yy59:
	++YYCURSOR;
yyFillLabel27:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy56;
		case 'b': goto yy59;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel27;
			}
			goto yy32;
	}
yy60:
	{ return count; }
}

}

int lex_buffered_scc(input_t *in) {
    const char* a0;const char* a1;const char* b0;const char* b1;
    
    long count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
	static const unsigned char yybm[256] = {
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0, 192,  32,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0
	};
	if ((YYLIMIT - YYCURSOR) < 16) if (fill_buffered_scc(in, 16) != 0) return -2;
	yych = *YYCURSOR;
	if (yych <= 0x00) goto yy62;
	if (yych == 'a') {
		in->yyt1 = YYCURSOR;
		in->yyt2 = YYCURSOR;
		goto yy65;
	}
	goto yy63;
yy62:
	++YYCURSOR;
	{ return count; }
yy63:
	++YYCURSOR;
yy64:
	{ return -1; }
yy65:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych != 'a') goto yy64;
	in->yyt3 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych == 'a') {
		in->yyt4 = YYCURSOR;
		goto yy67;
	}
yy66:
	YYCURSOR = YYMARKER;
	goto yy64;
yy67:
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy66;
	in->yyt5 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy66;
	in->yyt6 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy66;
	in->yyt7 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy66;
	in->yyt8 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy66;
	in->yyt9 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy69;
	in->yyt10 = YYCURSOR;
	in->yyt11 = YYCURSOR;
	in->yyt12 = YYCURSOR;
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy66;
	if (yych <= 'a') {
		in->yyt13 = YYCURSOR;
		in->yyt14 = YYCURSOR;
		in->yyt15 = YYCURSOR;
		goto yy70;
	}
	if (yych >= 'c') goto yy66;
	in->yyt2 = in->yyt3;
yy68:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 8) if (fill_buffered_scc(in, 8) != 0) return -2;
	yych = *YYCURSOR;
yy69:
	if (yybm[0+yych] & 32) goto yy68;
	if (yych == 'a') {
		in->yyt11 = YYCURSOR;
		in->yyt12 = YYCURSOR;
		goto yy71;
	}
	goto yy66;
yy70:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy66;
	if (yych <= 'a') {
		in->yyt16 = YYCURSOR;
		in->yyt17 = YYCURSOR;
		in->yyt18 = YYCURSOR;
		goto yy72;
	}
	if (yych <= 'b') {
		in->yyt2 = in->yyt4;
		goto yy68;
	}
	goto yy66;
yy71:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		in->yyt3 = YYCURSOR;
		goto yy73;
	}
	goto yy66;
yy72:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy66;
	if (yych <= 'a') {
		in->yyt19 = YYCURSOR;
		in->yyt20 = YYCURSOR;
		in->yyt21 = YYCURSOR;
		goto yy74;
	}
	if (yych <= 'b') {
		in->yyt2 = in->yyt5;
		goto yy68;
	}
	goto yy66;
yy73:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		in->yyt4 = YYCURSOR;
		goto yy75;
	}
	goto yy66;
yy74:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy66;
	if (yych <= 'a') {
		in->yyt22 = YYCURSOR;
		in->yyt23 = YYCURSOR;
		in->yyt24 = YYCURSOR;
		goto yy76;
	}
	if (yych <= 'b') {
		in->yyt2 = in->yyt6;
		goto yy68;
	}
	goto yy66;
yy75:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		in->yyt5 = YYCURSOR;
		goto yy77;
	}
	goto yy66;
yy76:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy66;
	if (yych <= 'a') {
		in->yyt25 = YYCURSOR;
		in->yyt26 = YYCURSOR;
		in->yyt27 = YYCURSOR;
		goto yy78;
	}
	if (yych <= 'b') {
		in->yyt2 = in->yyt7;
		goto yy68;
	}
	goto yy66;
yy77:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		in->yyt6 = YYCURSOR;
		goto yy79;
	}
	goto yy66;
yy78:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy66;
	if (yych <= 'a') {
		in->yyt28 = YYCURSOR;
		in->yyt29 = YYCURSOR;
		goto yy80;
	}
	if (yych <= 'b') {
		in->yyt2 = in->yyt8;
		goto yy68;
	}
	goto yy66;
yy79:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		in->yyt7 = YYCURSOR;
		goto yy81;
	}
	goto yy66;
yy80:
	yych = *++YYCURSOR;
	if (yych <= '`') goto yy66;
	if (yych <= 'a') {
		in->yyt30 = YYCURSOR;
		in->yyt31 = YYCURSOR;
		goto yy82;
	}
	if (yych <= 'b') {
		in->yyt2 = in->yyt9;
		goto yy68;
	}
	goto yy66;
yy81:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		in->yyt8 = YYCURSOR;
		goto yy83;
	}
	goto yy66;
yy82:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yybm[0+yych] & 64) {
		in->yyt2 = in->yyt3;
		in->yyt3 = in->yyt4;
		in->yyt4 = in->yyt5;
		in->yyt5 = in->yyt6;
		in->yyt6 = in->yyt7;
		in->yyt7 = in->yyt8;
		in->yyt8 = in->yyt9;
		in->yyt11 = in->yyt14;
		in->yyt12 = in->yyt15;
		in->yyt14 = in->yyt17;
		in->yyt15 = in->yyt18;
		in->yyt17 = in->yyt20;
		in->yyt18 = in->yyt21;
		in->yyt20 = in->yyt23;
		in->yyt21 = in->yyt24;
		in->yyt23 = in->yyt26;
		in->yyt24 = in->yyt27;
		in->yyt26 = in->yyt29;
		in->yyt27 = in->yyt29;
		in->yyt29 = in->yyt31;
		in->yyt31 = YYCURSOR;
		in->yyt9 = in->yyt10;
		in->yyt10 = in->yyt13;
		in->yyt13 = in->yyt16;
		in->yyt16 = in->yyt19;
		in->yyt19 = in->yyt22;
		in->yyt22 = in->yyt25;
		in->yyt25 = in->yyt28;
		in->yyt28 = in->yyt30;
		in->yyt30 = YYCURSOR;
		goto yy82;
	}
	if (yych == '\n') goto yy84;
	if (yych <= '`') goto yy66;
	if (yych <= 'b') goto yy85;
	goto yy66;
yy83:
	yych = *++YYCURSOR;
	if (yych == 'a') {
		in->yyt9 = YYCURSOR;
		goto yy86;
	}
	goto yy66;
yy84:
	++YYCURSOR;
	a0 = in->yyt1;
	b0 = in->yyt2;
	a1 = in->yyt11;
	b1 = in->yyt12;
	{
        OUTS(a0, b0); OUTC('.'); OUTS(b0, a1); OUTC('.');
        OUTS(a1, b1); OUTC('.'); OUTS(b1, YYCURSOR);
        goto loop;
    }
yy85:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 8) if (fill_buffered_scc(in, 8) != 0) return -2;
	yych = *YYCURSOR;
	if (yych <= '`') {
		if (yych == '\n') goto yy84;
		goto yy66;
	} else {
		if (yych <= 'a') {
			in->yyt2 = in->yyt10;
			in->yyt11 = YYCURSOR;
			in->yyt12 = YYCURSOR;
			goto yy71;
		}
		if (yych <= 'b') goto yy85;
		goto yy66;
	}
yy86:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yybm[0+yych] & 128) {
		in->yyt12 = in->yyt3;
		in->yyt3 = in->yyt4;
		in->yyt4 = in->yyt5;
		in->yyt5 = in->yyt6;
		in->yyt6 = in->yyt7;
		in->yyt7 = in->yyt8;
		in->yyt8 = in->yyt9;
		in->yyt9 = YYCURSOR;
		goto yy86;
	}
	if (yych == '\n') goto yy84;
	if (yych <= '`') goto yy66;
	if (yych >= 'c') goto yy66;
yy87:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych == '\n') goto yy84;
	if (yych == 'b') goto yy87;
	goto yy66;
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
    if (count != expected) state.SkipWithError("error"); \
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
            fprintf(stderr, "wrong count, expected %ld, got %ld\n", expected, count); \
        } \
        break; \
    case -1: \
        fprintf(stderr, "syntax error\n"); \
        break; \
    case -2: \
        fprintf(stderr, "yyfill error\n"); \
        break; \
    } \
    free_input(&in); \
    return count == expected; \
}
FN_TEST(simple)
FN_TEST(buffered_eof)
FN_TEST(buffered_scc)
#undef FN_TEST


} // namespace re2c_submatch_22__cat2_8
