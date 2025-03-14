/* Generated by re2rust */
// re2rust $INPUT -o $OUTPUT --input-encoding utf8 --api simple

// This example supports multiple input encodings: UTF-8 and UTF-32.
// Both lexers are generated from the same rules block, and the use
// blocks add only encoding-specific configurations.


fn lex_utf8(yyinput: &[u8]) -> Option<usize> {
    assert!(yyinput.len() > 0); // expect nonempty input
    let (mut yycursor, mut yymarker) = (0, 0);
    
{
    #[allow(unused_assignments)]
    let mut yych : u8 = 0;
    let mut yystate : usize = 0;
    'yyl: loop {
        match yystate {
            0 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                yycursor += 1;
                match yych {
                    0xE2 => {
                        yystate = 3;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 1;
                        continue 'yyl;
                    }
                }
            }
            1 => {
                yystate = 2;
                continue 'yyl;
            }
            2 => { return None; },
            3 => {
                yymarker = yycursor;
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x88 => {
                        yycursor += 1;
                        yystate = 4;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 2;
                        continue 'yyl;
                    }
                }
            }
            4 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x80 => {
                        yycursor += 1;
                        yystate = 6;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            5 => {
                yycursor = yymarker;
                yystate = 2;
                continue 'yyl;
            }
            6 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x78 => {
                        yycursor += 1;
                        yystate = 7;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            7 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x20 => {
                        yycursor += 1;
                        yystate = 8;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            8 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0xE2 => {
                        yycursor += 1;
                        yystate = 9;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            9 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x88 => {
                        yycursor += 1;
                        yystate = 10;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            10 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x83 => {
                        yycursor += 1;
                        yystate = 11;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            11 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                match yych {
                    0x79 => {
                        yycursor += 1;
                        yystate = 12;
                        continue 'yyl;
                    }
                    _ => {
                        yystate = 5;
                        continue 'yyl;
                    }
                }
            }
            12 => { return Some(yycursor); },
            _ => panic!("internal lexer error"),
        }
    }
}

}

fn lex_utf32(yyinput: &[u32]) -> Option<usize> {
    assert!(yyinput.len() > 0); // expect nonempty input
    let (mut yycursor, mut yymarker) = (0, 0);
    
{
    #[allow(unused_assignments)]
    let mut yych : u32 = 0;
    let mut yystate : usize = 0;
    'yyl: loop {
        match yystate {
            0 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                yycursor += 1;
                if yych == 0x00002200 {
                    yystate = 2;
                    continue 'yyl;
                }
                yystate = 1;
                continue 'yyl;
            }
            1 => { return None; },
            2 => {
                yymarker = yycursor;
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                if yych != 0x00000078 {
                    yystate = 1;
                    continue 'yyl;
                }
                yycursor += 1;
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                if yych == 0x00000020 {
                    yycursor += 1;
                    yystate = 4;
                    continue 'yyl;
                }
                yystate = 3;
                continue 'yyl;
            }
            3 => {
                yycursor = yymarker;
                yystate = 1;
                continue 'yyl;
            }
            4 => {
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                if yych != 0x00002203 {
                    yystate = 3;
                    continue 'yyl;
                }
                yycursor += 1;
                yych = unsafe {*yyinput.get_unchecked(yycursor)};
                if yych != 0x00000079 {
                    yystate = 3;
                    continue 'yyl;
                }
                yycursor += 1;
                { return Some(yycursor); }
            }
            _ => panic!("internal lexer error"),
        }
    }
}

}

fn main() {
    let s8 = vec![0xe2, 0x88, 0x80, 0x78, 0x20, 0xe2, 0x88, 0x83, 0x79];
    assert_eq!(lex_utf8(&s8), Some(s8.len()));

    let s32 = vec![0x2200, 0x78, 0x20, 0x2203, 0x79];
    assert_eq!(lex_utf32(&s32), Some(s32.len()));
}
