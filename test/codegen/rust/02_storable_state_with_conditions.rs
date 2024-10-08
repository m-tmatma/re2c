/* Generated by re2rust */
// re2rust $INPUT -o $OUTPUT -fc --no-unsafe

use std::fs::File;
use std::io::{Read, Write};

const BUFSIZE: usize = 10;

const YYC_INIT: isize = 0;
const YYC_SPACES: isize = 6;
const YYC_NUMBER: isize = 11;
const YYC_WORD: isize = 16;


const DEBUG: bool = false;
macro_rules! log {
    ($($fmt:expr)? $(, $args:expr)*) => { if DEBUG { println!($($fmt)? $(, $args)*) } }
}

struct State {
    file: File,
    yyinput: [u8; BUFSIZE + 1],
    yylimit: usize,
    yycursor: usize,
    yymarker: usize,
    token: usize,
    yystate: isize,
}

#[derive(Debug, PartialEq)]
enum Status {End, Ready, Waiting, BadPacket, BigPacket}

fn fill(st: &mut State) -> Status {
    let shift = st.token;
    let used = st.yylimit - st.token;
    let free = BUFSIZE - used;

    // Error: no space. In real life can reallocate a larger buffer.
    if free < 1 { return Status::BigPacket; }

    // Shift buffer contents (discard already processed data).
    unsafe {
        let p = st.yyinput.as_mut_ptr();
        std::ptr::copy(p, p.offset(shift as isize), used);
    }
    st.yylimit -= shift;
    st.yycursor -= shift;
    st.yymarker = st.yymarker.overflowing_sub(shift).0; // underflow ok if marker is unused
    st.token -= shift;

    // Fill free space at the end of buffer with new data.
    match st.file.read(&mut st.yyinput[st.yylimit..BUFSIZE]) {
        Ok(n) => st.yylimit += n,
        Err(why) => panic!("cannot read from file: {}", why)
    }
    st.yyinput[st.yylimit] = 0; // append sentinel symbol

    return Status::Ready;
}

