var input = 'sample inputs/input';var compile_start = '7:28:21:78:241:300'; var lex_end = '7:28:21:79:284:900';var lex_elapsed = '0.001044';
var compile_start = '7:28:21:78:241:300'; var lex_end = '7:28:21:88:257:800';var lex_elapsed = '0.010016';
var parse_end = '7:28:21:89:59:700';var parse_elapsed = '0.014336';
var error_recoverd = true;
var error_num = 2;
var errors = [];
errors.push({ line: 1, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 7, col : 5, msg: 'syntax error, unexpected }, expecting ;'});
