/* Generated by re2c */

{
	YYCTYPE yych;
	yyt1 = NULL;
	yyt2 = YYCURSOR;
	goto yy0;
yy1:
yy0:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		++YYCURSOR;
		goto yy3;
	default:	goto yy2;
	}
yy2:
	a = yyt1;
	{}
yy3:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	yyt1 = yyt2;
	yyt2 = YYCURSOR;
	goto yy1;
}

re2c: warning: line 3: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 3: tag 'a' has 2nd degree of nondeterminism [-Wnondeterministic-tags]
