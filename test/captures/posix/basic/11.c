/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			goto yy1;
		case 'a':
		case 'b':
			yyt1 = YYCURSOR;
			goto yy4;
		default:
			yyt1 = YYCURSOR;
			yyt2 = NULL;
			goto yy2;
	}
yy1:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	if (yypmatch[2] != NULL) yypmatch[2] -= 1;
	{}
yy2:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy3:
	if (yych <= 0x00) goto yy1;
	goto yy2;
yy4:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR;
	goto yy3;
}

captures/posix/basic/11.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/basic/11.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/basic/11.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
