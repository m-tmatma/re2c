/* Generated by re2c */
#include "re2c/base.h"

namespace re2c_submatch_31__rep_cat_13_11_7 {



static const char *print(long& count,
        const char *tok, const taglist_t *t1, const taglist_t *t2, const taglist_t *t3) {
    if (!t1) return tok;

    const char *p0 = print(count, tok, t1->pred, t2->pred, t3->pred);
    const char *p1 = tok + t1->dist;
    const char *p2 = tok + t2->dist;
    const char *p3 = tok + t3->dist;

    OUTS(p0, p1);
    OUTC('.');
    OUTS(p1, p2);
    OUTC('.');
    OUTS(p2, p3);
    OUTC(';');

    return p3;
}



#define YYMAXFILL 2


struct input_t {
    FILE* file;
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    
    taglist_t *yytm1;
taglist_t *yytm2;
taglist_t *yytm3;

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
    
    in->yytm1 = 0;
in->yytm2 = 0;
in->yytm3 = 0;

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
    
    in->yytm1 = 0;
in->yytm2 = 0;
in->yytm3 = 0;

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
    
    in->yytm1 = 0;
in->yytm2 = 0;
in->yytm3 = 0;

    taglistpool_init(&in->tlp);
    in->eof = 0;
}

#define YYCURSOR cur
#define YYMARKER mar
#define YYTOKEN tok
#define TLP_CLEAR() do { \
    in->tlp.next = in->tlp.head; \
    yytm1 = 0;yytm2 = 0;yytm3 = 0; \
} while (0)

int lex_simple(input_t *in) {
    char *cur = in->buf, *mar, *tok;
    (void) tok; // may be unused
    
    taglist_t *yytm1 = nullptr;
taglist_t *yytm2 = nullptr;
taglist_t *yytm3 = nullptr;

    
    taglist_t* t1;taglist_t* t2;taglist_t* t3;
    long count = 0;
loop:
    tok = cur;
    
{
	char yych;
	yych = *YYCURSOR;
	if (yych <= '\n') {
		if (yych <= 0x00) goto yy1;
		if (yych <= '\t') goto yy2;
		taglist(&yytm3, YYTOKEN, YYTOKEN - 1, &in->tlp);
		taglist(&yytm2, YYTOKEN, YYTOKEN - 1, &in->tlp);
		taglist(&yytm1, YYTOKEN, YYTOKEN - 1, &in->tlp);
		goto yy4;
	} else {
		if (yych == 'a') goto yy5;
		goto yy2;
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
	t1 = yytm1;
	t2 = yytm2;
	t3 = yytm3;
	{
        print(count, YYTOKEN, t1, t2, t3);
        OUTC('\n');
        TLP_CLEAR();
        goto loop;
    }
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych != 'a') goto yy3;
yy6:
	yych = *++YYCURSOR;
	if (yych == 'a') goto yy8;
yy7:
	YYCURSOR = YYMARKER;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	taglist(&yytm1, YYTOKEN, YYCURSOR, &in->tlp);
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	taglist(&yytm2, YYTOKEN, YYCURSOR, &in->tlp);
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych != 'a') goto yy7;
	yych = *++YYCURSOR;
	if (yych == '\n') {
		taglist(&yytm3, YYTOKEN, YYCURSOR, &in->tlp);
		goto yy4;
	}
	if (yych != 'a') goto yy7;
	taglist(&yytm3, YYTOKEN, YYCURSOR, &in->tlp);
	yych = *++YYCURSOR;
	if (yych == 'a') goto yy6;
	goto yy7;
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
    in->yytm1 = 0;in->yytm2 = 0;in->yytm3 = 0; \
} while (0)

int lex_buffered_eof(input_t *in) {
    
    taglist_t* t1;taglist_t* t2;taglist_t* t3;
    long count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			taglist(&in->yytm3, YYTOKEN, YYTOKEN - 1, &in->tlp);
			taglist(&in->yytm2, YYTOKEN, YYTOKEN - 1, &in->tlp);
			taglist(&in->yytm1, YYTOKEN, YYTOKEN - 1, &in->tlp);
			goto yy12;
		case 'a': goto yy13;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel0;
				goto yy46;
			}
			goto yy10;
	}
yy10:
	++YYCURSOR;
yy11:
	{ return -1; }
yy12:
	++YYCURSOR;
	t1 = in->yytm1;
	t2 = in->yytm2;
	t3 = in->yytm3;
	{
        print(count, YYTOKEN, t1, t2, t3);
        OUTC('\n');
        TLP_CLEAR();
        goto loop;
    }
yy13:
	YYMARKER = ++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy14;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel1;
			}
			goto yy11;
	}
yy14:
	++YYCURSOR;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy16;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel2;
			}
			goto yy15;
	}
yy15:
	YYCURSOR = YYMARKER;
	goto yy11;
yy16:
	++YYCURSOR;
yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy17;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel3;
			}
			goto yy15;
	}
yy17:
	++YYCURSOR;
yyFillLabel4:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy18;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel4;
			}
			goto yy15;
	}
yy18:
	++YYCURSOR;
yyFillLabel5:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy19;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel5;
			}
			goto yy15;
	}
yy19:
	++YYCURSOR;
yyFillLabel6:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy20;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel6;
			}
			goto yy15;
	}
yy20:
	++YYCURSOR;
yyFillLabel7:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy21;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel7;
			}
			goto yy15;
	}
yy21:
	++YYCURSOR;
