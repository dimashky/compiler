var input = 'sample inputs/input';var compile_start = '5:38:42:609:888:600'; var lex_end = '5:38:42:611:360:800';var lex_elapsed = '0.001473';
var compile_start = '5:38:42:609:888:600'; var lex_end = '5:38:42:629:31:400';var lex_elapsed = '0.019144';
var parse_end = '5:38:42:629:662:300';var parse_elapsed = '0.023535';
var error_recoverd = true;
var error_num = 3;
var errors = [];
errors.push({ line: 13, col : 36, msg: 'attribute error, cannot be sealed because it is not an override'});
errors.push({ line: 22, col : -1, msg: 'error, 'y.f()': cannot change access modifiers when overriding '});
errors.push({ line: 22, col : -1, msg: 'error, 'y.f()': cannot override inherited member 't.f()' because it is sealed'});
