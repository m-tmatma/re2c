/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	if (yych >= 0x01) {
		yyt1 = YYCURSOR;
		goto yy2;
	}
	yyt1 = YYCURSOR;
	yyt2 = YYCURSOR;
yy1:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = YYCURSOR;
	{}
yy2:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt2 = YYCURSOR;
		goto yy1;
	}
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR;
	if (yych <= 0x00) goto yy1;
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy1;
	++YYCURSOR;
	goto yy1;
}

captures/posix/glennfowler/12.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/glennfowler/12.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/glennfowler/12.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
