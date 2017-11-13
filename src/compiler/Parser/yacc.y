/* Based on Appendix C of the C# Language Specification,
 *  version 0.28 of 5/7/2001
 */





%{
	#define YYERROR_VERBOSE 1
	#define YYDEBUG 1
	
	#include <iostream>
	#include <FlexLexer.h>

	using namespace std;
	
	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	void yyerror(const char *);
	


	

%}

%union{
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int line_no;
		int col_no;
		}r;
	}




/* Special tokens to help disambiguate rank_specifiers */
%token RANK_SPECIFIER

/* C.1.4 Tokens */
%token IDENTIFIER "id" BAD_IDENTIFIER "bad_id"
%token INTEGER_LITERAL "int_value" REAL_LITERAL "real_value" CHARACTER_LITERAL "char_value" STRING_LITERAL "str_value"


/* C.1.7 KEYWORDS */ 
%token  ABSTRACT AS BASE BOOL BREAK
%token  BYTE CASE CATCH CHAR CHECKED
%token  CLASS CONST CONTINUE DECIMAL DEFAULT
%token  DELEGATE DO DOUBLE ELSE ENUM
%token  EVENT EXPLICIT EXTERN FALSE FINALLY
%token  FIXED FLOAT FOR FOREACH GOTO
%token  IF IMPLICIT IN INT INTERFACE
%token  INTERNAL IS LOCK LONG NAMESPACE
%token  NEW NULL_LITERAL OBJECT OPERATOR OUT
%token  OVERRIDE PARAMS PRIVATE PROTECTED PUBLIC
%token  READONLY REF RETURN SBYTE SEALED
%token  SHORT SIZEOF STACKALLOC STATIC STRING
%token  STRUCT SWITCH THIS THROW TRUE
%token  TRY TYPEOF UINT ULONG UNCHECKED
%token  UNSAFE USHORT USING VIRTUAL VOID
%token  VOLATILE WHILE

/* The ones that seem to be context sensitive */
/* Attribute Targets */
%token ASSEMBLY FIELD METHOD MODULE PARAM PROPERTY TYPE
/* Accessor types */
%token GET SET 
/* Event accessor declarations */
%token ADD REMOVE

/*** PUNCTUATION AND SINGLE CHARACTER OPERATORS ***/
%token COMMA ","
%token LEFT_BRACKET "["
%token RIGHT_BRACKET "]"
%token LEFT_BRACKET_GROUP "{" RIGHT_BRACKET_GROUP "}" LEFT_BRACKET_CIRCLE "(" RIGHT_BRACKET_CIRCLE ")"
%token GREATER ">" SMALLER "<"
%token SEMICOLON ";" COLON ":" DOT "."
%token PLUS MINUS STAR SLASH PERCENT AND OR EXCLAMATION_POINT TILDE QUESTION_MARK POWER EQUAL


/*** MULTI-CHARACTER OPERATORS ***/
%token PLUSEQ MINUSEQ STAREQ DIVEQ MODEQ
%token XOREQ  ANDEQ   OREQ LTLT GTGT GTGTEQ LTLTEQ EQEQ NOTEQ
%token LEQ GEQ ANDAND OROR PLUSPLUS MINUSMINUS ARROW

%nonassoc THEN
%nonassoc ELSE

%start compilation_unit  /* I think */

%%

/***** C.1.8 Literals *****/
literal
  : boolean_literal
  | INTEGER_LITERAL
  | REAL_LITERAL
  | CHARACTER_LITERAL
  | STRING_LITERAL
  | NULL_LITERAL
  ;
boolean_literal
  : TRUE
  | FALSE
  ;
/********** C.2 Syntactic grammar **********/

/***** C.2.1 Basic concepts *****/
namespace_name
  : qualified_identifier
  ;
type_name
  : qualified_identifier
  ;
/***** C.2.2 Types *****/
type
  : non_array_type
  | array_type
  ;
non_array_type
  : simple_type
  | type_name
  ;
simple_type
  : primitive_type
  | class_type
  | pointer_type
  ;
primitive_type
  : numeric_type
  | BOOL
  ;
numeric_type
  : integral_type
  | floating_point_type
  | DECIMAL
  ;
