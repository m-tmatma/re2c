/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures --dump-interf --fixed-tags toplevel

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy2;
		case 'b':
			yyt1 = NULL;
			yyt2 = NULL;
			yyt3 = YYCURSOR;
			goto yy4;
		default: goto yy1;
	}
yy1:
	++YYCURSOR;
	{}
yy2:
	++YYCURSOR;
	yyt2 = YYCURSOR;
	yyt3 = NULL;
	yyt4 = NULL;
yy3:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[0] = YYCURSOR;
	yypmatch[0] -= 1;
	yypmatch[1] = YYCURSOR;
	{}
yy4:
	++YYCURSOR;
	yyt4 = YYCURSOR;
	goto yy3;
}

 1  2  3  4  5  6  7  8 
 .  *  *  *  .  .  .  . 
 *  .  *  *  .  *  .  . 
 *  *  .  *  .  *  *  . 
 *  *  *  .  .  .  .  . 
 .  .  .  .  .  .  .  . 
 .  *  *  .  .  .  .  * 
 .  .  *  .  .  .  .  * 
 .  .  .  .  .  *  *  . 
 1  2  3  4 
 .  *  *  * 
 *  .  *  * 
 *  *  .  * 
 *  *  *  . 
