/* Based on Appendix C of the C# Language Specification,
 *  version 0.28 of 5/7/2001
 */



  %define parse.error verbose


%{
	#define YYERROR_VERBOSE 1
	#define YYDEBUG 1
	
	#include <iostream>
	#include <FlexLexer.h>
	#include <stack>
	#include <string>
	#include "../logger/Logger.h"
	#include "../Error Handler/error_handler.h"

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	Logger l("parser.log");
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
  : boolean_literal		{l.a("literal Bool");}
  | INTEGER_LITERAL		{l.a("literal Integer");}
  | REAL_LITERAL		{l.a("literal Real");}
  | CHARACTER_LITERAL	{l.a("literal Char");}
  | STRING_LITERAL		{l.a("literal String");}
  | NULL_LITERAL		{l.a("literal Null");}
  ;
boolean_literal
  : TRUE	{l.a("boolean_literal True");}
  | FALSE	{l.a("boolean_literal False");}
  ;
/********** C.2 Syntactic grammar **********/

/***** C.2.1 Basic concepts *****/
namespace_name
  : qualified_identifier	{l.a("namespace_name");}	
  ;
type_name
  : qualified_identifier	{l.a("type_name");}
  ;
/***** C.2.2 Types *****/
type
  : non_array_type	{l.a("type Non Array");}	
  | array_type		{l.a("type Array");}	
  ;
non_array_type
  : simple_type		{l.a("non_array_type simple type");}
  | type_name		{l.a("non_array_type type name");}
  ;
simple_type
  : primitive_type	{l.a("simple_type primitive type");}
  | class_type		{l.a("simple_type class type");}
  | pointer_type	{l.a("simple_type pointer type");}
  ;
primitive_type
  : numeric_type	{l.a("primitive_type numeric type");}
  | BOOL			{l.a("primitive_type bool");}
  ;
numeric_type
  : integral_type			{l.a("numeric_type integral_type");}
  | floating_point_type		{l.a("numeric_type floating_point_type");}
  | DECIMAL					{l.a("numeric_type decimal");}
  ;
integral_type
  : SBYTE	 {l.a("integral_type SBYTE");}
  | BYTE	 {l.a("integral_type BYTE");}
  | SHORT	 {l.a("integral_type SHORT");}
  | USHORT	 {l.a("integral_type USHORT");}
  | INT		 {l.a("integral_type INT");}
  | UINT	 {l.a("integral_type UINT");}
  | LONG	 {l.a("integral_type LONG");}
  | ULONG	 {l.a("integral_type ULONG");}
  | CHAR	 {l.a("integral_type CHAR");}
  ;
floating_point_type
  : FLOAT	{l.a("floating_point_type FLOAT");}
  | DOUBLE	{l.a("floating_point_type DOUBLE");}
  ;
class_type
  : OBJECT  {l.a("class_type OBJECT");}
  | STRING  {l.a("class_type STRING");}
  ;
pointer_type
  : type STAR	{l.a("pointer_type type");}
  | VOID STAR	{l.a("pointer_type VOID");}
  ;
array_type
  : array_type rank_specifier				{l.a("array_type array_type");}
  | simple_type rank_specifier				{l.a("array_type simple_type");}
  | qualified_identifier rank_specifier		{l.a("array_type qualified_identifier");}
  ;
rank_specifiers_opt
  : /* Nothing */
  | rank_specifier rank_specifiers_opt	{l.a("rank_specifiers_opt");}
  ;
rank_specifier
  : RANK_SPECIFIER		{l.a("rank_specifier");}
  ;
/***** C.2.3 Variables *****/
variable_reference
  : expression	{l.a("variable_reference");}
  ;
/***** C.2.4 Expressions *****/
argument_list
  : argument						{l.a("argument_list argument");}
  | argument_list COMMA argument	{l.a("argument_list argument_list");}
  ;
argument
  : expression					{l.a("argument expression");}
  | REF variable_reference		{l.a("argument REF");}
  | OUT variable_reference		{l.a("argument OUT");}
  ;
primary_expression
  : parenthesized_expression			{l.a("primary_expression parenthesized_expression");}
  | primary_expression_no_parenthesis	{l.a("primary_expression primary_expression_no_parenthesis");}
  ;
primary_expression_no_parenthesis
  : literal							{l.a("primary_expression_no_parenthesis literal");}
  | array_creation_expression		{l.a("primary_expression_no_parenthesis array_creation_expression");}
  | member_access					{l.a("primary_expression_no_parenthesis member_access");}
  | invocation_expression			{l.a("primary_expression_no_parenthesis invocation_expression");}
  | element_access					{l.a("primary_expression_no_parenthesis element_access");}
  | this_access						{l.a("primary_expression_no_parenthesis this_access");}
  | base_access						{l.a("primary_expression_no_parenthesis base_access");}
  | new_expression					{l.a("primary_expression_no_parenthesis new_expression");}
  | typeof_expression				{l.a("primary_expression_no_parenthesis typeof_expression");}
  | sizeof_expression				{l.a("primary_expression_no_parenthesis sizeof_expression");}
  | checked_expression				{l.a("primary_expression_no_parenthesis checked_expression");}
  | unchecked_expression			{l.a("primary_expression_no_parenthesis unchecked_expression");}
  ;
parenthesized_expression
  : LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE		{l.a("parenthesized_expression");}
  ;
member_access
  : primary_expression DOT IDENTIFIER	{l.a("member_access primary_expression");}
  | primitive_type DOT IDENTIFIER		{l.a("member_access primitive_type");}
  | class_type DOT IDENTIFIER			{l.a("member_access class_type");}
  ;
invocation_expression
  : primary_expression_no_parenthesis LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE	{l.a("invocation_expression primary_expression_no_parenthesis");}
  | qualified_identifier LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE					{l.a("invocation_expression qualified_identifier");}
  ;
argument_list_opt
  : /* Nothing */
  | argument_list	{l.a("argument_list_opt");}
  ;
element_access
  : primary_expression LEFT_BRACKET expression_list RIGHT_BRACKET		{l.a("element_access primary_expression");}
  | qualified_identifier LEFT_BRACKET expression_list RIGHT_BRACKET		{l.a("element_access qualified_identifier");}
  ;
expression_list_opt
  : /* Nothing */
  | expression_list		{l.a("expression_list_opt");}
  ;
expression_list
  : expression							{l.a("expression_list expression");}
  | expression_list COMMA expression	{l.a("expression_list expression_list");}
  ;
this_access
  : THIS	{l.a("this_access");}
  ;
base_access
  : BASE DOT IDENTIFIER									{l.a("base_access BASE DOT IDENTIFIER");}
  | BASE LEFT_BRACKET expression_list RIGHT_BRACKET		{l.a("base_access BASE expression_list");}
  ;
post_increment_expression
  : postfix_expression PLUSPLUS		{l.a("post_increment_expression");}
  ;
post_decrement_expression
  : postfix_expression MINUSMINUS	{l.a("post_decrement_expression");}
  ;
new_expression
  : object_creation_expression		{l.a("new_expression");}
  ;
object_creation_expression
  : NEW type LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE		{l.a("object_creation_expression");}
  ;
array_creation_expression
  : NEW non_array_type LEFT_BRACKET expression_list RIGHT_BRACKET rank_specifiers_opt array_initializer_opt		{l.a("array_creation_expression non_array_type");}
  | NEW array_type array_initializer																			{l.a("array_creation_expression array_type");}
  ;
array_initializer_opt
  : /* Nothing */
  | array_initializer	{l.a("array_initializer_opt");}
  ;
typeof_expression
  : TYPEOF LEFT_BRACKET_CIRCLE type RIGHT_BRACKET_CIRCLE	{l.a("typeof_expression type");}
  | TYPEOF LEFT_BRACKET_CIRCLE VOID RIGHT_BRACKET_CIRCLE	{l.a("typeof_expression VOID");}
  ;
checked_expression
  : CHECKED LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE	{l.a("checked_expression");}
  ;
unchecked_expression
  : UNCHECKED LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE	{l.a("unchecked_expression");}
  ;
pointer_member_access
  : postfix_expression ARROW IDENTIFIER		{l.a("pointer_member_access");}
  ;
addressof_expression
  : AND unary_expression		{l.a("addressof_expression");}
  ;
sizeof_expression
  : SIZEOF LEFT_BRACKET_CIRCLE type RIGHT_BRACKET_CIRCLE		{l.a("sizeof_expression");}
  ;
postfix_expression
  : primary_expression			{l.a("postfix_expression primary_expression");}
  | qualified_identifier		{l.a("postfix_expression qualified_identifier");}
  | post_increment_expression	{l.a("postfix_expression post_increment_expression");}
  | post_decrement_expression	{l.a("postfix_expression post_decrement_expression");}
  | pointer_member_access		{l.a("postfix_expression pointer_member_access");}
  ;
unary_expression_not_plusminus
  : postfix_expression					{l.a("unary_expression_not_plusminus postfix_expression");}
  | EXCLAMATION_POINT unary_expression	{l.a("unary_expression_not_plusminus EXCLAMATION_POINT");}
  | TILDE unary_expression				{l.a("unary_expression_not_plusminus TILDE");}	
  | cast_expression						{l.a("unary_expression_not_plusminus cast_expression");}
  ;
pre_increment_expression
  : PLUSPLUS unary_expression	{l.a("pre_increment_expression");}
  ;
pre_decrement_expression
  : MINUSMINUS unary_expression	{l.a("pre_decrement_expression");}
  ;
unary_expression
  : unary_expression_not_plusminus	{l.a("unary_expression unary_expression_not_plusminus");}
  | PLUS unary_expression			{l.a("unary_expression PLUS");}
  | MINUS unary_expression			{l.a("unary_expression MINUS");}
  | STAR unary_expression			{l.a("unary_expression STAR");}
  | pre_increment_expression		{l.a("unary_expression pre_increment_expression");}
  | pre_decrement_expression		{l.a("unary_expression pre_decrement_expression");}
  | addressof_expression			{l.a("unary_expression addressof_expression");}
  ;
/* For cast_expression we really just want a (type) in the brackets,
 * but have to do some factoring to get rid of conflict with expressions.
 * The paremtnesised expression in the first three cases below should be 
 * semantically restricted to an identifier, optionally follwed by qualifiers
 */
cast_expression
  : LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE unary_expression_not_plusminus								{l.a("cast_expression expression");}
  | LEFT_BRACKET_CIRCLE multiplicative_expression STAR RIGHT_BRACKET_CIRCLE unary_expression						{l.a("cast_expression multiplicative_expression");}
  | LEFT_BRACKET_CIRCLE qualified_identifier rank_specifier type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression	{l.a("cast_expression qualified_identifier");}	
  | LEFT_BRACKET_CIRCLE primitive_type type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression							{l.a("cast_expression primitive_type");}
  | LEFT_BRACKET_CIRCLE class_type type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression								{l.a("cast_expression class_type");}
  | LEFT_BRACKET_CIRCLE VOID type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression									{l.a("cast_expression VOID");}
  ;	
type_quals_opt
  : /* Nothing */
  | type_quals	{l.a("type_quals_opt");}
  ;
type_quals
  : type_qual				{l.a("type_quals type_qual");}		
  | type_quals type_qual	{l.a("type_quals type_quals");}
  ;
type_qual 
  : rank_specifier	{l.a("type_qual rank_specifier");}
  | STAR			{l.a("type_qual STAR");}
  ;
multiplicative_expression
  : unary_expression
  | multiplicative_expression STAR unary_expression		{l.a("unary_expression STAR");}
  | multiplicative_expression SLASH unary_expression	{l.a("unary_expression SLASH");}
  | multiplicative_expression PERCENT unary_expression	{l.a("unary_expression PERCENT");}
  ;
additive_expression
  : multiplicative_expression								{l.a("additive_expression multiplicative_expression");}
  | additive_expression PLUS multiplicative_expression		{l.a("additive_expression additive_expression PLUS");}
  | additive_expression MINUS multiplicative_expression		{l.a("additive_expression additive_expression MINUS");}
  ;
shift_expression
  : additive_expression							{l.a("shift_expression additive_expression");}
  | shift_expression LTLT additive_expression	{l.a("shift_expression shift_expression LTLT");}
  | shift_expression GTGT additive_expression	{l.a("shift_expression shift_expression GTGT");}
  ;
relational_expression
  : shift_expression									{l.a("relational_expression relational_expression SMALLER");}
  | relational_expression SMALLER shift_expression		{l.a("relational_expression relational_expression SMALLER");}
  | relational_expression GREATER shift_expression		{l.a("relational_expression relational_expression GREATER");}
  | relational_expression LEQ shift_expression			{l.a("relational_expression relational_expression LEQ");}
  | relational_expression GEQ shift_expression			{l.a("relational_expression relational_expression GEQ");}	
  | relational_expression IS type						{l.a("relational_expression relational_expression IS");}
  | relational_expression AS type						{l.a("relational_expression relational_expression AS");}
  ;
equality_expression
  : relational_expression								{l.a("relational_expression relational_expression");}
  | equality_expression EQEQ relational_expression		{l.a("relational_expression equality_expression EQEQ");}
  | equality_expression NOTEQ relational_expression		{l.a("relational_expression equality_expression NOTEQ");}
  ;
and_expression
  : equality_expression						{l.a("and_expression equality_expression");}
  | and_expression AND equality_expression	{l.a("and_expression and_expression");}
  ;
exclusive_or_expression
  : and_expression										{l.a("exclusive_or_expression and_expression");}
  | exclusive_or_expression POWER and_expression		{l.a("exclusive_or_expression exclusive_or_expression");}
  ;
inclusive_or_expression
  : exclusive_or_expression									{l.a("inclusive_or_expression exclusive_or_expression");}
  | inclusive_or_expression OR exclusive_or_expression		{l.a("inclusive_or_expression inclusive_or_expression");}
  ;
conditional_and_expression
  : inclusive_or_expression										{l.a("conditional_and_expression inclusive_or_expression");}
  | conditional_and_expression ANDAND inclusive_or_expression	{l.a("conditional_and_expression conditional_and_expression");}
  ;
conditional_or_expression
  : conditional_and_expression									{l.a("conditional_or_expression conditional_and_expression");}
  | conditional_or_expression OROR conditional_and_expression	{l.a("conditional_or_expression c_a_e OROR c_a_e");}
  ;
conditional_expression
  : conditional_or_expression												{l.a("conditional_expression conditional_or_expression");}
  | conditional_or_expression QUESTION_MARK expression COLON expression		{l.a("conditional_expression c_o_e QUESTION_MARK c_o_e");}
  ;
assignment
: unary_expression assignment_operator expression	{l.a("assignment");}
  ;
assignment_operator
  : EQUAL	{l.a("assignment_operator EQUAL");}
  | PLUSEQ	{l.a("assignment_operator PLUSEQ");}
  | MINUSEQ	{l.a("assignment_operator MINUSEQ");}
  | STAREQ	{l.a("assignment_operator STAREQ");}
  | DIVEQ	{l.a("assignment_operator DIVEQ");}
  | MODEQ	{l.a("assignment_operator MODEQ");}
  | XOREQ	{l.a("assignment_operator XOREQ");}
  | ANDEQ	{l.a("assignment_operator ANDEQ");}
  | OREQ	{l.a("assignment_operator OREQ");}
  | GTGTEQ	{l.a("assignment_operator GTGTEQ");}
  | LTLTEQ	{l.a("assignment_operator LTLTEQ");}
  ;
expression
  : conditional_expression {l.a("expression conditional_expression");}
  | assignment			   {l.a("expression assignment");}
  ;
constant_expression
  : expression	{l.a("constant_expression");}
  ;
boolean_expression
  : expression	{l.a("boolean_expression");}
  ;
/***** C.2.5 Statements *****/
statement
  : labeled_statement		{l.a("statement");}
  | declaration_statement	{l.a("statement");}
  | embedded_statement		{l.a("statement");}
  ;
embedded_statement
  : block					{l.a("embedded_statement");}
  | empty_statement			{l.a("embedded_statement");}
  | expression_statement	{l.a("embedded_statement");}
  | selection_statement		{l.a("embedded_statement");}
  | iteration_statement		{l.a("embedded_statement");}
  | jump_statement			{l.a("embedded_statement");}
  | try_statement			{l.a("embedded_statement");}
  | checked_statement		{l.a("embedded_statement");}
  | unchecked_statement		{l.a("embedded_statement");}
  | lock_statement			{l.a("embedded_statement");}
  | using_statement			{l.a("embedded_statement");}
  | unsafe_statement		{l.a("embedded_statement");}
  | fixed_statement			{l.a("embedded_statement");}
  ;
block
  : LEFT_BRACKET_GROUP statement_list_opt RIGHT_BRACKET_GROUP	{l.a("block");}
  ;
statement_list_opt
  : /* Nothing */
  | statement_list	{l.a("statement_list_opt");}
  ;

statement_list
  : statement					{l.a("statement_list");}
  | statement_list statement	{l.a("statement_list");}
  ;
empty_statement
  : SEMICOLON	{l.a("empty_statement");}
  ;
labeled_statement
  : IDENTIFIER COLON statement	{l.a("labeled_statement");}
  ;
declaration_statement
  : local_variable_declaration SEMICOLON	{l.a("declaration_statement");}
  | local_constant_declaration SEMICOLON	{l.a("declaration_statement");}
  | local_variable_declaration error		{l.a("declaration_statement");}
  | local_constant_declaration error		{l.a("declaration_statement");}
  ;
local_variable_declaration
  : type variable_declarators		{l.a("local_variable_declaration");}
  ;
variable_declarators
  : variable_declarator									{l.a("variable_declarators");}
  | variable_declarators COMMA variable_declarator		{l.a("variable_declarators");}
  ;
variable_declarator
  : IDENTIFIER								{l.a("variable_declarator");}
  | IDENTIFIER EQUAL variable_initializer	{l.a("variable_declarator");}
  ;
variable_initializer
  : expression				{l.a("variable_initializer");}
  | array_initializer		{l.a("variable_initializer");}
  | stackalloc_initializer	{l.a("variable_initializer");}
  ;
stackalloc_initializer
: STACKALLOC type  LEFT_BRACKET expression RIGHT_BRACKET	{l.a("stackalloc_initializer");}
  ; 
local_constant_declaration
  : CONST type constant_declarators	{l.a("local_constant_declaration");}
  ;
constant_declarators
  : constant_declarator									{l.a("constant_declarators");}
  | constant_declarators COMMA constant_declarator		{l.a("constant_declarators");}
  ;
constant_declarator
  : IDENTIFIER EQUAL constant_expression	{l.a("constant_declarator");}
  ;
expression_statement
  : statement_expression SEMICOLON	{l.a("expression_statement");}
  |	statement_expression error		{l.a("expression_statement");}
  ;
statement_expression
  : invocation_expression			{l.a("statement_expression");}
  | object_creation_expression		{l.a("statement_expression");}
  | assignment						{l.a("statement_expression");}
  | post_increment_expression		{l.a("statement_expression");}
  | post_decrement_expression		{l.a("statement_expression");}
  | pre_increment_expression		{l.a("statement_expression");}
  | pre_decrement_expression		{l.a("statement_expression");}
  ;
selection_statement
  : if_statement		{l.a("selection_statement");}
  | switch_statement	{l.a("selection_statement");}
  ;
if_statement
  : IF LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE embedded_statement %prec THEN				{l.a("if_statement");}
  | IF LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE embedded_statement ELSE embedded_statement	{l.a("if_statement");}
  ;
switch_statement
  : SWITCH LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE switch_block		{l.a("switch_statement");}
  ;
switch_block
  : LEFT_BRACKET_GROUP switch_sections_opt RIGHT_BRACKET_GROUP		{l.a("switch_block");}
  ;
switch_sections_opt
  : /* Nothing */
  | switch_sections		{l.a("switch_sections_opt");}
  ;
switch_sections
  : switch_section					{l.a("switch_sections");}
  | switch_sections switch_section	{l.a("switch_sections");}
  ;
switch_section
  : switch_labels statement_list	{l.a("switch_section");}
  ;
switch_labels
  : switch_label				{l.a("switch_labels");}
  | switch_labels switch_label	{l.a("switch_labels");}
  ;
switch_label
  : CASE constant_expression COLON	{l.a("switch_label");}
  | DEFAULT COLON					{l.a("switch_label");}
  ;
iteration_statement
  : while_statement		{l.a("iteration_statement");}
  | do_statement		{l.a("iteration_statement");}
  | for_statement		{l.a("iteration_statement");}
  | foreach_statement	{l.a("iteration_statement");}
  ;
unsafe_statement
  : UNSAFE block	{l.a("unsafe_statement");}
  ;
while_statement
  : WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("while_statement");}
  ;