integral_type
  : SBYTE | BYTE | SHORT | USHORT | INT | UINT | LONG | ULONG | CHAR
  ;
floating_point_type
  : FLOAT | DOUBLE
  ;
class_type
  : OBJECT | STRING
  ;
pointer_type
  : type STAR
  | VOID STAR
  ;
array_type
  : array_type rank_specifier
  | simple_type rank_specifier
  | qualified_identifier rank_specifier
  ;
rank_specifiers_opt
  : /* Nothing */
  | rank_specifier rank_specifiers_opt
  ;
rank_specifier
  : RANK_SPECIFIER
  ;
/***** C.2.3 Variables *****/
variable_reference
  : expression
  ;
/***** C.2.4 Expressions *****/
argument_list
  : argument
  | argument_list COMMA argument
  ;
argument
  : expression
  | REF variable_reference
  | OUT variable_reference
  ;
primary_expression
  : parenthesized_expression
  | primary_expression_no_parenthesis
  ;
primary_expression_no_parenthesis
  : literal
  | array_creation_expression
  | member_access
  | invocation_expression
  | element_access
  | this_access
  | base_access
  | new_expression
  | typeof_expression
  | sizeof_expression
  | checked_expression
  | unchecked_expression
  ;
parenthesized_expression
  : LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE
  ;
member_access
  : primary_expression DOT IDENTIFIER
  | primitive_type DOT IDENTIFIER
  | class_type DOT IDENTIFIER
  ;
invocation_expression
  : primary_expression_no_parenthesis LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE
  | qualified_identifier LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE
  ;
argument_list_opt
  : /* Nothing */
  | argument_list
  ;
element_access
  : primary_expression LEFT_BRACKET expression_list RIGHT_BRACKET
  | qualified_identifier LEFT_BRACKET expression_list RIGHT_BRACKET
  ;
expression_list_opt
  : /* Nothing */
  | expression_list
  ;
expression_list
  : expression
  | expression_list COMMA expression
  ;
this_access
  : THIS
  ;
base_access
  : BASE DOT IDENTIFIER
  | BASE LEFT_BRACKET expression_list RIGHT_BRACKET
  ;
post_increment_expression
  : postfix_expression PLUSPLUS
  ;
post_decrement_expression
  : postfix_expression MINUSMINUS
  ;
new_expression
  : object_creation_expression
  ;
object_creation_expression
  : NEW type LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE
  ;
array_creation_expression
  : NEW non_array_type LEFT_BRACKET expression_list RIGHT_BRACKET rank_specifiers_opt array_initializer_opt
  | NEW array_type array_initializer
  ;
array_initializer_opt
  : /* Nothing */
  | array_initializer
  ;
typeof_expression
  : TYPEOF LEFT_BRACKET_CIRCLE type RIGHT_BRACKET_CIRCLE
  | TYPEOF LEFT_BRACKET_CIRCLE VOID RIGHT_BRACKET_CIRCLE
  ;
checked_expression
  : CHECKED LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE
  ;
unchecked_expression
  : UNCHECKED LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE
  ;
pointer_member_access
  : postfix_expression ARROW IDENTIFIER
  ;
addressof_expression
  : AND unary_expression
  ;
sizeof_expression
  : SIZEOF LEFT_BRACKET_CIRCLE type RIGHT_BRACKET_CIRCLE
  ;
postfix_expression
  : primary_expression
  | qualified_identifier
  | post_increment_expression
  | post_decrement_expression
  | pointer_member_access
  ;
unary_expression_not_plusminus
  : postfix_expression
  | EXCLAMATION_POINT unary_expression
  | TILDE unary_expression
  | cast_expression
  ;
pre_increment_expression
  : PLUSPLUS unary_expression
  ;
pre_decrement_expression
  : MINUSMINUS unary_expression
  ;
unary_expression
  : unary_expression_not_plusminus
  | PLUS unary_expression
  | MINUS unary_expression
  | STAR unary_expression
  | pre_increment_expression
  | pre_decrement_expression
  | addressof_expression
  ;
/* For cast_expression we really just want a (type) in the brackets,
 * but have to do some factoring to get rid of conflict with expressions.
 * The paremtnesised expression in the first three cases below should be 
 * semantically restricted to an identifier, optionally follwed by qualifiers
 */
