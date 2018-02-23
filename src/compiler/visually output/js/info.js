var input = 'sample inputs/input';var compile_start = '7:49:51:944:421:0'; var lex_end = '7:49:51:944:866:700';var lex_elapsed = '0.000446';
var compile_start = '7:49:51:944:421:0'; var lex_end = '7:49:51:951:376:500';var lex_elapsed = '0.006955';
var parse_end = '7:49:51:953:627:600';var parse_elapsed = '0.012492';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 0, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 6, col : -1, msg: 'error, there is defination with same name 'a''});
errors.push({ line: 12, col : -1, msg: 'error, there is defination with same name 'b''});