do_statement
  : DO embedded_statement WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE SEMICOLON	{l.a("do_statement");}
  | DO embedded_statement WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE error		{l.a("do_statement");}
  ;
for_statement
  : FOR LEFT_BRACKET_CIRCLE for_initializer_opt SEMICOLON for_condition_opt SEMICOLON for_iterator_opt RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("for_statement");}
  | FOR LEFT_BRACKET_CIRCLE for_initializer_opt error for_condition_opt error for_iterator_opt RIGHT_BRACKET_CIRCLE embedded_statement			{l.a("for_statement");}

  ;
for_initializer_opt
  : /* Nothing */
  | for_initializer	{l.a("for_initializer_opt");}
  ;
for_condition_opt
  : /* Nothing */
  | for_condition	{l.a("for_condition_opt");}
  ;
for_iterator_opt
  : /* Nothing */
  | for_iterator	{l.a("for_iterator_opt");}
  ;
for_initializer
  : local_variable_declaration	{l.a("for_initializer");}
  | statement_expression_list	{l.a("for_initializer");}
  ;
for_condition
  : boolean_expression	{l.a("for_condition");}
  ;
for_iterator
  : statement_expression_list	{l.a("for_iterator");}
  ;
statement_expression_list
  : statement_expression									{l.a("statement_expression_list");}
  | statement_expression_list COMMA statement_expression	{l.a("statement_expression_list");}
  ;