cast_expression
  : LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE unary_expression_not_plusminus
  | LEFT_BRACKET_CIRCLE multiplicative_expression STAR RIGHT_BRACKET_CIRCLE unary_expression 
  | LEFT_BRACKET_CIRCLE qualified_identifier rank_specifier type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression  
  | LEFT_BRACKET_CIRCLE primitive_type type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression
  | LEFT_BRACKET_CIRCLE class_type type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression
  | LEFT_BRACKET_CIRCLE VOID type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression
  ;
type_quals_opt
  : /* Nothing */
  | type_quals
  ;
type_quals
  : type_qual
  | type_quals type_qual
  ;
type_qual 
  : rank_specifier 
  | STAR
  ;
multiplicative_expression
  : unary_expression
  | multiplicative_expression STAR unary_expression  
  | multiplicative_expression SLASH unary_expression
  | multiplicative_expression PERCENT unary_expression
  ;
additive_expression
  : multiplicative_expression
  | additive_expression PLUS multiplicative_expression
  | additive_expression MINUS multiplicative_expression
  ;
shift_expression
  : additive_expression 
  | shift_expression LTLT additive_expression
  | shift_expression GTGT additive_expression
  ;
relational_expression
  : shift_expression
  | relational_expression SMALLER shift_expression
  | relational_expression GREATER shift_expression
  | relational_expression LEQ shift_expression
  | relational_expression GEQ shift_expression
  | relational_expression IS type
  | relational_expression AS type
  ;
equality_expression
  : relational_expression
  | equality_expression EQEQ relational_expression
  | equality_expression NOTEQ relational_expression
  ;
and_expression
  : equality_expression
  | and_expression AND equality_expression
  ;
exclusive_or_expression
  : and_expression
  | exclusive_or_expression POWER and_expression
  ;
inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression OR exclusive_or_expression
  ;
conditional_and_expression
  : inclusive_or_expression
  | conditional_and_expression ANDAND inclusive_or_expression
  ;
conditional_or_expression
  : conditional_and_expression
  | conditional_or_expression OROR conditional_and_expression
  ;
conditional_expression
  : conditional_or_expression
  | conditional_or_expression QUESTION_MARK expression COLON expression
  ;
assignment
: unary_expression assignment_operator expression
  ;
assignment_operator
  : EQUAL | PLUSEQ | MINUSEQ | STAREQ | DIVEQ | MODEQ 
  | XOREQ | ANDEQ | OREQ | GTGTEQ | LTLTEQ 
  ;
expression
  : conditional_expression
  | assignment
  ;
constant_expression
  : expression
  ;
boolean_expression
  : expression
  ;
/***** C.2.5 Statements *****/
statement
  : labeled_statement
  | declaration_statement
  | embedded_statement
  ;
embedded_statement
  : block
  | empty_statement
  | expression_statement
  | selection_statement
  | iteration_statement
  | jump_statement
  | try_statement
  | checked_statement
  | unchecked_statement
  | lock_statement
  | using_statement
  | unsafe_statement
  | fixed_statement
  ;
block
  : LEFT_BRACKET_GROUP statement_list_opt RIGHT_BRACKET_GROUP
  ;
statement_list_opt
  : /* Nothing */
  | statement_list
  ;

statement_list
  : statement
  | statement_list statement
  ;
empty_statement
  : SEMICOLON
  ;
labeled_statement
  : IDENTIFIER COLON statement
  ;
declaration_statement
  : local_variable_declaration SEMICOLON
  | local_constant_declaration SEMICOLON
  | local_variable_declaration error
  | local_constant_declaration error
  ;
local_variable_declaration
  : type variable_declarators
  ;
variable_declarators
  : variable_declarator
  | variable_declarators COMMA variable_declarator
  ;
variable_declarator
  : IDENTIFIER
  | IDENTIFIER EQUAL variable_initializer
  ;
variable_initializer
  : expression
  | array_initializer
  | stackalloc_initializer
  ;
stackalloc_initializer
: STACKALLOC type  LEFT_BRACKET expression RIGHT_BRACKET 
  ; 
local_constant_declaration
  : CONST type constant_declarators
  ;
