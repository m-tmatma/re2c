/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
// incorrect automaton if mapping of TDFA states ignores version order

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			goto yy2;
		default:
			yyt1 = NULL;
			goto yy1;
	}
yy1:
	t = yyt1;
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default: goto yy1;
	}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default:
			yyt1 = yyt2;
			goto yy1;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy1;
	}
}

tags/map_ord1.re:5:22: warning: rule matches empty string [-Wmatch-empty-string]
tags/map_ord1.re:5:22: warning: tag `t` has 2nd degree of nondeterminism [-Wnondeterministic-tags]