foreach_statement
  : FOREACH LEFT_BRACKET_CIRCLE type IDENTIFIER IN expression RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("foreach_statement");}
  ;
jump_statement
  : break_statement		{l.a("jump_statement");}
  | continue_statement	{l.a("jump_statement");}
  | goto_statement		{l.a("jump_statement");}
  | return_statement	{l.a("jump_statement");}
  | throw_statement		{l.a("jump_statement");}
  ;
break_statement
  : BREAK SEMICOLON	{l.a("break_statement");}
  | BREAK error		{l.a("break_statement");}
  ;
continue_statement
  : CONTINUE SEMICOLON	{l.a("continue_statement");}
  | CONTINUE error		{l.a("continue_statement");}
  ;
goto_statement
  : GOTO IDENTIFIER SEMICOLON					{l.a("goto_statement");}
  | GOTO CASE constant_expression SEMICOLON		{l.a("goto_statement");}
  | GOTO DEFAULT SEMICOLON						{l.a("goto_statement");}
  | GOTO IDENTIFIER error						{l.a("goto_statement");}
  | GOTO CASE constant_expression error			{l.a("goto_statement");}
  | GOTO DEFAULT error							{l.a("goto_statement");}
  ;
return_statement
  : RETURN expression_opt SEMICOLON	{l.a("return_statement");}
  | RETURN expression_opt error		{l.a("return_statement");}
  ;
