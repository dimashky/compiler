var input = 'sample inputs/input';var compile_start = '7:53:51:806:471:100'; var lex_end = '7:53:51:829:491:700';var lex_elapsed = '0.023021';
var compile_start = '7:53:51:806:471:100'; var lex_end = '7:53:51:902:248:300';var lex_elapsed = '0.095778';
var parse_end = '7:53:51:905:918:500';var parse_elapsed = '0.127625';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 0, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 18, col : -1, msg: 'error, 'c' does not implement inherited abstract member 'b.f3'.'});
errors.push({ line: 18, col : -1, msg: 'error, 'c' does not implement inherited abstract member 'a.f2'.'});
