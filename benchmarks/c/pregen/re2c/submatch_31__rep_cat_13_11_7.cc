/* Generated by re2c */
#line 1 "../../../benchmarks/c/src/re2c/submatch_31__rep_cat_13_11_7.re"
#include "re2c/base.h"

namespace re2c_submatch_31__rep_cat_13_11_7 {

#line 15 "../../../benchmarks/c/src/re2c/submatch_31__rep_cat_13_11_7.re"


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

#line 1 "../../../benchmarks/c/src/re2c/base.re"
#line 11 "../../../benchmarks/c/src/re2c/base.re"


struct input_t {
    FILE* file;
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    
#line 42 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
#line 20 "../../../benchmarks/c/src/re2c/base.re"

    
#line 46 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
taglist_t *yytm1;
taglist_t *yytm2;
taglist_t *yytm3;
#line 21 "../../../benchmarks/c/src/re2c/base.re"

    taglistpool_t tlp;
    int eof;
};

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in) {
    tlp->next = tlp->head;
    
#line 59 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
in->yytm1 = 0;
in->yytm2 = 0;
in->yytm3 = 0;
#line 28 "../../../benchmarks/c/src/re2c/base.re"

}

static inline void taglistpool_init(taglistpool_t *tlp) {
    static const unsigned size = 1024 * 1024;
    tlp->head = (taglist_t*)malloc(size * sizeof(taglist_t));
    tlp->next = tlp->head;
    tlp->last = tlp->head + size;
}

static inline void taglistpool_free(taglistpool_t *tlp) {
    free(tlp->head);
    tlp->head = tlp->next = tlp->last = NULL;
}

static inline void taglist(taglist_t **ptl, const char *b, const char *t, taglistpool_t *tlp) {
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

static inline void free_input(input_t *in) {
    free(in->buf);
    taglistpool_free(&in->tlp);
    fclose(in->file);
}

#line 74 "../../../benchmarks/c/src/re2c/base.re"


#line 79 "../../../benchmarks/c/src/re2c/base.re"


#line 111 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
#define YYMAXFILL 2
#line 81 "../../../benchmarks/c/src/re2c/base.re"


static inline int fill_eofrule(input_t *in) {
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free > 0);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 129 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
#line 95 "../../../benchmarks/c/src/re2c/base.re"


    in->lim += fread(in->lim, 1, free, in->file);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline int fill_padding(input_t *in, size_t need) {
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free >= need);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 156 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
#line 119 "../../../benchmarks/c/src/re2c/base.re"


    in->lim += fread(in->lim, 1, free, in->file);

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }

    return 0;
}

static inline void init_input_eofrule(input_t *in, const char* fname) {
    in->file = fopen(fname, "rb");
    in->buf = (char*) malloc(SIZE + 1);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 179 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
#line 139 "../../../benchmarks/c/src/re2c/base.re"

    
#line 183 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
in->yytm1 = 0;
in->yytm2 = 0;
in->yytm3 = 0;
#line 140 "../../../benchmarks/c/src/re2c/base.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill_eofrule(in);
}

static inline void init_input_padding(input_t *in, const char* fname) {
    in->file = fopen(fname, "rb");
    in->buf = (char*) malloc(SIZE + YYMAXFILL);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 202 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
#line 153 "../../../benchmarks/c/src/re2c/base.re"

    
#line 206 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
in->yytm1 = 0;
in->yytm2 = 0;
in->yytm3 = 0;
#line 154 "../../../benchmarks/c/src/re2c/base.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
}

int lex_yyfill_eofrule(input_t *in) {
    long count = 0;
    
#line 219 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
#line 161 "../../../benchmarks/c/src/re2c/base.re"

    
#line 223 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
taglist_t* t1;taglist_t* t2;taglist_t* t3;
#line 162 "../../../benchmarks/c/src/re2c/base.re"

loop:
    in->tok = in->cur;
    
#line 230 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
{
	char yych;
yyFillLabel0:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm3, in->tok, in->tok - 1, &in->tlp);
			taglist(&in->yytm2, in->tok, in->tok - 1, &in->tlp);
			taglist(&in->yytm1, in->tok, in->tok - 1, &in->tlp);
			goto yy3;
		case 'a': goto yy4;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel0;
				goto yy37;
			}
			goto yy1;
	}
yy1:
	++in->cur;