expression_opt
  : /* Nothing */
  | expression	{l.a("expression_opt");}
  ;
throw_statement
  : THROW expression_opt SEMICOLON	{l.a("throw_statement");}
  | THROW expression_opt error		{l.a("throw_statement");}
  ;
try_statement
  : TRY block catch_clauses					{l.a("try_statement");}
  | TRY block finally_clause				{l.a("try_statement");}
  | TRY block catch_clauses finally_clause	{l.a("try_statement");}
  ;
catch_clauses	
  : catch_clause				{l.a("catch_clauses");}
  | catch_clauses catch_clause	{l.a("catch_clauses");}
  ;
catch_clause
  : CATCH LEFT_BRACKET_CIRCLE class_type identifier_opt RIGHT_BRACKET_CIRCLE block	{l.a("catch_clause");}
  | CATCH LEFT_BRACKET_CIRCLE type_name identifier_opt RIGHT_BRACKET_CIRCLE block	{l.a("catch_clause");}
  | CATCH block
  ;
identifier_opt
  : /* Nothing */	
  | IDENTIFIER		{l.a("identifier_opt");}
  ;
finally_clause
  : FINALLY block	{l.a("finally_clause");}
  ;
checked_statement
  : CHECKED block	{l.a("checked_statement");}
  ;
