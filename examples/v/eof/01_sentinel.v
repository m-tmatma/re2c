// Code generated by re2v, DO NOT EDIT.
//line "v/eof/01_sentinel.re":1
// re2v $INPUT -o $OUTPUT

// Expect a null-terminated string.
fn lex(yyinput string) int {
    mut yycursor := 0
    mut count := 0

loop: 
//line "v/eof/01_sentinel.v":12
    mut yych := 0
    yych = yyinput[yycursor]
    match yych {
        0x00 { unsafe { goto yy1 } }
        0x20 { unsafe { goto yy3 } }
        0x61...0x7A { unsafe { goto yy5 } }
        else { unsafe { goto yy2 } }
    }
yy1:
    yycursor += 1
//line "v/eof/01_sentinel.re":12
    return count
//line "v/eof/01_sentinel.v":25
yy2:
    yycursor += 1
//line "v/eof/01_sentinel.re":11
    return -1
//line "v/eof/01_sentinel.v":30
yy3:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x20 { unsafe { goto yy3 } }
        else { unsafe { goto yy4 } }
    }
yy4:
//line "v/eof/01_sentinel.re":14
    unsafe { goto loop }
//line "v/eof/01_sentinel.v":41
yy5:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x61...0x7A { unsafe { goto yy5 } }
        else { unsafe { goto yy6 } }
    }
yy6:
//line "v/eof/01_sentinel.re":13
    count += 1; unsafe { goto loop }
//line "v/eof/01_sentinel.v":52
//line "v/eof/01_sentinel.re":15

}

fn main() {
    assert lex("\0") == 0
    assert lex("one two three\0") == 3
    assert lex("f0ur\0") == -1
}
