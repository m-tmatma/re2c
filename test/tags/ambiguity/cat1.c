/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
yy2:
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy4;
		default: goto yy2;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy4;
		default: goto yy5;
	}
yy5:
	p = yyt1;
	{ @p }
}

tags/ambiguity/cat1.re:3:17: warning: tag `p` has 2nd degree of nondeterminism [-Wnondeterministic-tags]
