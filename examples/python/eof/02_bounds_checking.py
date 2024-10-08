# Generated by re2py
# re2py $INPUT -o $OUTPUT

YYMAXFILL = 1


def lex(yyinput):
    yycursor = 0
    yylimit = len(yyinput)
    count = 0

    while True: 
        yystate = 0
        while True:
            match yystate:
                case 0:
                    if yylimit <= yycursor:
                        return -1
                    yych = yyinput[yycursor]
                    yycursor += 1
                    if yych <= 0x20:
                        if yych <= 0x00:
                            yystate = 1
                            continue
                        if yych <= 0x1F:
                            yystate = 2
                            continue
                        yystate = 3
                        continue
                    else:
                        if yych == 0x27:
                            yystate = 4
                            continue
                        yystate = 2
                        continue
                case 1:
                    # check that it is the sentinel, not some unexpected null
                    return count if yycursor == yylimit - YYMAXFILL + 1 else -1
                case 2:
                    return -1
                case 3:
                    if yylimit <= yycursor:
                        return -1
                    yych = yyinput[yycursor]
                    if yych == 0x20:
                        yycursor += 1
                        yystate = 3
                        continue
                    break
                case 4:
                    if yylimit <= yycursor:
                        return -1
                    yych = yyinput[yycursor]
                    yycursor += 1
                    if yych == 0x27:
                        yystate = 5
                        continue
                    if yych == 0x5C:
                        yystate = 6
                        continue
                    yystate = 4
                    continue
                case 5:
                    count += 1
                    break
                case 6:
                    if yylimit <= yycursor:
                        return -1
                    yycursor += 1
                    yystate = 4
                    continue
                case _:
                    raise "internal lexer error"


def test(str, count):
    padded_str = str + (b"\0" * YYMAXFILL)
    assert lex(padded_str) == count

test(b"", 0)
test(b"'unterminated\\'", -1)
test(b"'qu\x00tes' 'are' 'fine: \\'' ", 3)
test(b"'unexpected \x00 null", -1)
