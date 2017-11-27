var input = 'example1.cs';var compile_start = '2:57:18:471:96:700'; var lex_end = '2:57:18:471:96:700';var lex_elapsed = '0.000000';
var parse_end = '2:57:18:488:112:100';var parse_elapsed = '0.018015';
var error_recoverd = false;
var error_num = 4;
var errors = [];
errors.push({ line: 9, col : 21, msg: 'syntax error, unexpected int_value, expecting IDENTIFIER or OPERATOR or THIS or STAR'});
errors.push({ line: 12, col : 14, msg: 'syntax error, unexpected [, expecting ('});
errors.push({ line: 12, col : 31, msg: 'syntax error, unexpected ], expecting )'});
errors.push({ line: 19, col : 1, msg: 'syntax error, unexpected }'});