fn lex(yyrecord: &mut State, nc: &mut isize, wc: &mut isize) -> Status {
    #[allow(unused_assignments)]
    let mut yych: u8 = 0;
    'lex: loop {
        yyrecord.token = yyrecord.yycursor;
    
{
    let mut yystate : isize = yyrecord.yystate;
    'yyl: loop {
        match yystate {
            -1 ..= 0 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                match yych {
                    0x09 |
                    0x20 => {
                        yyrecord.yycursor += 1;
                        yystate = 2;
                        continue 'yyl;
                    }
                    0x30 ..= 0x39 => {
                        yyrecord.yycursor += 1;
                        yystate = 3;
                        continue 'yyl;
                    }
                    0x61 ..= 0x7A => {
                        yyrecord.yycursor += 1;
                        yystate = 4;
                        continue 'yyl;
                    }
                    _ => {
                        if yyrecord.yylimit <= yyrecord.yycursor {
                            yyrecord.yystate = 21;
                            return Status::Waiting;
                        }
                        yyrecord.yycursor += 1;
                        yystate = 1;
                        continue 'yyl;
                    }
                }
            }
            1 => {
                yyrecord.yystate = YYC_INIT;
                { return Status::BadPacket; }
            }
            2 => {
                yyrecord.yycursor -= 1;
                yyrecord.yystate = YYC_SPACES;
                yystate = YYC_SPACES;
                continue 'yyl;
            }
            3 => {
                yyrecord.yycursor -= 1;
                yyrecord.yystate = YYC_NUMBER;
                yystate = YYC_NUMBER;
                continue 'yyl;
            }
            4 => {
                yyrecord.yycursor -= 1;
                yyrecord.yystate = YYC_WORD;
                yystate = YYC_WORD;
                continue 'yyl;
            }
            5 => {
                yyrecord.yystate = YYC_INIT;
                { return Status::End; }
            }
            6 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                match yych {
                    0x09 |
                    0x20 => {
                        yyrecord.yycursor += 1;
                        yystate = 8;
                        continue 'yyl;
                    }
                    _ => {
                        if yyrecord.yylimit <= yyrecord.yycursor {
                            yyrecord.yystate = 22;
                            return Status::Waiting;
                        }
                        yyrecord.yycursor += 1;
                        yystate = 7;
                        continue 'yyl;
                    }
                }
            }
            7 => {
                yyrecord.yystate = YYC_SPACES;
                { return Status::BadPacket; }
            }
            8 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                match yych {
                    0x09 |
                    0x20 => {
                        yyrecord.yycursor += 1;
                        yystate = 8;
                        continue 'yyl;
                    }
                    _ => {
                        if yyrecord.yylimit <= yyrecord.yycursor {
                            yyrecord.yystate = 23;
                            return Status::Waiting;
                        }
                        yystate = 9;
                        continue 'yyl;
                    }
                }
            }
            9 => {
                yyrecord.yystate = YYC_INIT;
                { continue 'lex; }
            }
            10 => {
                yyrecord.yystate = YYC_SPACES;
                { return Status::End; }
            }
            11 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                match yych {
                    0x30 ..= 0x39 => {
                        yyrecord.yycursor += 1;
                        yystate = 13;
                        continue 'yyl;
                    }
                    _ => {
                        if yyrecord.yylimit <= yyrecord.yycursor {
                            yyrecord.yystate = 24;
                            return Status::Waiting;
                        }
                        yyrecord.yycursor += 1;
                        yystate = 12;
                        continue 'yyl;
                    }
                }
            }
            12 => {
                yyrecord.yystate = YYC_NUMBER;
                { return Status::BadPacket; }
            }
            13 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                match yych {
                    0x30 ..= 0x39 => {
                        yyrecord.yycursor += 1;
                        yystate = 13;
                        continue 'yyl;
                    }
                    _ => {
                        if yyrecord.yylimit <= yyrecord.yycursor {
                            yyrecord.yystate = 25;
                            return Status::Waiting;
                        }
                        yystate = 14;
                        continue 'yyl;
                    }
                }
            }
            14 => {
                yyrecord.yystate = YYC_SPACES;
                { *nc += 1; continue 'lex; }
            }
            15 => {
                yyrecord.yystate = YYC_NUMBER;
                { return Status::End; }
            }
            16 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                match yych {
                    0x61 ..= 0x7A => {
                        yyrecord.yycursor += 1;
                        yystate = 18;
                        continue 'yyl;
                    }
                    _ => {
                        if yyrecord.yylimit <= yyrecord.yycursor {
                            yyrecord.yystate = 26;
                            return Status::Waiting;
                        }
                        yyrecord.yycursor += 1;
                        yystate = 17;
                        continue 'yyl;
                    }
                }
            }
            17 => {
                yyrecord.yystate = YYC_WORD;
                { return Status::BadPacket; }
            }
            18 => {
                yych = yyrecord.yyinput[yyrecord.yycursor];
                match yych {
                    0x61 ..= 0x7A => {
                        yyrecord.yycursor += 1;
                        yystate = 18;
                        continue 'yyl;
                    }
                    _ => {
                        if yyrecord.yylimit <= yyrecord.yycursor {
                            yyrecord.yystate = 27;
                            return Status::Waiting;
                        }
                        yystate = 19;
                        continue 'yyl;
                    }
                }
            }
            19 => {
                yyrecord.yystate = YYC_SPACES;
                { *wc += 1; continue 'lex; }
            }
            20 => {
                yyrecord.yystate = YYC_WORD;
                { return Status::End; }
            }
            21 => {
                if yyrecord.yylimit <= yyrecord.yycursor {
                    yystate = 5;
                    continue 'yyl;
                }
                yystate = 0;
                continue 'yyl;
            }
            22 => {
                if yyrecord.yylimit <= yyrecord.yycursor {
                    yystate = 10;
                    continue 'yyl;
                }
                yystate = 6;
                continue 'yyl;
            }
            23 => {
                if yyrecord.yylimit <= yyrecord.yycursor {
                    yystate = 9;
                    continue 'yyl;
                }
                yystate = 8;
                continue 'yyl;
            }
            24 => {
                if yyrecord.yylimit <= yyrecord.yycursor {
                    yystate = 15;
                    continue 'yyl;
                }
                yystate = 11;
                continue 'yyl;
            }
            25 => {
                if yyrecord.yylimit <= yyrecord.yycursor {
                    yystate = 14;
                    continue 'yyl;
                }
                yystate = 13;
                continue 'yyl;
            }
            26 => {
                if yyrecord.yylimit <= yyrecord.yycursor {
                    yystate = 20;
                    continue 'yyl;
                }
                yystate = 16;
                continue 'yyl;
            }
            27 => {
                if yyrecord.yylimit <= yyrecord.yycursor {
                    yystate = 19;
                    continue 'yyl;
                }
                yystate = 18;
                continue 'yyl;
            }
            _ => panic!("internal lexer error"),
        }
    }
}
}
}

