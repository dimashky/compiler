var input = 'example1.cs';var compile_start = '3:6:50:642:50:200'; var lex_end = '3:6:50:643:51:900';var lex_elapsed = '0.001002';
var parse_end = '3:6:50:658:65:400';var parse_elapsed = '0.016015';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 9, col : 22, msg: 'syntax error, unexpected int_value, expecting IDENTIFIER'});
errors.push({ line: 12, col : 14, msg: 'syntax error, unexpected [, expecting ('});
errors.push({ line: 12, col : 31, msg: 'syntax error, unexpected ], expecting )'});
