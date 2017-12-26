var input = 'sample inputs/input';var compile_start = '0:15:18:814:627:800'; var lex_end = '0:15:18:815:453:100';var lex_elapsed = '0.000825';
var compile_start = '0:15:18:814:627:800'; var lex_end = '0:15:18:824:165:300';var lex_elapsed = '0.009538';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 11, col : -1, msg: 'error, no more than one extended class and it should be the first one after Colon.'});
errors.push({ line: 11, col : -1, msg: ' symmbol parser error, inhertince from non declared or inaccessible type 'string'.'});
errors.push({ line: 14, col : -1, msg: 'error, no suitable method found to override.'});
