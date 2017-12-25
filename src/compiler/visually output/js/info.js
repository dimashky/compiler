var input = 'sample inputs/input';var compile_start = '1:2:54:499:870:800'; var lex_end = '1:2:54:500:196:700';var lex_elapsed = '0.000326';
var compile_start = '1:2:54:499:870:800'; var lex_end = '1:2:54:501:436:400';var lex_elapsed = '0.001566';
var error_recoverd = true;
var error_num = 2;
var errors = [];
errors.push({ line: 0, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 2, col : -1, msg: 'error, The namespace '<global-namespace>' already contains a definition for 'x'.'});
