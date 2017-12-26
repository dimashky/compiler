var input = 'sample inputs/input';var compile_start = '4:45:5:920:78:900'; var lex_end = '4:45:5:920:533:600';var lex_elapsed = '0.000455';
var compile_start = '4:45:5:920:78:900'; var lex_end = '4:45:5:926:233:100';var lex_elapsed = '0.006154';
var parse_end = '4:45:5:932:682:900';var parse_elapsed = '0.014426';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 0, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 3, col : 14, msg: 'f must declare a body because it is not marked abstract, extern, or partial'});
errors.push({ line: 8, col : -1, msg: 'error, no suitable method found to override.'});