unchecked_statement
  : UNCHECKED block	{l.a("unchecked_statement");}
  ;
lock_statement
  : LOCK LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE embedded_statement			{l.a("lock_statement");}
  ;
using_statement
  : USING LEFT_BRACKET_CIRCLE resource_acquisition RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("using_statement");}
  ;
resource_acquisition
  : local_variable_declaration	{l.a("resource_acquisition");}
  | expression					{l.a("resource_acquisition");}
  ;
fixed_statement
/*! : FIXED LEFT_BRACKET_CIRCLE pointer_type fixed_pointer_declarators RIGHT_BRACKET_CIRCLE embedded_statement */
  : FIXED LEFT_BRACKET_CIRCLE  type fixed_pointer_declarators RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("fixed_statement");}
  ;
fixed_pointer_declarators
  : fixed_pointer_declarator									{l.a("fixed_pointer_declarators");}
  | fixed_pointer_declarators COMMA fixed_pointer_declarator	{l.a("fixed_pointer_declarators");}
  ;
fixed_pointer_declarator
  : IDENTIFIER EQUAL expression		{l.a("fixed_pointer_declarator");}
  ;
compilation_unit
  : using_directives_opt attributes_opt						{l.a("compilation_unit");}
  | using_directives_opt namespace_member_declarations		{l.a("compilation_unit");}
  ;
using_directives_opt
  : /* Nothing */
  | using_directives	{l.a("using_directives_opt");}
  ;
attributes_opt
  : /* Nothing */	
  | attributes	{l.a("attributes_opt");}
  ;
namespace_member_declarations_opt
  : /* Nothing */
  | namespace_member_declarations	{l.a("namespace_member_declarations_opt");}
  ;
namespace_declaration
  : attributes_opt NAMESPACE qualified_identifier namespace_body comma_opt	{l.a("namespace_declaration");}
  ;
comma_opt
  : /* Nothing */
  | SEMICOLON	{l.a("comma_opt");}
  ;	
/*
qualified_identifier
  : IDENTIFIER								{l.a("qualified_identifier");}
  | qualified_identifier DOT IDENTIFIER		{l.a("qualified_identifier");}
  ;
*/
qualified_identifier
  : IDENTIFIER				{l.a("qualified_identifier");}
  | qualifier IDENTIFIER	{l.a("qualified_identifier");}
  ;
qualifier
  : IDENTIFIER DOT				{l.a("qualifier");}
  | qualifier IDENTIFIER DOT	{l.a("qualifier");}
  ;
namespace_body
  : LEFT_BRACKET_GROUP using_directives_opt namespace_member_declarations_opt RIGHT_BRACKET_GROUP	{l.a("namespace_body");}
  ;
using_directives
  : using_directive						{l.a("using_directives");}
  | using_directives using_directive	{l.a("using_directives");}
  ;
using_directive
  : using_alias_directive		{l.a("using_directive");}
  | using_namespace_directive	{l.a("using_directive");}
  ;
using_alias_directive
  : USING IDENTIFIER EQUAL qualified_identifier SEMICOLON	{l.a("using_alias_directive");}
  | USING IDENTIFIER EQUAL qualified_identifier error		{l.a("using_alias_directive");}
  ;
using_namespace_directive
  : USING namespace_name SEMICOLON		{l.a("using_namespace_directive");}
  | USING namespace_name error			{l.a("using_namespace_directive");}
  ;
namespace_member_declarations
  : namespace_member_declaration									{l.a("namespace_member_declarations");}
  | namespace_member_declarations namespace_member_declaration		{l.a("namespace_member_declarations");}
  ;
namespace_member_declaration
  : namespace_declaration	{l.a("namespace_member_declaration");}
  | type_declaration		{l.a("namespace_member_declaration");}
  ;
type_declaration
  : class_declaration		{l.a("type_declaration");}
  | struct_declaration		{l.a("type_declaration");}
  | interface_declaration	{l.a("type_declaration");}
  | enum_declaration		{l.a("type_declaration");}
  | delegate_declaration	{l.a("type_declaration");}
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
  | modifiers	{l.a("modifiers_opt");}
  ;
modifiers
  : modifier			{l.a("modifiers");}
  | modifiers modifier	{l.a("modifiers");}
  ;
modifier
  : ABSTRACT	{l.a("modifier");}
  | EXTERN		{l.a("modifier");}
  | INTERNAL	{l.a("modifier");}
  | NEW			{l.a("modifier");}
  | OVERRIDE	{l.a("modifier");}
  | PRIVATE		{l.a("modifier");}
  | PROTECTED	{l.a("modifier");}
  | PUBLIC		{l.a("modifier");}
  | READONLY	{l.a("modifier");}
  | SEALED		{l.a("modifier");}
  | STATIC		{l.a("modifier");}
  | UNSAFE		{l.a("modifier");}
  | VIRTUAL		{l.a("modifier");}
  | VOLATILE	{l.a("modifier");}
  ;
/***** C.2.6 Classes *****/
class_declaration
  : attributes_opt modifiers_opt CLASS IDENTIFIER class_base_opt class_body comma_opt	{l.a("class_declaration");}
  ;
class_base_opt
  : /* Nothing */
  | class_base	{l.a("class_base_opt");}
  ;
class_base
  : COLON class_type
  | COLON interface_type_list					{l.a("class_base");}
  | COLON class_type COMMA interface_type_list	{l.a("class_base");}
  ;
interface_type_list
  : type_name								{l.a("interface_type_list");}
  | interface_type_list COMMA type_name		{l.a("interface_type_list");}
  ;
class_body
  : LEFT_BRACKET_GROUP class_member_declarations_opt RIGHT_BRACKET_GROUP	{l.a("class_body");}
  ;
