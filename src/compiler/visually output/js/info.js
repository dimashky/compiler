var input = 'sample inputs/input';var compile_start = '7:1:5:408:814:800'; var lex_end = '7:1:5:409:963:900';var lex_elapsed = '0.001150';
var compile_start = '7:1:5:408:814:800'; var lex_end = '7:1:5:423:625:300';var lex_elapsed = '0.014811';
var parse_end = '7:1:5:424:607:400';var parse_elapsed = '0.050801';
var error_recoverd = true;
var error_num = 2;
var errors = [];
errors.push({ line: 1, col : -1, msg: 'error Program does not contain a static "Main" method suitable for an entry point.'});
errors.push({ line: 6, col : 5, msg: 'syntax error, unexpected }, expecting ;'});
