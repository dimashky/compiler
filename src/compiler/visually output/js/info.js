var input = 'sample inputs/input';var compile_start = '0:24:25:484:274:700'; var lex_end = '0:24:25:485:652:800';var lex_elapsed = '0.001379';
var compile_start = '0:24:25:484:274:700'; var lex_end = '0:24:25:501:199:300';var lex_elapsed = '0.016925';
var parse_end = '0:24:25:502:200:600';var parse_elapsed = '0.022028';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 0, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 18, col : -1, msg: 'error, 'c' does not implement inherited abstract member 'b.f3'.'});
errors.push({ line: 18, col : -1, msg: 'error, 'c' does not implement inherited abstract member 'a.f2'.'});
