// Generated by re2zig
// re2zig $INPUT -o $OUTPUT

// This example shows how to combine reusable re2c blocks: two blocks
// ('colors' and 'fish') are merged into one. The 'salmon' rule occurs
// in both blocks; the 'fish' block takes priority because it is used
// earlier. Default rule * occurs in all three blocks; the local (not
// inherited) definition takes priority.

const std = @import("std");

const Ans = enum {color, fish, dunno};





fn lex(yyinput: [:0]const u8) Ans {
    var yycursor: usize = 0;
    var yymarker: usize = 0;
    
    var yych: u8 = 0;
    var yystate: u32 = 0;
    while (true) {
        switch (yystate) {
            0 => {
                yych = yyinput[yycursor];
                yycursor += 1;
                switch (yych) {
                    0x65 => {
                        yystate = 3;
                        continue;
                    },
                    0x68 => {
                        yystate = 4;
                        continue;
                    },
                    0x6D => {
                        yystate = 5;
                        continue;
                    },
                    0x72 => {
                        yystate = 6;
                        continue;
                    },
                    0x73 => {
                        yystate = 7;
                        continue;
                    },
                    else => {
                        yystate = 1;
                        continue;
                    },
                }
            },
            1 => {
                yystate = 2;
                continue;
            },
            2 => { return Ans.dunno; },
            3 => {
                yymarker = yycursor;
                yych = yyinput[yycursor];
                switch (yych) {
                    0x65 => {
                        yycursor += 1;
                        yystate = 8;
                        continue;
                    },
                    else => {
                        yystate = 2;
                        continue;
                    },
                }
            },
            4 => {
                yymarker = yycursor;
                yych = yyinput[yycursor];
                switch (yych) {
                    0x61 => {
                        yycursor += 1;
                        yystate = 10;
                        continue;
                    },
                    else => {
                        yystate = 2;
                        continue;
                    },
                }
            },
            5 => {
                yymarker = yycursor;
                yych = yyinput[yycursor];
                switch (yych) {
                    0x61 => {
                        yycursor += 1;
                        yystate = 11;
                        continue;
                    },
                    else => {
                        yystate = 2;
                        continue;
                    },
                }
            },
            6 => {
                yymarker = yycursor;
                yych = yyinput[yycursor];
                switch (yych) {
                    0x65 => {
                        yycursor += 1;
                        yystate = 12;
                        continue;
                    },
                    else => {
                        yystate = 2;
                        continue;
                    },
                }
            },
            7 => {
                yymarker = yycursor;
                yych = yyinput[yycursor];
                switch (yych) {
                    0x61 => {
                        yycursor += 1;
                        yystate = 13;
                        continue;
                    },
                    else => {
                        yystate = 2;
                        continue;
                    },
                }
            },
            8 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x6C => {
                        yycursor += 1;
                        yystate = 14;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            9 => {
                yycursor = yymarker;
                yystate = 2;
                continue;
            },
            10 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x64 => {
                        yycursor += 1;
                        yystate = 15;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            11 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x67 => {
                        yycursor += 1;
                        yystate = 16;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            12 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x64 => {
                        yycursor += 1;
                        yystate = 17;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            13 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x6C => {
                        yycursor += 1;
                        yystate = 18;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            14 => { return Ans.fish; },
            15 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x64 => {
                        yycursor += 1;
                        yystate = 19;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            16 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x65 => {
                        yycursor += 1;
                        yystate = 20;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            17 => { return Ans.color; },
            18 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x6D => {
                        yycursor += 1;
                        yystate = 21;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            19 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x6F => {
                        yycursor += 1;
                        yystate = 22;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            20 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x6E => {
                        yycursor += 1;
                        yystate = 23;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            21 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x6F => {
                        yycursor += 1;
                        yystate = 24;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            22 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x63 => {
                        yycursor += 1;
                        yystate = 25;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            23 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x74 => {
                        yycursor += 1;
                        yystate = 26;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            24 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x6E => {
                        yycursor += 1;
                        yystate = 14;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            25 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x6B => {
                        yycursor += 1;
                        yystate = 14;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            26 => {
                yych = yyinput[yycursor];
                switch (yych) {
                    0x61 => {
                        yycursor += 1;
                        yystate = 17;
                        continue;
                    },
                    else => {
                        yystate = 9;
                        continue;
                    },
                }
            },
            else => { @panic("internal lexer error"); },
        }
    }

}

test {
    try std.testing.expectEqual(lex("salmon"), Ans.fish);
    try std.testing.expectEqual(lex("what?"), Ans.dunno);
}