constant_declarators
  : constant_declarator
  | constant_declarators COMMA constant_declarator
  ;
constant_declarator
  : IDENTIFIER EQUAL constant_expression
  ;
expression_statement
  : statement_expression SEMICOLON
  |	statement_expression error
  ;
statement_expression
  : invocation_expression
  | object_creation_expression
  | assignment
  | post_increment_expression
  | post_decrement_expression
  | pre_increment_expression
  | pre_decrement_expression
  ;
selection_statement
  : if_statement
  | switch_statement
  ;
if_statement
  : IF LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE embedded_statement %prec THEN
  | IF LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE embedded_statement ELSE embedded_statement
  ;
switch_statement
  : SWITCH LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE switch_block
  ;
switch_block
  : LEFT_BRACKET_GROUP switch_sections_opt RIGHT_BRACKET_GROUP
  ;
switch_sections_opt
  : /* Nothing */
  | switch_sections
  ;
switch_sections
  : switch_section
  | switch_sections switch_section
  ;
switch_section
  : switch_labels statement_list
  ;
switch_labels
  : switch_label
  | switch_labels switch_label
  ;
switch_label
  : CASE constant_expression COLON
  | DEFAULT COLON
  ;
iteration_statement
  : while_statement
  | do_statement
  | for_statement
  | foreach_statement
  ;
unsafe_statement
  : UNSAFE block
  ;
while_statement
  : WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE embedded_statement
  ;
do_statement
  : DO embedded_statement WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE SEMICOLON
  | DO embedded_statement WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE error
  ;
for_statement
  : FOR LEFT_BRACKET_CIRCLE for_initializer_opt SEMICOLON for_condition_opt SEMICOLON for_iterator_opt RIGHT_BRACKET_CIRCLE embedded_statement
  | FOR LEFT_BRACKET_CIRCLE for_initializer_opt error for_condition_opt error for_iterator_opt RIGHT_BRACKET_CIRCLE embedded_statement

  ;
for_initializer_opt
  : /* Nothing */
  | for_initializer
  ;
for_condition_opt
  : /* Nothing */
  | for_condition
  ;
for_iterator_opt
  : /* Nothing */
  | for_iterator
  ;
for_initializer
  : local_variable_declaration
  | statement_expression_list
  ;
for_condition
  : boolean_expression
  ;
for_iterator
  : statement_expression_list
  ;
statement_expression_list
  : statement_expression
  | statement_expression_list COMMA statement_expression
  ;
foreach_statement
  : FOREACH LEFT_BRACKET_CIRCLE type IDENTIFIER IN expression RIGHT_BRACKET_CIRCLE embedded_statement
  ;
jump_statement
  : break_statement
  | continue_statement
  | goto_statement
  | return_statement
  | throw_statement
  ;
break_statement
  : BREAK SEMICOLON
  | BREAK error
  ;
continue_statement
  : CONTINUE SEMICOLON
  | CONTINUE error
  ;
goto_statement
  : GOTO IDENTIFIER SEMICOLON
  | GOTO CASE constant_expression SEMICOLON
  | GOTO DEFAULT SEMICOLON
  | GOTO IDENTIFIER error
  | GOTO CASE constant_expression error
  | GOTO DEFAULT error
  ;
return_statement
  : RETURN expression_opt SEMICOLON
  | RETURN expression_opt error
  ;
expression_opt
  : /* Nothing */
  | expression
  ;
throw_statement
  : THROW expression_opt SEMICOLON
  | THROW expression_opt error
  ;
try_statement
  : TRY block catch_clauses
  | TRY block finally_clause
  | TRY block catch_clauses finally_clause
  ;
catch_clauses
  : catch_clause
  | catch_clauses catch_clause
  ;
catch_clause
  : CATCH LEFT_BRACKET_CIRCLE class_type identifier_opt RIGHT_BRACKET_CIRCLE block
  | CATCH LEFT_BRACKET_CIRCLE type_name identifier_opt RIGHT_BRACKET_CIRCLE block
  | CATCH block
  ;
identifier_opt
  : /* Nothing */
  | IDENTIFIER
  ;
finally_clause
  : FINALLY block
  ;
checked_statement
  : CHECKED block
  ;
unchecked_statement
  : UNCHECKED block
  ;
