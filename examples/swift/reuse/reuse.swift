/* Generated by re2swift */
#sourceLocation(file: "swift/reuse/reuse.re", line: 1)
// re2swift $INPUT -o $OUTPUT --input-encoding utf8

// This example supports multiple input encodings: UTF-8 and UTF-32.
// Both lexers are generated from the same rules block, and the use
// blocks add only encoding-specific configurations.
#sourceLocation(file: "swift/reuse/reuse.re", line: 11)


func lexUTF8(_ yyinput: [UInt8]) -> Bool {
  var yycursor = 0, yymarker = 0
  
#sourceLocation(file: "swift/reuse/reuse.swift", line: 15)
  var yych: UInt8 = 0
  var yystate: UInt = 0
  yyl: while true {
    switch yystate {
      case 0:
        yych = yyinput[yycursor]
        yycursor += 1
        switch yych {
          case 0xE2:
            yystate = 3
            continue yyl
          default:
            yystate = 1
            continue yyl
        }
      case 1:
        yystate = 2
        continue yyl
      case 2:
#sourceLocation(file: "swift/reuse/reuse.re", line: 10)
        return false
#sourceLocation(file: "swift/reuse/reuse.swift", line: 37)
      case 3:
        yymarker = yycursor
        yych = yyinput[yycursor]
        switch yych {
          case 0x88:
            yycursor += 1
            yystate = 4
            continue yyl
          default:
            yystate = 2
            continue yyl
        }
      case 4:
        yych = yyinput[yycursor]
        switch yych {
          case 0x80:
            yycursor += 1
            yystate = 6
            continue yyl
          default:
            yystate = 5
            continue yyl
        }
      case 5:
        yycursor = yymarker
        yystate = 2
        continue yyl
      case 6:
        yych = yyinput[yycursor]
        switch yych {
          case 0x78:
            yycursor += 1
            yystate = 7
            continue yyl
          default:
            yystate = 5
            continue yyl
        }
      case 7:
        yych = yyinput[yycursor]
        switch yych {
          case 0x20:
            yycursor += 1
            yystate = 8
            continue yyl
          default:
            yystate = 5
            continue yyl
        }
      case 8:
        yych = yyinput[yycursor]
        switch yych {
          case 0xE2:
            yycursor += 1
            yystate = 9
            continue yyl
          default:
            yystate = 5
            continue yyl
        }
      case 9:
        yych = yyinput[yycursor]
        switch yych {
          case 0x88:
            yycursor += 1
            yystate = 10
            continue yyl
          default:
            yystate = 5
            continue yyl
        }
      case 10:
        yych = yyinput[yycursor]
        switch yych {
          case 0x83:
            yycursor += 1
            yystate = 11
            continue yyl
          default:
            yystate = 5
            continue yyl
        }
      case 11:
        yych = yyinput[yycursor]
        switch yych {
          case 0x79:
            yycursor += 1
            yystate = 12
            continue yyl
          default:
            yystate = 5
            continue yyl
        }
      case 12:
#sourceLocation(file: "swift/reuse/reuse.re", line: 9)
        return true
#sourceLocation(file: "swift/reuse/reuse.swift", line: 134)
      default: fatalError("internal lexer error")
    }
  }
#sourceLocation(file: "swift/reuse/reuse.re", line: 18)

}

func lexUTF32(_ yyinput: [UInt32]) -> Bool {
  var yycursor = 0, yymarker = 0
  
#sourceLocation(file: "swift/reuse/reuse.swift", line: 145)
  var yych: UInt32 = 0
  var yystate: UInt = 0
  yyl: while true {
    switch yystate {
      case 0:
        yych = yyinput[yycursor]
        yycursor += 1
        if yych == 0x00002200 {
          yystate = 2
          continue yyl
        }
        yystate = 1
        continue yyl
      case 1:
#sourceLocation(file: "swift/reuse/reuse.re", line: 10)
        return false
#sourceLocation(file: "swift/reuse/reuse.swift", line: 162)
      case 2:
        yymarker = yycursor
        yych = yyinput[yycursor]
        if yych != 0x00000078 {
          yystate = 1
          continue yyl
        }
        yycursor += 1
        yych = yyinput[yycursor]
        if yych == 0x00000020 {
          yycursor += 1
          yystate = 4
          continue yyl
        }
        yystate = 3
        continue yyl
      case 3:
        yycursor = yymarker
        yystate = 1
        continue yyl
      case 4:
        yych = yyinput[yycursor]
        if yych != 0x00002203 {
          yystate = 3
          continue yyl
        }
        yycursor += 1
        yych = yyinput[yycursor]
        if yych != 0x00000079 {
          yystate = 3
          continue yyl
        }
        yycursor += 1
#sourceLocation(file: "swift/reuse/reuse.re", line: 9)
        return true
#sourceLocation(file: "swift/reuse/reuse.swift", line: 198)
      default: fatalError("internal lexer error")
    }
  }
#sourceLocation(file: "swift/reuse/reuse.re", line: 26)

}

assert(lexUTF8([ 0xe2, 0x88, 0x80, 0x78, 0x20, 0xe2, 0x88, 0x83, 0x79 ]))  // UTF-8
assert(lexUTF32([ 0x00002200, 0x00000078, 0x00000020, 0x00002203, 0x00000079 ]))  // UTF-32