class_member_declarations_opt
  : /* Nothing */
  | class_member_declarations	{l.a("class_member_declarations_opt");}
  ;
class_member_declarations
  : class_member_declaration								{l.a("class_member_declarations");}
  | class_member_declarations class_member_declaration		{l.a("class_member_declarations");}
  ;
class_member_declaration
  : constant_declaration				{l.a("class_member_declaration");}
  | field_declaration					{l.a("class_member_declaration");}
  | method_declaration					{l.a("class_member_declaration");}
  | property_declaration				{l.a("class_member_declaration");}
  | event_declaration					{l.a("class_member_declaration");}
  | indexer_declaration					{l.a("class_member_declaration");}	
  | operator_declaration				{l.a("class_member_declaration");}
  | constructor_declaration				{l.a("class_member_declaration");}
  | destructor_declaration				{l.a("class_member_declaration");}
/*  | static_constructor_declaration */
  | type_declaration					{l.a("class_member_declaration");}
  ;
constant_declaration
  : attributes_opt modifiers_opt CONST type constant_declarators SEMICOLON	{l.a("constant_declaration");}
  | attributes_opt modifiers_opt CONST type constant_declarators error		{l.a("constant_declaration");}
  ;
field_declaration
  : attributes_opt modifiers_opt type variable_declarators SEMICOLON		{l.a("field_declaration");}
  | attributes_opt modifiers_opt type variable_declarators error			{l.a("field_declaration");}
  ;
method_declaration
  : method_header method_body		{l.a("method_declaration");}
  ;
/* Inline return_type to avoid conflict with field_declaration */
method_header
  : attributes_opt modifiers_opt type qualified_identifier LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE	{l.a("method_header");}
  | attributes_opt modifiers_opt VOID qualified_identifier LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE	{l.a("method_header");}
  ;
formal_parameter_list_opt
  : /* Nothing */
  | formal_parameter_list	{l.a("formal_parameter_list_opt");}
  ;
return_type
  : type	{l.a("return_type");}
  | VOID	{l.a("return_type");}
  ;
method_body
  : block		{l.a("method_body");}
  | SEMICOLON	{l.a("method_body");}
  ;
formal_parameter_list
  : formal_parameter								{l.a("formal_parameter_list");}
  | formal_parameter_list COMMA formal_parameter	{l.a("formal_parameter_list");}
  ;
formal_parameter
  : fixed_parameter		{l.a("formal_parameter");}
  | parameter_array		{l.a("formal_parameter");}
  ;
fixed_parameter
  : attributes_opt parameter_modifier_opt type IDENTIFIER	{l.a("fixed_parameter");}
  ;	
parameter_modifier_opt
  : /* Nothing */
  | REF		{l.a("parameter_modifier_opt");}
  | OUT		{l.a("parameter_modifier_opt");}
  ;
parameter_array
/*!  : attributes_opt PARAMS array_type IDENTIFIER */
  : attributes_opt PARAMS type IDENTIFIER					{l.a("parameter_array");}
  ;
property_declaration
  : attributes_opt modifiers_opt type qualified_identifier 
      ENTER_getset
    LEFT_BRACKET_GROUP accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_getset													{l.a("property_declaration");}
  ;
accessor_declarations
  : get_accessor_declaration set_accessor_declaration_opt	{l.a("accessor_declarations");}
  | set_accessor_declaration get_accessor_declaration_opt	{l.a("accessor_declarations");}
  ;
set_accessor_declaration_opt
  : /* Nothing */
  | set_accessor_declaration	{l.a("set_accessor_declaration_opt");}
  ;
get_accessor_declaration_opt
  : /* Nothing */
  | get_accessor_declaration	{l.a("get_accessor_declaration_opt");}
  ;
get_accessor_declaration
  : attributes_opt GET 
      EXIT_getset
    accessor_body
      ENTER_getset		{l.a("get_accessor_declaration");}
  ;
set_accessor_declaration
  : attributes_opt SET 
      EXIT_getset
    accessor_body
      ENTER_getset		{l.a("set_accessor_declaration");}
  ;
accessor_body
  : block		{l.a("accessor_body");}
  | SEMICOLON	{l.a("accessor_body");}
  ;
event_declaration
  : attributes_opt modifiers_opt EVENT type variable_declarators SEMICOLON		{l.a("event_declaration");}
  | attributes_opt modifiers_opt EVENT type qualified_identifier 
      ENTER_accessor_decl 
    LEFT_BRACKET_GROUP event_accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_accessor_decl														{l.a("event_declaration");}
  ;
event_accessor_declarations
  : add_accessor_declaration remove_accessor_declaration	{l.a("event_accessor_declarations");}
  | remove_accessor_declaration add_accessor_declaration	{l.a("event_accessor_declarations");}
  ;
add_accessor_declaration
  : attributes_opt ADD 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl		{l.a("add_accessor_declaration");}
  ;
remove_accessor_declaration
  : attributes_opt REMOVE 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl		{l.a("remove_accessor_declaration");}
  ;
indexer_declaration
  : attributes_opt modifiers_opt indexer_declarator 
      ENTER_getset
    LEFT_BRACKET_GROUP accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_getset													{l.a("indexer_declaration");}
  ;
indexer_declarator
  : type THIS LEFT_BRACKET formal_parameter_list RIGHT_BRACKET						{l.a("indexer_declarator");}
/* | type type_name DOT THIS LEFT_BRACKET formal_parameter_list RIGHT_BRACKET */
  | type qualified_this LEFT_BRACKET formal_parameter_list RIGHT_BRACKET			{l.a("indexer_declarator");}
  ;
qualified_this
  : qualifier THIS		{l.a("qualified_this");}
  ;
/* Widen operator_declaration to make modifiers optional */
operator_declaration
  : attributes_opt modifiers_opt operator_declarator operator_body	{l.a("operator_declaration");}
  ;
operator_declarator
  : overloadable_operator_declarator	{l.a("operator_declarator");}
  | conversion_operator_declarator		{l.a("operator_declarator");}
  ;
