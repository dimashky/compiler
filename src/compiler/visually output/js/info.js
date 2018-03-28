var input = 'sample inputs/input';var compile_start = '6:3:56:102:220:700'; var lex_end = '6:3:56:103:571:0';var lex_elapsed = '0.001352';
var compile_start = '6:3:56:102:220:700'; var lex_end = '6:3:56:119:960:500';var lex_elapsed = '0.017740';
var parse_end = '6:3:56:120:699:200';var parse_elapsed = '0.022371';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 0, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 18, col : -1, msg: 'error, 'c' does not implement inherited abstract member 'b.f3'.'});
errors.push({ line: 18, col : -1, msg: 'error, 'c' does not implement inherited abstract member 'a.f2'.'});
