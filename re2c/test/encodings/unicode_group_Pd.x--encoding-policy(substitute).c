/* Generated by re2c */
#line 1 "encodings/unicode_group_Pd.x--encoding-policy(substitute).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Pd:
	
#line 13 "encodings/unicode_group_Pd.x--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x2E19) {
		if (yych <= 0x13FF) {
			if (yych <= 0x0589) {
				if (yych == '-') goto yy4;
			} else {
				if (yych <= 0x058A) goto yy4;
				if (yych == 0x05BE) goto yy4;
			}
		} else {
			if (yych <= 0x200F) {
				if (yych <= 0x1400) goto yy4;
				if (yych == 0x1806) goto yy4;
			} else {
				if (yych <= 0x2015) goto yy4;
				if (yych == 0x2E17) goto yy4;
			}
		}
	} else {
		if (yych <= 0xFE30) {
			if (yych <= 0x302F) {
				if (yych <= 0x2E1A) goto yy4;
				if (yych == 0x301C) goto yy4;
			} else {
				if (yych <= 0x3030) goto yy4;
				if (yych == 0x30A0) goto yy4;
			}
		} else {
			if (yych <= 0xFE62) {
				if (yych <= 0xFE32) goto yy4;
				if (yych == 0xFE58) goto yy4;
			} else {
				if (yych <= 0xFE63) goto yy4;
				if (yych == 0xFF0D) goto yy4;
			}
		}
	}
	++YYCURSOR;
#line 13 "encodings/unicode_group_Pd.x--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 56 "encodings/unicode_group_Pd.x--encoding-policy(substitute).c"
yy4:
	++YYCURSOR;
#line 12 "encodings/unicode_group_Pd.x--encoding-policy(substitute).re"
	{ goto Pd; }
#line 61 "encodings/unicode_group_Pd.x--encoding-policy(substitute).c"
}
#line 14 "encodings/unicode_group_Pd.x--encoding-policy(substitute).re"

}
static const unsigned int chars_Pd [] = {0x2d,0x2d,  0x58a,0x58a,  0x5be,0x5be,  0x1400,0x1400,  0x1806,0x1806,  0x2010,0x2015,  0x2e17,0x2e17,  0x2e1a,0x2e1a,  0x301c,0x301c,  0x3030,0x3030,  0x30a0,0x30a0,  0xfe31,0xfe32,  0xfe58,0xfe58,  0xfe63,0xfe63,  0xff0d,0xff0d,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned short * s)
{
	unsigned short * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Pd = new YYCTYPE [44];
	unsigned int buffer_len = encode_utf16 (chars_Pd, sizeof (chars_Pd) / sizeof (unsigned int), buffer_Pd);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Pd), reinterpret_cast<const YYCTYPE *> (buffer_Pd + buffer_len)))
		printf("test 'Pd' failed\n");
	delete [] buffer_Pd;
	return 0;
}
