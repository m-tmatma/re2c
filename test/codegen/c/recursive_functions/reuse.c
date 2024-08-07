/* Generated by re2c */
// re2c $INPUT -o $OUTPUT --input-encoding utf8 --recursive-functions -i

// This example supports multiple input encodings: UTF-8 and UTF-32.
// Both lexers are generated from the same rules block, and the use
// blocks add only encoding-specific configurations.

#include <assert.h>
#include <stdint.h>



struct State8 {
    const uint8_t* cur;
    const uint8_t* mar;
};


int yy0(State8& st);
int yy1(State8& st);
int yy2(State8& st);
int yy3(State8& st);
int yy4(State8& st);
int yy5(State8& st);
int yy6(State8& st);
int yy7(State8& st);
int yy8(State8& st);
int yy9(State8& st);
int yy10(State8& st);
int yy11(State8& st);
int yy12(State8& st);
int lex_utf8(State8& st);

int yy0(State8& st) {
	uint8_t yych = *st.cur++;
	switch (yych) {
		case 0xE2: return yy3(st);
		default: return yy1(st);
	}
}

int yy1(State8& st) {
	return yy2(st);
}

int yy2(State8& st) {
	return 1;
}

int yy3(State8& st) {
	uint8_t yych = *(st.mar = st.cur);
	switch (yych) {
		case 0x88:
			++st.cur;
			return yy4(st);
		default: return yy2(st);
	}
}

int yy4(State8& st) {
	uint8_t yych = *st.cur;
	switch (yych) {
		case 0x80:
			++st.cur;
			return yy6(st);
		default: return yy5(st);
	}
}

int yy5(State8& st) {
	st.cur = st.mar;
	return yy2(st);
}

int yy6(State8& st) {
	uint8_t yych = *st.cur;
	switch (yych) {
		case 'x':
			++st.cur;
			return yy7(st);
		default: return yy5(st);
	}
}

int yy7(State8& st) {
	uint8_t yych = *st.cur;
	switch (yych) {
		case ' ':
			++st.cur;
			return yy8(st);
		default: return yy5(st);
	}
}

int yy8(State8& st) {
	uint8_t yych = *st.cur;
	switch (yych) {
		case 0xE2:
			++st.cur;
			return yy9(st);
		default: return yy5(st);
	}
}

int yy9(State8& st) {
	uint8_t yych = *st.cur;
	switch (yych) {
		case 0x88:
			++st.cur;
			return yy10(st);
		default: return yy5(st);
	}
}

int yy10(State8& st) {
	uint8_t yych = *st.cur;
	switch (yych) {
		case 0x83:
			++st.cur;
			return yy11(st);
		default: return yy5(st);
	}
}

int yy11(State8& st) {
	uint8_t yych = *st.cur;
	switch (yych) {
		case 'y':
			++st.cur;
			return yy12(st);
		default: return yy5(st);
	}
}

int yy12(State8& st) {
	return 0;
}

int lex_utf8(State8& st) {
	return yy0(st);
}



struct State32 {
    const uint32_t* cur;
    const uint32_t* mar;
};


int yy13(State32& st);
int yy14(State32& st);
int yy15(State32& st);
int yy16(State32& st);
int yy17(State32& st);
int yy18(State32& st);
int yy19(State32& st);
int yy20(State32& st);
int yy21(State32& st);
int lex_utf32(State32& st);

int yy13(State32& st) {
	uint32_t yych = *st.cur++;
	if (yych == 0x00002200) return yy16(st);
	else return yy14(st);
}

int yy14(State32& st) {
	return yy15(st);
}

int yy15(State32& st) {
	return 1;
}

int yy16(State32& st) {
	uint32_t yych = *(st.mar = st.cur);
	if (yych == 'x') {
		++st.cur;
		return yy17(st);
	} else {
		return yy15(st);
	}
}

int yy17(State32& st) {
	uint32_t yych = *st.cur;
	if (yych == ' ') {
		++st.cur;
		return yy19(st);
	} else {
		return yy18(st);
	}
}

int yy18(State32& st) {
	st.cur = st.mar;
	return yy15(st);
}

int yy19(State32& st) {
	uint32_t yych = *st.cur;
	if (yych == 0x00002203) {
		++st.cur;
		return yy20(st);
	} else {
		return yy18(st);
	}
}

int yy20(State32& st) {
	uint32_t yych = *st.cur;
	if (yych == 'y') {
		++st.cur;
		return yy21(st);
	} else {
		return yy18(st);
	}
}

int yy21(State32& st) {
	return 0;
}

int lex_utf32(State32& st) {
	return yy13(st);
}



int main() {
    static const uint8_t s8[] = // UTF-8
        { 0xe2, 0x88, 0x80, 0x78, 0x20, 0xe2, 0x88, 0x83, 0x79 };
    State8 st8 = {s8, nullptr};

    static const uint32_t s32[] = // UTF32
        { 0x00002200, 0x00000078, 0x00000020, 0x00002203, 0x00000079 };
    State32 st32 = {s32, nullptr};

    assert(lex_utf8(st8) == 0);
    assert(lex_utf32(st32) == 0);
    return 0;
}

