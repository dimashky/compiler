var input = 'example1.cs';var compile_start = '3:16:53:478:170:300'; var lex_end = '3:16:53:479:119:300';var lex_elapsed = '0.000949';
var parse_end = '3:16:53:495:133:300';var parse_elapsed = '0.016963';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 7, col : 20, msg: 'syntax error, unexpected [, expecting ('});
errors.push({ line: 7, col : 32, msg: 'syntax error, unexpected ], expecting )'});
errors.push({ line: 7, col : 44, msg: 'syntax error, unexpected }, expecting ;'});
