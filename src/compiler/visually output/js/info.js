var input = 'sample inputs/input';var compile_start = '0:47:57:320:801:300'; var lex_end = '0:47:57:321:336:800';var lex_elapsed = '0.000539';
var compile_start = '0:47:57:320:801:300'; var lex_end = '0:47:57:324:880:100';var lex_elapsed = '0.004081';
var error_recoverd = true;
var error_num = 2;
var errors = [];
errors.push({ line: 0, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 4, col : 10, msg: 'f must declare a body because it is not marked abstract, extern, or partial'});