lock_statement
  : LOCK LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE embedded_statement
  ;
using_statement
  : USING LEFT_BRACKET_CIRCLE resource_acquisition RIGHT_BRACKET_CIRCLE embedded_statement
  ;
resource_acquisition
  : local_variable_declaration
  | expression
  ;
fixed_statement
/*! : FIXED LEFT_BRACKET_CIRCLE pointer_type fixed_pointer_declarators RIGHT_BRACKET_CIRCLE embedded_statement */
  : FIXED LEFT_BRACKET_CIRCLE  type fixed_pointer_declarators RIGHT_BRACKET_CIRCLE embedded_statement
  ;
fixed_pointer_declarators
  : fixed_pointer_declarator
  | fixed_pointer_declarators COMMA fixed_pointer_declarator
  ;
fixed_pointer_declarator
  : IDENTIFIER EQUAL expression
  ;
compilation_unit
  : using_directives_opt attributes_opt 
  | using_directives_opt namespace_member_declarations
  ;
using_directives_opt
  : /* Nothing */
  | using_directives
  ;
attributes_opt
  : /* Nothing */
  | attributes
  ;
namespace_member_declarations_opt
  : /* Nothing */
  | namespace_member_declarations
  ;
namespace_declaration
  : attributes_opt NAMESPACE qualified_identifier namespace_body comma_opt
  ;
comma_opt
  : /* Nothing */
  | SEMICOLON
  ;
/*
qualified_identifier
  : IDENTIFIER
  | qualified_identifier DOT IDENTIFIER
  ;
*/
qualified_identifier
  : IDENTIFIER
  | qualifier IDENTIFIER
  ;
qualifier
  : IDENTIFIER DOT 
  | qualifier IDENTIFIER DOT 
  ;
namespace_body
  : LEFT_BRACKET_GROUP using_directives_opt namespace_member_declarations_opt RIGHT_BRACKET_GROUP
  ;
using_directives
  : using_directive
  | using_directives using_directive
  ;
using_directive
  : using_alias_directive
  | using_namespace_directive
  ;
using_alias_directive
  : USING IDENTIFIER EQUAL qualified_identifier SEMICOLON
  | USING IDENTIFIER EQUAL qualified_identifier error
  ;
using_namespace_directive
  : USING namespace_name SEMICOLON
  | USING namespace_name error
  ;
namespace_member_declarations
  : namespace_member_declaration
  | namespace_member_declarations namespace_member_declaration
  ;
namespace_member_declaration
  : namespace_declaration
  | type_declaration
  ;
type_declaration
  : class_declaration
  | struct_declaration
  | interface_declaration
  | enum_declaration
  | delegate_declaration
  ;

/***** Modifiers *****/
/* This now replaces:
 * class_modifier, constant_modifier, field_modifier, method_modifier, 
 * property_modifier, event_modifier, indexer_modifier, operator_modifier, 
 * constructor_modifier, struct_modifier, interface_modifier, 
 * enum_modifier, delegate_modifier
 */
modifiers_opt
  : /* Nothing */
  | modifiers
  ;
modifiers
  : modifier
  | modifiers modifier
  ;
modifier
  : ABSTRACT
  | EXTERN
  | INTERNAL
  | NEW
  | OVERRIDE
  | PRIVATE
  | PROTECTED
  | PUBLIC
  | READONLY
  | SEALED
  | STATIC
  | UNSAFE
  | VIRTUAL
  | VOLATILE
  ;
/***** C.2.6 Classes *****/
class_declaration
  : attributes_opt modifiers_opt CLASS IDENTIFIER class_base_opt class_body comma_opt
  ;
class_base_opt
  : /* Nothing */
  | class_base
  ;
class_base
  : COLON class_type
  | COLON interface_type_list
  | COLON class_type COMMA interface_type_list
  ;
interface_type_list
  : type_name
  | interface_type_list COMMA type_name
  ;
class_body
  : LEFT_BRACKET_GROUP class_member_declarations_opt RIGHT_BRACKET_GROUP
  ;
class_member_declarations_opt
  : /* Nothing */
  | class_member_declarations
  ;
class_member_declarations
  : class_member_declaration
  | class_member_declarations class_member_declaration
  ;
