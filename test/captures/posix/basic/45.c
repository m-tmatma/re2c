/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e': goto yy2;
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
		case 'f': goto yy4;
		default: goto yy3;
	}
yy3:
	YYCURSOR = YYMARKER;
	goto yy1;
yy4:
	++YYCURSOR;
	yynmatch = 2;
	yypmatch[0] = YYCURSOR;
	yypmatch[0] -= 2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR;
	yypmatch[2] -= 2;
	yypmatch[3] = YYCURSOR;
	yypmatch[3] -= 1;
	{}
}

captures/posix/basic/45.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
