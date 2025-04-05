// re2swift $INPUT -o $OUTPUT -f
import Foundation

func log(_ items: Any..., separator: String = " ", terminator: String = "\n") {
#if DEBUG
  var stderr = FileHandle.standardError
  print(items, separator: separator, terminator: terminator, to: &stderr)
#endif
}

extension FileHandle: TextOutputStream {
  public func write(_ string: String) {
    self.write(Data(string.utf8))
  }
}

struct State {
  // Use a small buffer to cover the case when a lexeme doesn't fit,
  // in a real world use case use a larger buffer.
  static let bufferSize = 10

  let file: FileHandle

  // Extra '\0' byte on buffer acts as terminator.
  var yyinput  = ContiguousArray<UInt8>(repeating: 0, count: Self.bufferSize + 1)
  var yylimit  = Self.bufferSize
  var yycursor = Self.bufferSize
  var yymarker = Self.bufferSize
  var token    = Self.bufferSize
  var yystate  = -1
}

extension State {
  mutating func lex(recv: inout Int) -> Status {
    var yych: UInt8 = 0
    lex: while true {
      self.token = self.yycursor
      /*!re2c
        re2c:api = record;
        re2c:eof = 0;
        re2c:variable:yyrecord = "self";
        re2c:YYFILL = "return .waiting";

        packet = [a-z]+[;];

        *      { return .badPacket }
        $      { return .end }
        packet {
          recv += 1
          continue lex
        }
      */
    }
  }

  mutating func fill() -> Status {
    let used = self.yylimit - self.token
    let free = Self.bufferSize - used

    // Error: No space. In the real world we can reallocate a larger buffer.
    if free < 1 {
      return .bigPacket
    }

    // Shift buffer contents, discarding everything up to the current lexeme.
    let shift = self.token
    self.yyinput.replaceSubrange(..<used, with: self.yyinput[shift..<self.yylimit])
    self.yylimit  -= shift
    self.yycursor -= shift
    self.yymarker -= shift
    self.token = 0

    // Fill free space at the end of buffer with new data.
    do {
      if let data = try self.file.read(upToCount: free) {
        self.yyinput.replaceSubrange(self.yylimit..<(self.yylimit + data.count), with: data)
        self.yylimit += data.count
      }
    } catch {
      fatalError("cannot read from file: \(error.localizedDescription)")
    }
    self.yyinput[self.yylimit] = 0  // append sentinel

    return .ready
  }

  enum Status {
    case end, ready, waiting, badPacket, bigPacket
  }
}

func test(_ packets: [StaticString]) -> State.Status {
  // Create a "socket" (open the same file for reading and writing).
  let fname: String = "pipe"
  guard FileManager.default.createFile(atPath: fname, contents: nil),
      let fw = FileHandle(forWritingAtPath: fname) else {
    fatalError("cannot open '\(fname)'")
  }
  guard let fr = FileHandle(forReadingAtPath: fname) else {
    fatalError("cannot read file '\(fname)'")
  }

  defer {
    // Cleanup: remove input file.
    do {
      try fw.close()
      try fr.close()
      try FileManager.default.removeItem(atPath: fname)
    } catch {
      fatalError("error on file cleanup: \(error.localizedDescription)")
    }
  }

  var state = State(file: fr)

  // Main loop. The buffer contains incomplete data which appears packet by
  // packet. When the lexer needs more input it saves its internal state and
  // returns to the caller which should provide more input and resume lexing.
  var send = 0, recv = 0
  while true {
    switch state.lex(recv: &recv) {
      case .end:
        log("done: got \(recv)")
        assert(recv == send)
        return .end
      case .waiting:
        log("waiting...")
        if send < packets.count {
          log("sent packet \(send)")
          packets[send].withUTF8Buffer {
            do {
              try fw.write(contentsOf: $0)
            } catch {
              fatalError("cannot write to \(fname): \(error.localizedDescription)")
            }
          }
          send += 1
        }
        let status = state.fill()
        state.yyinput.withUnsafeBytes {
          let buf = $0.bindMemory(to: CChar.self)
          log("queue: '\(String(utf8String: buf.baseAddress!) ?? "")'")
        }
        if status == .bigPacket {
          log("error: packet too big")
          return .bigPacket
        }
        assert(status == .ready)
      case .badPacket:
        log("error: ill-formed packet")
        return .badPacket
      default:
        fatalError("unreachable")
    }
  }
}

assert(test([]) == .end)
assert(test([ "zero;", "one;", "two;", "three;", "four;" ]) == .end)
assert(test([ "zer0;" ]) == .badPacket)
assert(test([ "looooooooooong;" ]) == .bigPacket)
log("all tests completed successfully")