fn test(packets: Vec<&[u8]>, expect: Status, expect_nc: isize, expect_wc: isize) {
    // Create a "socket" (open the same file for reading and writing).
    let fname = "pipe";
    let mut fw: File = match File::create(fname) {
        Err(why) => panic!("cannot open {}: {}", fname, why),
        Ok(file) => file,
    };
    let fr: File = match File::open(fname) {
        Err(why) => panic!("cannot read file {}: {}", fname, why),
        Ok(file) => file,
    };

    // Initialize lexer state: `state` value is -1, all offsets are at the end
    // of buffer, the character at `yylimit` offset is the sentinel (null).
    let mut state = State {
        file: fr,
        yyinput: [0; BUFSIZE + 1], // sentinel (at `yylimit` offset) is set to null
        yylimit: BUFSIZE,
        yycursor: BUFSIZE,
        yymarker: BUFSIZE,
        token: BUFSIZE,
        yystate: -1,
    };

    // Main loop. The buffer contains incomplete data which appears packet by
    // packet. When the lexer needs more input it saves its internal state and
    // returns to the caller which should provide more input and resume lexing.
    let mut status;
    let mut send = 0;
    let mut nc = 0;
    let mut wc = 0;
    loop {
        status = lex(&mut state, &mut nc, &mut wc);
        if status == Status::End {
            log!("done: got {} numbers and {} words", nc, wc);
            break;
        } else if status == Status::Waiting {
            log!("waiting...");
            if send < packets.len() {
                log!("sent packet {}", send);
                match fw.write_all(packets[send]) {
                    Err(why) => panic!("cannot write to {}: {}", fname, why),
                    Ok(_) => send += 1,
                }
            }
            status = fill(&mut state);
            log!("queue: '{}'", String::from_utf8_lossy(&state.yyinput));
            if status == Status::BigPacket {
                log!("error: packet too big");
                break;
            }
            assert_eq!(status, Status::Ready);
        } else {
            assert_eq!(status, Status::BadPacket);
            log!("error: ill-formed packet");
            break;
        }
    }

    // Check results.
    assert_eq!(status, expect);
    if status == Status::End {
        assert_eq!(nc, expect_nc);
        assert_eq!(wc, expect_wc);
    }

    // Cleanup: remove input file.
    match std::fs::remove_file(fname) {
        Err(why) => panic!("cannot remove {}: {}", fname, why),
        Ok(_) => {}
    }
}

fn main() {
    test(vec![], Status::End, 0, 0);
    test(vec![b" zero one", b" ", b"123", b"4 tw", b"o  ", b"456789"], Status::End, 2, 3);
    test(vec![b"zer0"], Status::BadPacket, -1, -1);
    test(vec![b"tooooooloooooong"], Status::BigPacket, -1, -1);
}