yy2:
#line 8 "../../../benchmarks/c/src/re2c/submatch_31__rep_cat_13_11_7.re"
	{ return -1; }
#line 254 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
yy3:
	++in->cur;
	t1 = in->yytm1;
	t2 = in->yytm2;
	t3 = in->yytm3;
#line 9 "../../../benchmarks/c/src/re2c/submatch_31__rep_cat_13_11_7.re"
	{
        print(count, in->tok, t1, t2, t3);
        OUTC('\n');
        taglistpool_clear(&in->tlp, in);
        goto loop;
    }
#line 267 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
yy4:
	in->mar = ++in->cur;
yyFillLabel1:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy5;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy5:
	++in->cur;
yyFillLabel2:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy7;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel2;
			}
			goto yy6;
	}
yy6:
	in->cur = in->mar;
	goto yy2;
yy7:
	++in->cur;
yyFillLabel3:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy8;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel3;
			}
			goto yy6;
	}
yy8:
	++in->cur;
yyFillLabel4:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy9;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel4;
			}
			goto yy6;
	}
yy9:
	++in->cur;
yyFillLabel5:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy10;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel5;
			}
			goto yy6;
	}
yy10:
	++in->cur;
yyFillLabel6:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy11;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel6;
			}
			goto yy6;
	}
yy11:
	++in->cur;
yyFillLabel7:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy12;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel7;
			}
			goto yy6;
	}
yy12:
	++in->cur;
yyFillLabel8:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy13;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel8;
			}
			goto yy6;
	}
yy13:
	++in->cur;
yyFillLabel9:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy14;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel9;
			}
			goto yy6;
	}
yy14:
	++in->cur;
yyFillLabel10:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy15;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel10;
			}
			goto yy6;
	}
yy15:
	++in->cur;
yyFillLabel11:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy16;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel11;
			}
			goto yy6;
	}
yy16:
	++in->cur;
yyFillLabel12:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy17;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel12;
			}
			goto yy6;
	}
yy17:
	++in->cur;
yyFillLabel13:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			taglist(&in->yytm1, in->tok, in->cur, &in->tlp);
			goto yy18;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel13;
			}
			goto yy6;
	}
yy18:
	++in->cur;
yyFillLabel14:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy19;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel14;
			}
			goto yy6;
	}
yy19:
	++in->cur;
yyFillLabel15:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy20;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel15;
			}
			goto yy6;
	}
yy20:
	++in->cur;
yyFillLabel16:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy21;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel16;
			}
			goto yy6;
	}
yy21:
	++in->cur;
yyFillLabel17:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy22;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel17;
			}
			goto yy6;
	}
yy22:
	++in->cur;
yyFillLabel18:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy23;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel18;
			}
			goto yy6;
	}
yy23:
	++in->cur;
yyFillLabel19:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy24;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel19;
			}
			goto yy6;
	}
yy24:
	++in->cur;
yyFillLabel20:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel20;
			}
			goto yy6;
	}
yy25:
	++in->cur;
yyFillLabel21:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy26;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel21;
			}
			goto yy6;
	}
yy26:
	++in->cur;
yyFillLabel22:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy27;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel22;
			}
			goto yy6;
	}
yy27:
	++in->cur;
yyFillLabel23:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy28;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel23;
			}
			goto yy6;
	}
yy28:
	++in->cur;
yyFillLabel24:
	yych = *in->cur;
	switch (yych) {
		case 'a':
			taglist(&in->yytm2, in->tok, in->cur, &in->tlp);
			goto yy29;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel24;
			}
			goto yy6;
	}
yy29:
	++in->cur;
yyFillLabel25:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy30;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel25;
			}
			goto yy6;
	}
yy30:
	++in->cur;
yyFillLabel26:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy31;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel26;
			}
			goto yy6;
	}
yy31:
	++in->cur;
yyFillLabel27:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy32;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel27;
			}
			goto yy6;
	}
yy32:
	++in->cur;
yyFillLabel28:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy33;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel28;
			}
			goto yy6;
	}
yy33:
	++in->cur;
yyFillLabel29:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy34;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel29;
			}
			goto yy6;
	}
yy34:
	++in->cur;
yyFillLabel30:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy35;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel30;
			}
			goto yy6;
	}
yy35:
	++in->cur;
yyFillLabel31:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
			goto yy3;
		case 'a':
			taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
			goto yy36;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel31;
			}
			goto yy6;
	}
