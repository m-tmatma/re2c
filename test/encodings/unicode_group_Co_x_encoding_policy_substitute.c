/* Generated by re2c */
#line 1 "encodings/unicode_group_Co_x_encoding_policy_substitute.re"
// re2c $INPUT -o $OUTPUT -x --encoding-policy substitute
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Co:
	
#line 14 "encodings/unicode_group_Co_x_encoding_policy_substitute.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0xDBFE) {
		if (yych <= 0xDB7F) goto yy2;
		if (yych == 0xDBBF) goto yy5;
		goto yy4;
	} else {
		if (yych <= 0xDBFF) goto yy5;
		if (yych <= 0xDFFF) goto yy2;
		if (yych <= 0xF8FF) goto yy6;
	}
yy2:
	++YYCURSOR;
yy3:
#line 14 "encodings/unicode_group_Co_x_encoding_policy_substitute.re"
	{ return YYCURSOR == limit; }
#line 32 "encodings/unicode_group_Co_x_encoding_policy_substitute.c"
yy4:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy3;
	if (yych <= 0xDFFF) goto yy6;
	goto yy3;
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy3;
	if (yych >= 0xDFFE) goto yy3;
yy6:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Co_x_encoding_policy_substitute.re"
	{ goto Co; }
#line 46 "encodings/unicode_group_Co_x_encoding_policy_substitute.c"
}
#line 15 "encodings/unicode_group_Co_x_encoding_policy_substitute.re"

}
static const unsigned int chars_Co [] = {0xe000,0xf8ff,  0xf0000,0xffffd,  0x100000,0x10fffd,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
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
	unsigned int * buffer_Co = new unsigned int [274938];
	YYCTYPE * s = (YYCTYPE *) buffer_Co;
	unsigned int buffer_len = encode_utf16 (chars_Co, sizeof (chars_Co) / sizeof (unsigned int), buffer_Co);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Co[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Co' failed\n");
	delete [] buffer_Co;
	return 0;
}