yyFillLabel8:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy22;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel8;
			}
			goto yy15;
	}
yy22:
	++YYCURSOR;
yyFillLabel9:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy23;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel9;
			}
			goto yy15;
	}
yy23:
	++YYCURSOR;
yyFillLabel10:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy24;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel10;
			}
			goto yy15;
	}
yy24:
	++YYCURSOR;
yyFillLabel11:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy25;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel11;
			}
			goto yy15;
	}
yy25:
	++YYCURSOR;
yyFillLabel12:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy26;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel12;
			}
			goto yy15;
	}
yy26:
	++YYCURSOR;
yyFillLabel13:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			taglist(&in->yytm1, YYTOKEN, YYCURSOR, &in->tlp);
			goto yy27;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel13;
			}
			goto yy15;
	}
yy27:
	++YYCURSOR;
yyFillLabel14:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy28;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel14;
			}
			goto yy15;
	}
yy28:
	++YYCURSOR;
yyFillLabel15:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy29;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel15;
			}
			goto yy15;
	}
yy29:
	++YYCURSOR;
yyFillLabel16:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy30;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel16;
			}
			goto yy15;
	}
yy30:
	++YYCURSOR;
yyFillLabel17:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy31;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel17;
			}
			goto yy15;
	}
yy31:
	++YYCURSOR;
yyFillLabel18:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy32;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel18;
			}
			goto yy15;
	}
yy32:
	++YYCURSOR;
yyFillLabel19:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy33;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel19;
			}
			goto yy15;
	}
yy33:
	++YYCURSOR;
yyFillLabel20:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy34;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel20;
			}
			goto yy15;
	}
yy34:
	++YYCURSOR;
yyFillLabel21:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy35;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel21;
			}
			goto yy15;
	}
yy35:
	++YYCURSOR;
yyFillLabel22:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy36;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel22;
			}
			goto yy15;
	}
yy36:
	++YYCURSOR;
yyFillLabel23:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy37;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel23;
			}
			goto yy15;
	}
yy37:
	++YYCURSOR;
yyFillLabel24:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			taglist(&in->yytm2, YYTOKEN, YYCURSOR, &in->tlp);
			goto yy38;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel24;
			}
			goto yy15;
	}
yy38:
	++YYCURSOR;
yyFillLabel25:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy39;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel25;
			}
			goto yy15;
	}
yy39:
	++YYCURSOR;
yyFillLabel26:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel26;
			}
			goto yy15;
	}
yy40:
	++YYCURSOR;
yyFillLabel27:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy41;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel27;
			}
			goto yy15;
	}
yy41:
	++YYCURSOR;
yyFillLabel28:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy42;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel28;
			}
			goto yy15;
	}
yy42:
	++YYCURSOR;
yyFillLabel29:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy43;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel29;
			}
			goto yy15;
	}
yy43:
	++YYCURSOR;
yyFillLabel30:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy44;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel30;
			}
			goto yy15;
	}
yy44:
	++YYCURSOR;
yyFillLabel31:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			taglist(&in->yytm3, YYTOKEN, YYCURSOR, &in->tlp);
			goto yy12;
		case 'a':
			taglist(&in->yytm3, YYTOKEN, YYCURSOR, &in->tlp);
			goto yy45;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel31;
			}
			goto yy15;
	}
yy45:
	++YYCURSOR;
yyFillLabel32:
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy14;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel32;
			}
			goto yy15;
	}
yy46:
	{ return count; }
}

}

int lex_buffered_scc(input_t *in) {
    
    taglist_t* t1;taglist_t* t2;taglist_t* t3;
    long count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
	if ((YYLIMIT - YYCURSOR) < 2) if (fill_buffered_scc(in, 2) != 0) return -2;
	yych = *YYCURSOR;
	if (yych <= '\n') {
		if (yych <= 0x00) goto yy48;
		if (yych <= '\t') goto yy49;
		taglist(&in->yytm3, YYTOKEN, YYTOKEN - 1, &in->tlp);
		taglist(&in->yytm2, YYTOKEN, YYTOKEN - 1, &in->tlp);
		taglist(&in->yytm1, YYTOKEN, YYTOKEN - 1, &in->tlp);
		goto yy51;
	} else {
		if (yych == 'a') goto yy52;
		goto yy49;
	}
yy48:
	++YYCURSOR;
	{ return count; }
yy49:
	++YYCURSOR;
yy50:
	{ return -1; }
yy51:
	++YYCURSOR;
	t1 = in->yytm1;
	t2 = in->yytm2;
	t3 = in->yytm3;
	{
        print(count, YYTOKEN, t1, t2, t3);
        OUTC('\n');
        TLP_CLEAR();
        goto loop;
    }
yy52:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych != 'a') goto yy50;
yy53:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych == 'a') goto yy55;
yy54:
	YYCURSOR = YYMARKER;
	goto yy50;
yy55:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	taglist(&in->yytm1, YYTOKEN, YYCURSOR, &in->tlp);
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	taglist(&in->yytm2, YYTOKEN, YYCURSOR, &in->tlp);
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych != 'a') goto yy54;
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych == '\n') {
		taglist(&in->yytm3, YYTOKEN, YYCURSOR, &in->tlp);
		goto yy51;
	}
	if (yych != 'a') goto yy54;
	taglist(&in->yytm3, YYTOKEN, YYCURSOR, &in->tlp);
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	if (yych == 'a') goto yy53;
	goto yy54;
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


} // namespace re2c_submatch_31__rep_cat_13_11_7
