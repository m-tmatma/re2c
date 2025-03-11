/* Generated by re2swift */
// re2swift $INPUT -o $OUTPUT -i --header lexer/state.swift



extension LexerState {
  mutating func lex() -> Int {
  let t: Int
  
  var yych: UInt8 = 0
  var yystate: UInt = 0
  yyl: while true {
    switch yystate {
      case 0:
        yych = self.yyinput[self.yycursor]
        switch yych {
          case 0x61:
            self.yycursor += 1
            yystate = 0
            continue yyl
          case 0x62:
            self.yyt1 = self.yycursor
            self.yycursor += 1
            yystate = 2
            continue yyl
          default:
            self.yyt1 = self.yycursor
            yystate = 1
            continue yyl
        }
      case 1:
        t = self.yyt1
        return t
      case 2:
        yych = self.yyinput[self.yycursor]
        switch yych {
          case 0x62:
            self.yycursor += 1
            yystate = 2
            continue yyl
          default:
            yystate = 1
            continue yyl
        }
      default: fatalError("internal lexer error")
    }
  }

  }
}

@main struct Program {
  static func main() {
    let str: StaticString = "ab"
    var state = LexerState(str: str.utf8Start)
    assert(state.lex() == 1)
  }
}
/* Generated by re2swift */

struct LexerState {
  var yyinput: UnsafePointer<UInt8>
  var yycursor: Int
  var yyt1 = -1

  init(str: UnsafePointer<UInt8>, cur: Int = 0) {
    self.yyinput = str
    self.yycursor = cur
  }
}
swift/headers/header.re:26:17: warning: rule matches empty string [-Wmatch-empty-string]
