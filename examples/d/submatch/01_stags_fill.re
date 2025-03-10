// re2d $INPUT -o $OUTPUT --tags
module main;

import core.stdc.string;
import core.stdc.stdio;
import std.stdio;

enum BUFSIZE = 4095;

struct Input {
    FILE* file;
    char[BUFSIZE + 1] buffer;// +1 for sentinel
    char* yylimit, yycursor, yymarker, token;
    // Intermediate tag variables must be part of the lexer state passed to YYFILL.
    // They don't correspond to tags and should be autogenerated by re2c.
    /*!stags:re2c format = 'char* @@;'; */
    bool eof;
};

struct SemVer {
    int major;
    int minor;
    int patch;
};

private int s2n(const(char)* s, const(char)* e) { // pre-parsed string to number
    int n = 0;
    for (; s < e; ++s) n = n * 10 + (*s - '0');
    return n;
}

private int fill(ref Input it) {
    if (it.eof) return 1;

    const size_t shift = it.token - it.buffer.ptr;
    const size_t used = it.yylimit - it.token;

    // Error: lexeme too long. In real life could reallocate a larger buffer.
    if (shift < 1) return 2;

    // Shift buffer contents (discard everything up to the current token).
    memmove(cast(void*)it.buffer.ptr, it.token, used);
    it.yylimit -= shift;
    it.yycursor -= shift;
    it.yymarker -= shift;
    it.token -= shift;
    // Tag variables need to be shifted like other input positions. The check
    // for non-null is only needed if some tags are nested inside of alternative
    // or repetition, so that they can have null value.
    /*!stags:re2c format = "if (it.@@) it.@@ -= shift;\n"; */

    // Fill free space at the end of buffer with new data from file.
    it.yylimit += fread(it.yylimit, 1, BUFSIZE - used, it.file);
    it.yylimit[0] = 0;
    it.eof = it.yylimit < (it.buffer.ptr + BUFSIZE);
    return 0;
}

private bool lex(ref Input yyrecord, ref SemVer[] vers) {
    // Final variables available in semantic actions.
    /*!svars:re2c format = 'char* @@;'; */
    for (;;) {
        yyrecord.token = yyrecord.yycursor;
    /*!re2c
        re2c:api = record;
        re2c:YYCTYPE = "char";
        re2c:YYFILL = "fill(yyrecord) == 0";
        re2c:eof = 0;

        num = [0-9]+;

        num @t1 "." @t2 num @t3 ("." @t4 num)? [\n] {
            int major = s2n(yyrecord.token, t1);
            int minor = s2n(t2, t3);
            int patch = t4 != null ? s2n(t4, yyrecord.yycursor - 1) : 0;
            SemVer ver = SemVer(major, minor, patch);
            vers ~= ver;
            continue;
        }
        $ { return true; }
        * { return false; }
    */
    }
    assert(0);
}

void main() {
    const char[] fname = "input";
    const char[] content = "1.22.333\n' ";

    SemVer[BUFSIZE] expect = SemVer(1, 22, 333);
    SemVer[] actual;

    // Prepare input file: a few times the size of the buffer, containing
    // strings with zeroes and escaped quotes.
    FILE* f = fopen(fname.ptr, "w");
    for (int i = 0; i < BUFSIZE; ++i) {
        fwrite(cast(const(void*)) content.ptr, 1, content.length - 2, f); // skip null-terminator
    }
    fclose(f);

    // Initialize lexer state: all pointers are at the end of buffer.
    Input it;
    it.file = fopen(fname.ptr, "r");
    it.yycursor = it.yymarker = it.token = it.yylimit = it.buffer.ptr + BUFSIZE;
    it.eof = 0;
    // Sentinel (at YYLIMIT pointer) is set to zero, which triggers YYFILL.
    it.yylimit[0] = 0;

    // Run the lexer.
    assert(lex(it, actual) && actual == expect);

    // Cleanup: remove input file.
    fclose(it.file);
    remove(fname.ptr);
}