class_member_declaration
  : constant_declaration
  | field_declaration
  | method_declaration
  | property_declaration
  | event_declaration
  | indexer_declaration
  | operator_declaration
  | constructor_declaration
  | destructor_declaration
/*  | static_constructor_declaration */
  | type_declaration
  ;
constant_declaration
  : attributes_opt modifiers_opt CONST type constant_declarators SEMICOLON
  | attributes_opt modifiers_opt CONST type constant_declarators error
  ;
field_declaration
  : attributes_opt modifiers_opt type variable_declarators SEMICOLON
  | attributes_opt modifiers_opt type variable_declarators error
  ;
method_declaration
  : method_header method_body
  ;
/* Inline return_type to avoid conflict with field_declaration */
method_header
  : attributes_opt modifiers_opt type qualified_identifier LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE
  | attributes_opt modifiers_opt VOID qualified_identifier LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE
  ;
formal_parameter_list_opt
  : /* Nothing */
  | formal_parameter_list
  ;
return_type
  : type
  | VOID
  ;
method_body
  : block
  | SEMICOLON
  ;
formal_parameter_list
  : formal_parameter
  | formal_parameter_list COMMA formal_parameter
  ;
formal_parameter
  : fixed_parameter
  | parameter_array
  ;
fixed_parameter
  : attributes_opt parameter_modifier_opt type IDENTIFIER
  ;
parameter_modifier_opt
  : /* Nothing */
  | REF
  | OUT
  ;
parameter_array
/*!  : attributes_opt PARAMS array_type IDENTIFIER */
  : attributes_opt PARAMS type IDENTIFIER
  ;
property_declaration
  : attributes_opt modifiers_opt type qualified_identifier 
      ENTER_getset
    LEFT_BRACKET_GROUP accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_getset
  ;
accessor_declarations
  : get_accessor_declaration set_accessor_declaration_opt
  | set_accessor_declaration get_accessor_declaration_opt
  ;
set_accessor_declaration_opt
  : /* Nothing */
  | set_accessor_declaration
  ;
get_accessor_declaration_opt
  : /* Nothing */
  | get_accessor_declaration
  ;
get_accessor_declaration
  : attributes_opt GET 
      EXIT_getset
    accessor_body
      ENTER_getset
  ;
set_accessor_declaration
  : attributes_opt SET 
      EXIT_getset
    accessor_body
      ENTER_getset
  ;
accessor_body
  : block
  | SEMICOLON
  ;
event_declaration
  : attributes_opt modifiers_opt EVENT type variable_declarators SEMICOLON
  | attributes_opt modifiers_opt EVENT type qualified_identifier 
      ENTER_accessor_decl 
    LEFT_BRACKET_GROUP event_accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_accessor_decl
  ;
event_accessor_declarations
  : add_accessor_declaration remove_accessor_declaration
  | remove_accessor_declaration add_accessor_declaration
  ;
add_accessor_declaration
  : attributes_opt ADD 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl
  ;
remove_accessor_declaration
  : attributes_opt REMOVE 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl
  ;
indexer_declaration
  : attributes_opt modifiers_opt indexer_declarator 
      ENTER_getset
    LEFT_BRACKET_GROUP accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_getset
  ;
indexer_declarator
  : type THIS LEFT_BRACKET formal_parameter_list RIGHT_BRACKET
/* | type type_name DOT THIS LEFT_BRACKET formal_parameter_list RIGHT_BRACKET */
  | type qualified_this LEFT_BRACKET formal_parameter_list RIGHT_BRACKET
  ;
qualified_this
  : qualifier THIS
  ;
/* Widen operator_declaration to make modifiers optional */
operator_declaration
  : attributes_opt modifiers_opt operator_declarator operator_body
  ;
operator_declarator
  : overloadable_operator_declarator
  | conversion_operator_declarator
  ;
overloadable_operator_declarator
  : type OPERATOR overloadable_operator LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE
  | type OPERATOR overloadable_operator LEFT_BRACKET_CIRCLE type IDENTIFIER COMMA type IDENTIFIER RIGHT_BRACKET_CIRCLE
  ;
