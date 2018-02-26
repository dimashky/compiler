var input = 'sample inputs/input';var compile_start = '7:57:57:834:789:700'; var lex_end = '7:57:57:836:156:800';var lex_elapsed = '0.001367';
var compile_start = '7:57:57:834:789:700'; var lex_end = '7:57:57:853:431:600';var lex_elapsed = '0.018641';
var parse_end = '7:57:57:854:393:600';var parse_elapsed = '0.022888';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 0, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 18, col : -1, msg: 'error, 'c' does not implement inherited abstract member 'b.f3'.'});
errors.push({ line: 18, col : -1, msg: 'error, 'c' does not implement inherited abstract member 'a.f2'.'});
