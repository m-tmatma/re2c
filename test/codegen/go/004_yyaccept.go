// Code generated by re2c, DO NOT EDIT.
//line "codegen/go/004_yyaccept.re":1
//go:generate re2go $INPUT -o $OUTPUT 
package main

func Lex(str string) int {
	var cursor, marker int

	
//line "codegen/go/004_yyaccept.go":11
{
	var yych byte
	yyaccept := 0
	yych = str[cursor]
	switch (yych) {
	case 'a':
		goto yy2
	default:
		goto yy1
	}
yy1:
	cursor += 1
//line "codegen/go/004_yyaccept.re":17
	{
		return -1
	}
//line "codegen/go/004_yyaccept.go":28
yy2:
	yyaccept = 0
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'b':
		goto yy4
	default:
		goto yy3
	}
yy3:
//line "codegen/go/004_yyaccept.re":21
	{
		return 1
	}
//line "codegen/go/004_yyaccept.go":45
yy4:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'c':
		goto yy6
	default:
		goto yy5
	}
yy5:
	cursor = marker
	switch (yyaccept) {
	case 0:
		goto yy3
	case 1:
		goto yy7
	default:
		goto yy10
	}
yy6:
	yyaccept = 1
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'd':
		goto yy8
	default:
		goto yy7
	}
yy7:
//line "codegen/go/004_yyaccept.re":25
	{
		return 2
	}
//line "codegen/go/004_yyaccept.go":81
yy8:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'e':
		goto yy9
	default:
		goto yy5
	}
yy9:
	yyaccept = 2
	cursor += 1
	marker = cursor
	yych = str[cursor]
	switch (yych) {
	case 'f':
		goto yy11
	default:
		goto yy10
	}
yy10:
//line "codegen/go/004_yyaccept.re":29
	{
		return 3
	}
//line "codegen/go/004_yyaccept.go":107
yy11:
	cursor += 1
	yych = str[cursor]
	switch (yych) {
	case 'g':
		goto yy12
	default:
		goto yy5
	}
yy12:
	cursor += 1
//line "codegen/go/004_yyaccept.re":33
	{
		return 4
	}
//line "codegen/go/004_yyaccept.go":123
}
//line "codegen/go/004_yyaccept.re":36

}

func main() {
	if Lex("\000") != -1 {
		panic("expected error")
	}
	if Lex("a\000") != 1 {
		panic("expected 'a'")
	}
	if Lex("abc\000") != 2 {
		panic("expected 'abc'")
	}
	if Lex("abcde\000") != 3 {
		panic("expected 'abcde'")
	}
	if Lex("abcdefg\000") != 4 {
		panic("expected 'abcdefg'")
	}
}