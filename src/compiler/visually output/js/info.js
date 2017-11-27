var input = 'example1.cs';var compile_start = '3:14:5:579:494:700'; var lex_end = '3:14:5:580:495:200';var lex_elapsed = '0.001001';
var parse_end = '3:14:5:594:507:400';var parse_elapsed = '0.015013';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 9, col : 22, msg: 'syntax error, unexpected int_value, expecting IDENTIFIER'});
errors.push({ line: 12, col : 14, msg: 'syntax error, unexpected [, expecting ('});
errors.push({ line: 12, col : 31, msg: 'syntax error, unexpected ], expecting )'});
