/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'y': goto yy2;
		default: goto yy1;
	}
yy1:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'y': goto yy4;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	++YYCURSOR;
	yyt1 = YYCURSOR;
	yynmatch = 2;
	yypmatch[3] = yyt1;
	yypmatch[0] = YYCURSOR;
	yypmatch[0] -= 2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt1;
	if (yypmatch[2] != NULL) yypmatch[2] -= 1;
	{}
}

captures/posix/other/13.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