yy36:
	++in->cur;
yyFillLabel32:
	yych = *in->cur;
	switch (yych) {
		case 'a': goto yy5;
		default:
			if (in->lim <= in->cur) {
				if (fill_eofrule(in) == 0) goto yyFillLabel32;
			}
			goto yy6;
	}
yy37:
#line 73 "../../../benchmarks/c/src/re2c/base.re"
	{ return count; }
#line 667 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
}
#line 169 "../../../benchmarks/c/src/re2c/base.re"

}

int lex_yyfill_padding(input_t *in) {
    long count = 0;
    
#line 676 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
#line 174 "../../../benchmarks/c/src/re2c/base.re"

    
#line 680 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
taglist_t* t1;taglist_t* t2;taglist_t* t3;
#line 175 "../../../benchmarks/c/src/re2c/base.re"

loop:
    in->tok = in->cur;
    
#line 687 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
{
	char yych;
	if ((in->lim - in->cur) < 2) if (fill_padding(in, 2) != 0) return -2;
	yych = *in->cur;
	if (yych <= '\n') {
		if (yych <= 0x00) goto yy39;
		if (yych <= '\t') goto yy40;
		taglist(&in->yytm3, in->tok, in->tok - 1, &in->tlp);
		taglist(&in->yytm2, in->tok, in->tok - 1, &in->tlp);
		taglist(&in->yytm1, in->tok, in->tok - 1, &in->tlp);
		goto yy42;
	} else {
		if (yych == 'a') goto yy43;
		goto yy40;
	}
yy39:
	++in->cur;
#line 78 "../../../benchmarks/c/src/re2c/base.re"
	{ return count; }
#line 707 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
yy40:
	++in->cur;
yy41:
#line 8 "../../../benchmarks/c/src/re2c/submatch_31__rep_cat_13_11_7.re"
	{ return -1; }
#line 713 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
yy42:
	++in->cur;
	t1 = in->yytm1;
	t2 = in->yytm2;
	t3 = in->yytm3;
#line 9 "../../../benchmarks/c/src/re2c/submatch_31__rep_cat_13_11_7.re"
	{
        print(count, in->tok, t1, t2, t3);
        OUTC('\n');
        taglistpool_clear(&in->tlp, in);
        goto loop;
    }
#line 726 "gen/re2c/submatch_31__rep_cat_13_11_7.cc"
yy43:
	yych = *(in->mar = ++in->cur);
	if (yych != 'a') goto yy41;
yy44:
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych == 'a') goto yy46;
yy45:
	in->cur = in->mar;
	goto yy41;
yy46:
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	taglist(&in->yytm1, in->tok, in->cur, &in->tlp);
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	taglist(&in->yytm2, in->tok, in->cur, &in->tlp);
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych != 'a') goto yy45;
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych == '\n') {
		taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
		goto yy42;
	}
	if (yych != 'a') goto yy45;
	taglist(&in->yytm3, in->tok, in->cur, &in->tlp);
	++in->cur;
	if (in->lim <= in->cur) if (fill_padding(in, 1) != 0) return -2;
	yych = *in->cur;
	if (yych == 'a') goto yy44;
	goto yy45;
}
#line 183 "../../../benchmarks/c/src/re2c/base.re"

}

#define FN_BENCH(suffix) \
void bench_yyfill_##suffix::operator()( \
        benchmark::State &state, const char* input, long expected) const { \
    long count; \
    for (auto _ : state) { \
        input_t in; \
        init_input_##suffix(&in, input); \
        count = lex_yyfill_##suffix(&in); \
        free_input(&in); \
    } \
    if (count != expected) state.SkipWithError("error"); \
}
FN_BENCH(eofrule)
FN_BENCH(padding)
#undef FN_BENCH

#define FN_TEST(suffix) \
bool test_yyfill_##suffix(const char* input, long expected) { \
    input_t in; \
    init_input_##suffix(&in, input); \
    \
    long count = lex_yyfill_##suffix(&in); \
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
    \
    free_input(&in); \
    return count == expected; \
}
FN_TEST(eofrule)
FN_TEST(padding)
#undef FN_TEST
#line 36 "../../../benchmarks/c/src/re2c/submatch_31__rep_cat_13_11_7.re"


} // namespace re2c_submatch_31__rep_cat_13_11_7