overloadable_operator_declarator
  : type OPERATOR overloadable_operator LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE							{l.a("overloadable_operator_declarator");}
  | type OPERATOR overloadable_operator LEFT_BRACKET_CIRCLE type IDENTIFIER COMMA type IDENTIFIER RIGHT_BRACKET_CIRCLE		{l.a("overloadable_operator_declarator");}
  ;
overloadable_operator
  : PLUS					{l.a("overloadable_operator");}
  | MINUS					{l.a("overloadable_operator");}
  | EXCLAMATION_POINT		{l.a("overloadable_operator");}
  | TILDE					{l.a("overloadable_operator");}
  | PLUSPLUS				{l.a("overloadable_operator");}
  | MINUSMINUS				{l.a("overloadable_operator");}
  | TRUE					{l.a("overloadable_operator");}
  | FALSE					{l.a("overloadable_operator");}
  | STAR					{l.a("overloadable_operator");}
  | SLASH					{l.a("overloadable_operator");}
  | PERCENT					{l.a("overloadable_operator");}
  | AND						{l.a("overloadable_operator");}
  | OR						{l.a("overloadable_operator");}
  | POWER					{l.a("overloadable_operator");}
  | LTLT					{l.a("overloadable_operator");}
  | GTGT					{l.a("overloadable_operator");}
  | EQEQ					{l.a("overloadable_operator");}
  | NOTEQ					{l.a("overloadable_operator");}
  | GREATER					{l.a("overloadable_operator");}
  | SMALLER					{l.a("overloadable_operator");}
  | GEQ						{l.a("overloadable_operator");}
  | LEQ						{l.a("overloadable_operator");}
  ;
conversion_operator_declarator
  : IMPLICIT OPERATOR type LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE		{l.a("conversion_operator_declarator");}
  | EXPLICIT OPERATOR type LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE		{l.a("conversion_operator_declarator");}
  ;
constructor_declaration
  : attributes_opt modifiers_opt constructor_declarator constructor_body		{l.a("constructor_declaration");}
  ;
constructor_declarator
  : IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE constructor_initializer_opt		{l.a("constructor_declarator");}
  ;
constructor_initializer_opt
  : /* Nothing */
  | constructor_initializer		{l.a("constructor_initializer_opt");}
  ;
constructor_initializer
  : COLON BASE LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE		{l.a("constructor_initializer");}
  | COLON THIS LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE		{l.a("constructor_initializer");}
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
  : attributes_opt modifiers_opt TILDE IDENTIFIER LEFT_BRACKET_CIRCLE RIGHT_BRACKET_CIRCLE block	{l.a("destructor_declaration");}
  ;
operator_body
  : block		{l.a("operator_body");}
  | SEMICOLON	{l.a("operator_body");}
  ;
constructor_body /*** Added by JP - same as method_body ***/
  : block		{l.a("constructor_body");}
  | SEMICOLON	{l.a("constructor_body");}
  ;

/***** C.2.7 Structs *****/
struct_declaration
  : attributes_opt modifiers_opt STRUCT IDENTIFIER struct_interfaces_opt struct_body comma_opt	{l.a("struct_declaration");}
  ;
struct_interfaces_opt
  : /* Nothing */
  | struct_interfaces	{l.a("struct_interfaces_opt");}
  ;
struct_interfaces	
  : COLON interface_type_list	{l.a("struct_interfaces");}
  ;
struct_body
  : LEFT_BRACKET_GROUP struct_member_declarations_opt RIGHT_BRACKET_GROUP	{l.a("struct_body");}
  ;
struct_member_declarations_opt
  : /* Nothing */
  | struct_member_declarations	{l.a("struct_member_declarations_opt");}
  ;
struct_member_declarations
  : struct_member_declaration								{l.a("struct_member_declarations");}
  | struct_member_declarations struct_member_declaration	{l.a("struct_member_declarations");}
  ;
struct_member_declaration	
  : constant_declaration						{l.a("struct_member_declaration");}
  | field_declaration							{l.a("struct_member_declaration");}
  | method_declaration							{l.a("struct_member_declaration");}
  | property_declaration						{l.a("struct_member_declaration");}
  | event_declaration							{l.a("struct_member_declaration");}
  | indexer_declaration							{l.a("struct_member_declaration");}
  | operator_declaration						{l.a("struct_member_declaration");}
  | constructor_declaration						{l.a("struct_member_declaration");}
/*  | static_constructor_declaration */
  | type_declaration							{l.a("struct_member_declaration");}
  ;

/***** C.2.8 Arrays *****/
array_initializer
  : LEFT_BRACKET_GROUP variable_initializer_list_opt RIGHT_BRACKET_GROUP		{l.a("array_initializer");}
  | LEFT_BRACKET_GROUP variable_initializer_list COMMA RIGHT_BRACKET_GROUP		{l.a("array_initializer");}
  ;
variable_initializer_list_opt
  : /* Nothing */
  | variable_initializer_list	{l.a("variable_initializer_list_opt");}
  ;
variable_initializer_list
  : variable_initializer									{l.a("variable_initializer_list");}
  | variable_initializer_list COMMA variable_initializer	{l.a("variable_initializer_list");}
  ;

/***** C.2.9 Interfaces *****/
interface_declaration
  : attributes_opt modifiers_opt INTERFACE IDENTIFIER interface_base_opt interface_body comma_opt	{l.a("interface_declaration");}
  ;
interface_base_opt
  : /* Nothing */	
  | interface_base	{l.a("interface_base_opt");}
  ;
interface_base
  : COLON interface_type_list	{l.a("interface_base");}
  ;
interface_body
  : LEFT_BRACKET_GROUP interface_member_declarations_opt RIGHT_BRACKET_GROUP	{l.a("interface_body");}
  ;
interface_member_declarations_opt
  : /* Nothing */
  | interface_member_declarations			{l.a("interface_member_declarations_opt");}
  ;
interface_member_declarations
  : interface_member_declaration									{l.a("interface_member_declarations");}
  | interface_member_declarations interface_member_declaration		{l.a("interface_member_declarations");}
  ;
interface_member_declaration
  : interface_method_declaration		{l.a("interface_member_declaration");}
  | interface_property_declaration		{l.a("interface_member_declaration");}
  | interface_event_declaration			{l.a("interface_member_declaration");}
  | interface_indexer_declaration		{l.a("interface_member_declaration");}
  ;
