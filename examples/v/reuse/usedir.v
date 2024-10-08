// Code generated by re2v, DO NOT EDIT.
//line "v/reuse/usedir.re":1
// re2v $INPUT -o $OUTPUT

// This example shows how to combine reusable re2c blocks: two blocks
// ('colors' and 'fish') are merged into one. The 'salmon' rule occurs
// in both blocks; the 'fish' block takes priority because it is used
// earlier. Default rule * occurs in all three blocks; the local (not
// inherited) definition takes priority.

enum What {
    color
    fish
    dunno
}

//line "v/reuse/usedir.re":18


//line "v/reuse/usedir.re":23


fn lex(yyinput string) What {
    mut yycursor, mut yymarker := 0, 0
    
//line "v/reuse/usedir.v":27
    mut yych := 0
    yych = yyinput[yycursor]
    match yych {
        0x65 { unsafe { goto yy3 } }
        0x68 { unsafe { goto yy4 } }
        0x6D { unsafe { goto yy5 } }
        0x72 { unsafe { goto yy6 } }
        0x73 { unsafe { goto yy7 } }
        else { unsafe { goto yy1 } }
    }
yy1:
    yycursor += 1
yy2:
//line "v/reuse/usedir.re":32
    return .dunno
//line "v/reuse/usedir.v":43
yy3:
    yycursor += 1
    yymarker = yycursor
    yych = yyinput[yycursor]
    match yych {
        0x65 { unsafe { goto yy8 } }
        else { unsafe { goto yy2 } }
    }
yy4:
    yycursor += 1
    yymarker = yycursor
    yych = yyinput[yycursor]
    match yych {
        0x61 { unsafe { goto yy10 } }
        else { unsafe { goto yy2 } }
    }
yy5:
    yycursor += 1
    yymarker = yycursor
    yych = yyinput[yycursor]
    match yych {
        0x61 { unsafe { goto yy11 } }
        else { unsafe { goto yy2 } }
    }
yy6:
    yycursor += 1
    yymarker = yycursor
    yych = yyinput[yycursor]
    match yych {
        0x65 { unsafe { goto yy12 } }
        else { unsafe { goto yy2 } }
    }
yy7:
    yycursor += 1
    yymarker = yycursor
    yych = yyinput[yycursor]
    match yych {
        0x61 { unsafe { goto yy13 } }
        else { unsafe { goto yy2 } }
    }
yy8:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x6C { unsafe { goto yy14 } }
        else { unsafe { goto yy9 } }
    }
yy9:
    yycursor = yymarker
    unsafe { goto yy2 }
yy10:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x64 { unsafe { goto yy15 } }
        else { unsafe { goto yy9 } }
    }
yy11:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x67 { unsafe { goto yy16 } }
        else { unsafe { goto yy9 } }
    }
yy12:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x64 { unsafe { goto yy17 } }
        else { unsafe { goto yy9 } }
    }
yy13:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x6C { unsafe { goto yy18 } }
        else { unsafe { goto yy9 } }
    }
yy14:
    yycursor += 1
//line "v/reuse/usedir.re":22
    return .fish
//line "v/reuse/usedir.v":126
yy15:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x64 { unsafe { goto yy19 } }
        else { unsafe { goto yy9 } }
    }
yy16:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x65 { unsafe { goto yy20 } }
        else { unsafe { goto yy9 } }
    }
yy17:
    yycursor += 1
//line "v/reuse/usedir.re":17
    return .color
//line "v/reuse/usedir.v":145
yy18:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x6D { unsafe { goto yy21 } }
        else { unsafe { goto yy9 } }
    }
yy19:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x6F { unsafe { goto yy22 } }
        else { unsafe { goto yy9 } }
    }
yy20:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x6E { unsafe { goto yy23 } }
        else { unsafe { goto yy9 } }
    }
yy21:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x6F { unsafe { goto yy24 } }
        else { unsafe { goto yy9 } }
    }
yy22:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x63 { unsafe { goto yy25 } }
        else { unsafe { goto yy9 } }
    }
yy23:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x74 { unsafe { goto yy26 } }
        else { unsafe { goto yy9 } }
    }
yy24:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x6E { unsafe { goto yy14 } }
        else { unsafe { goto yy9 } }
    }
yy25:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x6B { unsafe { goto yy14 } }
        else { unsafe { goto yy9 } }
    }
yy26:
    yycursor += 1
    yych = yyinput[yycursor]
    match yych {
        0x61 { unsafe { goto yy17 } }
        else { unsafe { goto yy9 } }
    }
//line "v/reuse/usedir.re":33

}

fn main() {
    assert lex("salmon") == .fish
    assert lex("what?") == .dunno
}
