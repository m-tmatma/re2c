// Code generated by re2go, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT --recursive-functions -i
package main


func yy0(str string, cur int) {
	yych := str[cur]
	cur += 1
	if (yych <= '0') {
		yy1(str, cur)
	} else if (yych <= '9') {
		yy2(str, cur)
	} else {
		yy1(str, cur)
	}
}

func yy1(str string, cur int) {
	panic("error!");
}

func yy2(str string, cur int) {
	yych := str[cur]
	if (yych <= '/') {
		yy3(str, cur)
	} else if (yych <= '9') {
		cur += 1
		yy2(str, cur)
	} else {
		yy3(str, cur)
	}
}

func yy3(str string, cur int) {
	return
}

func lex(str string, cur int) {
	yy0(str, cur)
}



func main() {
    lex("1234\x00", 0)
}
