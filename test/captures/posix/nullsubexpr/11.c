/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			yyt2 = YYCURSOR;
			yyt4 = NULL;
			goto yy2;
		case 'z':
			yyt1 = YYCURSOR;
			yyt2 = YYCURSOR;
			goto yy3;
		default:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			yyt3 = NULL;
			yyt4 = NULL;
			goto yy1;
	}
yy1:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt4;
	if (yypmatch[4] != NULL) yypmatch[4] -= 1;
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			yyt4 = NULL;
			goto yy2;
		case 'z':
			yyt2 = YYCURSOR;
			goto yy3;
		default:
			yyt3 = YYCURSOR;
			goto yy1;
	}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt2 = YYCURSOR;
			yyt4 = NULL;
			goto yy2;
		case 'z': goto yy3;
		default:
			yyt3 = YYCURSOR;
			yyt4 = YYCURSOR;
			goto yy1;
	}
}

captures/posix/nullsubexpr/11.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/nullsubexpr/11.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/nullsubexpr/11.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
