/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR;
	if (yych >= 0x01) goto yy2;
yy1:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yypmatch[1];
	{}
yy2:
	++YYCURSOR;
	goto yy1;
}

captures/posix/glennfowler/05.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/glennfowler/05.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
captures/posix/glennfowler/05.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