overloadable_operator
  : PLUS | MINUS 
  | EXCLAMATION_POINT | TILDE | PLUSPLUS | MINUSMINUS | TRUE | FALSE
  | STAR | SLASH | PERCENT | AND | OR | POWER 
  | LTLT | GTGT | EQEQ | NOTEQ | GREATER | SMALLER | GEQ | LEQ
  ;
conversion_operator_declarator
  : IMPLICIT OPERATOR type LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE
  | EXPLICIT OPERATOR type LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE
  ;
constructor_declaration
  : attributes_opt modifiers_opt constructor_declarator constructor_body
  ;
constructor_declarator
  : IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE constructor_initializer_opt
  ;
constructor_initializer_opt
  : /* Nothing */
  | constructor_initializer
  ;
constructor_initializer
  : COLON BASE LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE
  | COLON THIS LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE
  ;
/* Widen from unsafe_opt STATIC to modifiers_opt */
/* This is now subsumed by constructor_declaration - delete
 * static_constructor_declaration
 *  : attributes_opt modifiers_opt IDENTIFIER LEFT_BRACKET_CIRCLE RIGHT_BRACKET_CIRCLE block
 *  ;
 */
/* No longer needed after modification of static_constructor_declaration
 * unsafe_opt
 * : 
 * | UNSAFE
 * ;
 */
/* Widen from unsafe_opt to modifiers_opt */
destructor_declaration
  : attributes_opt modifiers_opt TILDE IDENTIFIER LEFT_BRACKET_CIRCLE RIGHT_BRACKET_CIRCLE block
  ;
operator_body
  : block
  | SEMICOLON
  ;
constructor_body /*** Added by JP - same as method_body ***/
  : block
  | SEMICOLON
  ;

/***** C.2.7 Structs *****/
struct_declaration
  : attributes_opt modifiers_opt STRUCT IDENTIFIER struct_interfaces_opt struct_body comma_opt
  ;
struct_interfaces_opt
  : /* Nothing */
  | struct_interfaces
  ;
struct_interfaces
  : COLON interface_type_list
  ;
struct_body
  : LEFT_BRACKET_GROUP struct_member_declarations_opt RIGHT_BRACKET_GROUP
  ;
struct_member_declarations_opt
  : /* Nothing */
  | struct_member_declarations
  ;
struct_member_declarations
  : struct_member_declaration
  | struct_member_declarations struct_member_declaration
  ;
struct_member_declaration
  : constant_declaration
  | field_declaration
  | method_declaration
  | property_declaration
  | event_declaration
  | indexer_declaration
  | operator_declaration
  | constructor_declaration
/*  | static_constructor_declaration */
  | type_declaration
  ;

/***** C.2.8 Arrays *****/
array_initializer
  : LEFT_BRACKET_GROUP variable_initializer_list_opt RIGHT_BRACKET_GROUP
  | LEFT_BRACKET_GROUP variable_initializer_list COMMA RIGHT_BRACKET_GROUP
  ;
variable_initializer_list_opt
  : /* Nothing */
  | variable_initializer_list
  ;
variable_initializer_list
  : variable_initializer
  | variable_initializer_list COMMA variable_initializer
  ;

/***** C.2.9 Interfaces *****/
interface_declaration
  : attributes_opt modifiers_opt INTERFACE IDENTIFIER interface_base_opt interface_body comma_opt
  ;
interface_base_opt
  : /* Nothing */
  | interface_base
  ;
interface_base
  : COLON interface_type_list
  ;
interface_body
  : LEFT_BRACKET_GROUP interface_member_declarations_opt RIGHT_BRACKET_GROUP
  ;
interface_member_declarations_opt
  : /* Nothing */
  | interface_member_declarations
  ;
interface_member_declarations
  : interface_member_declaration
  | interface_member_declarations interface_member_declaration
  ;
interface_member_declaration
  : interface_method_declaration
  | interface_property_declaration
  | interface_event_declaration
  | interface_indexer_declaration
  ;
/* inline return_type to avoid conflict with interface_property_declaration */
interface_method_declaration
  : attributes_opt new_opt type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE interface_empty_body
  | attributes_opt new_opt VOID IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE interface_empty_body
  ;
new_opt
  : /* Nothing */
  | NEW
  ;