/* inline return_type to avoid conflict with interface_property_declaration */
interface_method_declaration
  : attributes_opt new_opt type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE interface_empty_body		{l.a("interface_method_declaration");}
  | attributes_opt new_opt VOID IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE interface_empty_body		{l.a("interface_method_declaration");}
  ;
new_opt
  : /* Nothing */
  | NEW
  ;
interface_property_declaration
  : attributes_opt new_opt type IDENTIFIER 
      ENTER_getset
    LEFT_BRACKET_GROUP interface_accessors RIGHT_BRACKET_GROUP
      EXIT_getset															{l.a("interface_property_declaration");}
  ;
interface_indexer_declaration
  : attributes_opt new_opt type THIS 
    LEFT_BRACKET formal_parameter_list RIGHT_BRACKET 
      ENTER_getset
    LEFT_BRACKET_GROUP interface_accessors RIGHT_BRACKET_GROUP
      EXIT_getset															{l.a("interface_indexer_declaration");}
  ;

interface_accessors
  : attributes_opt GET interface_empty_body															{l.a("interface_accessors");}
  | attributes_opt SET interface_empty_body															{l.a("interface_accessors");}
  | attributes_opt GET interface_empty_body attributes_opt SET interface_empty_body					{l.a("interface_accessors");}
  | attributes_opt SET interface_empty_body attributes_opt GET interface_empty_body					{l.a("interface_accessors");}
  ;
interface_event_declaration
  : attributes_opt new_opt EVENT type IDENTIFIER interface_empty_body		{l.a("interface_event_declaration");}
  ;

/* mono seems to allow this */
interface_empty_body
  : SEMICOLON									{l.a("interface_empty_body");}
  | LEFT_BRACKET_GROUP RIGHT_BRACKET_GROUP		{l.a("interface_empty_body");}
  ;

/***** C.2.10 Enums *****/
enum_declaration
  : attributes_opt modifiers_opt ENUM IDENTIFIER enum_base_opt enum_body comma_opt		{l.a("enum_declaration");}
  ;
enum_base_opt
  : /* Nothing */
  | enum_base		{l.a("enum_base_opt");}
  ;
enum_base
  : COLON integral_type		{l.a("enum_base");}
  ;
enum_body
  : LEFT_BRACKET_GROUP enum_member_declarations_opt RIGHT_BRACKET_GROUP		{l.a("enum_body");}
  | LEFT_BRACKET_GROUP enum_member_declarations COMMA RIGHT_BRACKET_GROUP	{l.a("enum_body");}
  ;
enum_member_declarations_opt
  : /* Nothing */
  | enum_member_declarations		{l.a("enum_member_declarations_opt");}
  ;
enum_member_declarations
  : enum_member_declaration											{l.a("enum_member_declarations");}
  | enum_member_declarations COMMA enum_member_declaration			{l.a("enum_member_declarations");}
  ;
enum_member_declaration
  : attributes_opt IDENTIFIER								{l.a("enum_member_declaration");}
  | attributes_opt IDENTIFIER EQUAL constant_expression		{l.a("enum_member_declaration");}
  ;

/***** C.2.11 Delegates *****/
delegate_declaration
  : attributes_opt modifiers_opt DELEGATE return_type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE SEMICOLON		{l.a("enum_member_declaration");}
  | attributes_opt modifiers_opt DELEGATE return_type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE error			{l.a("enum_member_declaration");}
  ;

/***** C.2.12 Attributes *****/
attributes
  : attribute_sections		{l.a("attributes");}
  ;
attribute_sections
  : attribute_section							{l.a("attribute_sections");}
  | attribute_sections attribute_section		{l.a("attribute_sections");}
  ;
attribute_section
  : ENTER_attrib LEFT_BRACKET attribute_target_specifier_opt attribute_list RIGHT_BRACKET EXIT_attrib			{l.a("attribute_section");}
  | ENTER_attrib LEFT_BRACKET attribute_target_specifier_opt attribute_list COMMA RIGHT_BRACKET EXIT_attrib		{l.a("attribute_section");}
  ;
attribute_target_specifier_opt
  : /* Nothing */
  | attribute_target_specifier			{l.a("attribute_target_specifier_opt");}
  ;
attribute_target_specifier	
  : attribute_target COLON				{l.a("attribute_target_specifier");}
  ;
attribute_target
  : ASSEMBLY	{l.a("attribute_target");}
  | FIELD		{l.a("attribute_target");}
  | EVENT		{l.a("attribute_target");}
  | METHOD		{l.a("attribute_target");}
  | MODULE		{l.a("attribute_target");}
  | PARAM		{l.a("attribute_target");}
  | PROPERTY	{l.a("attribute_target");}
  | RETURN		{l.a("attribute_target");}
  | TYPE		{l.a("attribute_target");}
  ;
attribute_list
  : attribute						{l.a("attribute_list");}
  | attribute_list COMMA attribute	{l.a("attribute_list");}
  ;
attribute
  : attribute_name attribute_arguments_opt	{l.a("attribute");}
  ;
attribute_arguments_opt
  : /* Nothing */
  | attribute_arguments		{l.a("attribute_arguments_opt");}
  ;
attribute_name
  : type_name		{l.a("attribute_name");}
  ;
attribute_arguments
  : LEFT_BRACKET_CIRCLE expression_list_opt RIGHT_BRACKET_CIRCLE		{l.a("attribute_arguments");}
  ;



/** Dummy rules for those context-sensitive "keywords" **/
ENTER_attrib 
  : { /* lex_enter_attrib(); */ l.a("ENTER_attrib");}
  ;
EXIT_attrib 
  : { /* lex_exit_attrib(); */ l.a("EXIT_attrib");}
  ;
ENTER_accessor_decl 
  : { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl");}
  ;
EXIT_accessor_decl
  : { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl"); }
  ;
ENTER_getset
  : { /* lex_enter_getset();*/l.a("ENTER_getset"); }
  ;
EXIT_getset
  : { /* lex_exit_getset();*/l.a("EXIT_getset"); }
  ;



%%

void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