interface_property_declaration
  : attributes_opt new_opt type IDENTIFIER 
      ENTER_getset
    LEFT_BRACKET_GROUP interface_accessors RIGHT_BRACKET_GROUP
      EXIT_getset
  ;
interface_indexer_declaration
  : attributes_opt new_opt type THIS 
    LEFT_BRACKET formal_parameter_list RIGHT_BRACKET 
      ENTER_getset
    LEFT_BRACKET_GROUP interface_accessors RIGHT_BRACKET_GROUP
      EXIT_getset
  ;

interface_accessors
  : attributes_opt GET interface_empty_body
  | attributes_opt SET interface_empty_body
  | attributes_opt GET interface_empty_body attributes_opt SET interface_empty_body
  | attributes_opt SET interface_empty_body attributes_opt GET interface_empty_body
  ;
interface_event_declaration
  : attributes_opt new_opt EVENT type IDENTIFIER interface_empty_body
  ;

/* mono seems to allow this */
interface_empty_body
  : SEMICOLON
  | LEFT_BRACKET_GROUP RIGHT_BRACKET_GROUP
  ;

/***** C.2.10 Enums *****/
enum_declaration
  : attributes_opt modifiers_opt ENUM IDENTIFIER enum_base_opt enum_body comma_opt
  ;
enum_base_opt
  : /* Nothing */
  | enum_base
  ;
enum_base
  : COLON integral_type
  ;
enum_body
  : LEFT_BRACKET_GROUP enum_member_declarations_opt RIGHT_BRACKET_GROUP
  | LEFT_BRACKET_GROUP enum_member_declarations COMMA RIGHT_BRACKET_GROUP
  ;
enum_member_declarations_opt
  : /* Nothing */
  | enum_member_declarations
  ;
enum_member_declarations
  : enum_member_declaration
  | enum_member_declarations COMMA enum_member_declaration
  ;
enum_member_declaration
  : attributes_opt IDENTIFIER
  | attributes_opt IDENTIFIER EQUAL constant_expression
  ;

/***** C.2.11 Delegates *****/
delegate_declaration
  : attributes_opt modifiers_opt DELEGATE return_type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE SEMICOLON
  | attributes_opt modifiers_opt DELEGATE return_type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE error
  ;

/***** C.2.12 Attributes *****/
attributes
  : attribute_sections
  ;
attribute_sections
  : attribute_section
  | attribute_sections attribute_section
  ;
attribute_section
  : ENTER_attrib LEFT_BRACKET attribute_target_specifier_opt attribute_list RIGHT_BRACKET EXIT_attrib
  | ENTER_attrib LEFT_BRACKET attribute_target_specifier_opt attribute_list COMMA RIGHT_BRACKET EXIT_attrib
  ;
attribute_target_specifier_opt
  : /* Nothing */
  | attribute_target_specifier
  ;
attribute_target_specifier
  : attribute_target COLON
  ;
attribute_target
  : ASSEMBLY
  | FIELD
  | EVENT
  | METHOD
  | MODULE
  | PARAM
  | PROPERTY
  | RETURN
  | TYPE
  ;
attribute_list
  : attribute
  | attribute_list COMMA attribute
  ;
attribute
  : attribute_name attribute_arguments_opt
  ;
attribute_arguments_opt
  : /* Nothing */
  | attribute_arguments
  ;
attribute_name
  : type_name
  ;
attribute_arguments
  : LEFT_BRACKET_CIRCLE expression_list_opt RIGHT_BRACKET_CIRCLE
  ;



/** Dummy rules for those context-sensitive "keywords" **/
ENTER_attrib 
  : { /* lex_enter_attrib(); */ }
  ;
EXIT_attrib 
  : { /* lex_exit_attrib(); */ }
  ;
ENTER_accessor_decl 
  : { /* lex_enter_accessor(); */ }
  ;
EXIT_accessor_decl
  : { /* lex_exit_accessor();*/ }
  ;
ENTER_getset
  : { /* lex_enter_getset();*/ }
  ;
EXIT_getset
  : { /* lex_exit_getset();*/ }
  ;



%%

void yyerror(const char* s)
{
	extern int line_no;
	extern int col_no;
	fprintf (stderr,"[%d, %d] -> %s\n", line_no, col_no,s);
	
}




