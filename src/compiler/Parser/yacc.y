/* Based on Appendix C of the C# Language Specification,
 *  version 0.28 of 5/7/2001
 */




%{
	#define YYERROR_VERBOSE 1
	#define YYDEBUG 1
	
	#include <iostream>
	#include <stack>
	#include <string>
	#include<queue>
	#include "../logger/Logger.h"
	#include "../Error Handler/error_handler.h"
	#include "../Symbol Table/symbol_parser.h"

	extern symbolParser* SPL;

	using namespace std;
	

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	Logger l("logs/parser.log");
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

		string *modifier,*base;
		queue<string> *modifiers ,*bases;

		string *identifier;
		queue<string> *identifiers ;
		queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >* types_ids;

		bool known_type;
        
		}r;
	}




/* Special tokens to help disambiguate rank_specifiers */
%token RANK_SPECIFIER

/* C.1.4 Tokens */
%token IDENTIFIER
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
  : boolean_literal		{l.a("boolean_literal",1);}
  | INTEGER_LITERAL		{l.a("INTEGER_LITERAL",0);}
  | REAL_LITERAL		{l.a("REAL_LITERAL",0);}
  | CHARACTER_LITERAL	{l.a("CHARACTER_LITERAL",0);}
  | STRING_LITERAL		{l.a("STRING_LITERAL",0);}
  | NULL_LITERAL		{l.a("NULL_LITERAL",0);}
  ;
boolean_literal
  : TRUE				{l.a("TRUE",0);}
  | FALSE				{l.a("FALSE",0);}
  ;
/********** C.2 Syntactic grammar **********/

/***** C.2.1 Basic concepts *****/
namespace_name
  : qualified_identifier	{l.a("namespace_name",1);$<r.base>$ = $<r.base>1;}	
  ;
  
type_name
  : qualified_identifier	{l.a("type_name",1);$<r.base>$ = $<r.base>1;}
  ;
  
/***** C.2.2 Types *****/
type
  : non_array_type	{l.a("type",1);$<r.known_type>$ = $<r.known_type>1;$<r.base>$ = $<r.base>1;}
  | array_type		{l.a("type",1);$<r.known_type>$ = $<r.known_type>1;$<r.base>$ = $<r.base>1;}
  ;
  
non_array_type
  : simple_type		{l.a("non_array_type",1);$<r.known_type>$ = true;$<r.base>$ = $<r.base>1;}
  | type_name		{l.a("non_array_type",1);$<r.known_type>$ = false;$<r.base>$ = $<r.base>1;}
  ;
  
simple_type
  : primitive_type	{l.a("simple_type",1);$<r.base>$ = $<r.base>1;}
  | class_type		{l.a("simple_type",1);$<r.base>$ = $<r.base>1;}
  | pointer_type	{l.a("simple_type",1);$<r.base>$ = $<r.base>1;}
  ;

primitive_type
  : numeric_type	{l.a("primitive_type",1);$<r.base>$ = $<r.base>1;}
  | BOOL			{l.a("primitive_type",0);$<r.base>$ = new string("bool");}
  ;

numeric_type
  : integral_type			{l.a("numeric_type",1);$<r.base>$ = $<r.base>1;}
  | floating_point_type		{l.a("numeric_type",1);$<r.base>$ = $<r.base>1;}
  | DECIMAL					{l.a("numeric_type",0);$<r.base>$ = new string("decimal");}
  ;

integral_type
  : SBYTE	 {l.a("integral_type",0);$<r.base>$ = new string("sbyte");}
  | BYTE	 {l.a("integral_type",0);$<r.base>$ = new string("byte");}
  | SHORT	 {l.a("integral_type",0);$<r.base>$ = new string("short");}
  | USHORT	 {l.a("integral_type",0);$<r.base>$ = new string("ushort");}
  | INT		 {l.a("integral_type",0);$<r.base>$ = new string("int");}
  | UINT	 {l.a("integral_type",0);$<r.base>$ = new string("uint");}
  | LONG	 {l.a("integral_type",0);$<r.base>$ = new string("long");}
  | ULONG	 {l.a("integral_type",0);$<r.base>$ = new string("ulong");}
  | CHAR	 {l.a("integral_type",0);$<r.base>$ = new string("char");}
  ;
floating_point_type
  : FLOAT	{l.a("floating_point_type",0);$<r.base>$ = new string("float");}
  | DOUBLE	{l.a("floating_point_type",0);$<r.base>$ = new string("double");}
  ;
class_type
  : OBJECT									{l.a("class_type",0);$<r.base>$ = new string("object");}
  | STRING									{l.a("class_type",0);$<r.base>$ = new string("string");}
  ;
pointer_type
  : type STAR								{l.a("pointer_type",1);}
  | VOID STAR							    {l.a("pointer_type",0);}
  ;
array_type
  : array_type rank_specifier				{l.a("array_type",2);$<r.known_type>$ = $<r.known_type>1;$<r.base>$ = $<r.base>1;}
  | simple_type rank_specifier				{l.a("array_type",2);$<r.known_type>$ = true;$<r.base>$ = new string("");}
  | qualified_identifier rank_specifier		{l.a("array_type",2);$<r.known_type>$ = false;$<r.base>$ = $<r.base>1;}
  ;
rank_specifiers_opt
  : /* Nothing */							{l.a("rank_specifiers_opt",0);}
  | rank_specifier rank_specifiers_opt		{l.a("rank_specifiers_opt",2);}
  ;
rank_specifier
  : RANK_SPECIFIER							{l.a("rank_specifier",0);}
  ;
/***** C.2.3 Variables *****/
variable_reference
  : expression								{l.a("variable_reference",1);}
  ;
/***** C.2.4 Expressions *****/
argument_list
  : argument						{l.a("argument_list",1);}
  | argument_list COMMA argument	{l.a("argument_list",2);}
  ;
argument
  : expression							{l.a("argument",1);}
  | REF variable_reference				{l.a("argument",1);}
  | OUT variable_reference				{l.a("argument",1);}
  ;
primary_expression
  : parenthesized_expression			{l.a("primary_expression",1);}
  | primary_expression_no_parenthesis	{l.a("primary_expression",1);}
  ;
primary_expression_no_parenthesis
  : literal							{l.a("primary_expression_no_parenthesis",1);}
  | array_creation_expression		{l.a("primary_expression_no_parenthesis",1);}
  | member_access					{l.a("primary_expression_no_parenthesis",1);}
  | invocation_expression			{l.a("primary_expression_no_parenthesis",1);}
  | element_access					{l.a("primary_expression_no_parenthesis",1);}
  | this_access						{l.a("primary_expression_no_parenthesis",1);}
  | base_access						{l.a("primary_expression_no_parenthesis",1);}
  | new_expression					{l.a("primary_expression_no_parenthesis",1);}
  | typeof_expression				{l.a("primary_expression_no_parenthesis",1);}
  | sizeof_expression				{l.a("primary_expression_no_parenthesis",1);}
  | checked_expression				{l.a("primary_expression_no_parenthesis",1);}
  | unchecked_expression			{l.a("primary_expression_no_parenthesis",1);}
  ;
parenthesized_expression
  : LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE		{l.a("parenthesized_expression",1);}
  ;
member_access
  : primary_expression DOT IDENTIFIER	{l.a("member_access",1);}
  | primitive_type DOT IDENTIFIER		{l.a("member_access",1);}
  | class_type DOT IDENTIFIER			{l.a("member_access",1);}
  ;
invocation_expression
  : primary_expression_no_parenthesis LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE			 {l.a("invocation_expression",2);}
  | qualified_identifier LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE							 {l.a("invocation_expression",2);}
  ;
argument_list_opt
  : /* Nothing */		{l.a("argument_list_opt",0);}
  | argument_list		{l.a("argument_list_opt",1);}
  ;
element_access
  : primary_expression LEFT_BRACKET expression_list RIGHT_BRACKET		{l.a("element_access",2);}
  | qualified_identifier LEFT_BRACKET expression_list RIGHT_BRACKET		{l.a("element_access",2);}
  ;
expression_list_opt
  : /* Nothing */     {l.a("expression_list_opt",0);}
  | expression_list		{l.a("expression_list_opt",1);}
  ;
expression_list
  : expression							{l.a("expression_list",1);}
  | expression_list COMMA expression	{l.a("expression_list",2);}
  ;
this_access
  : THIS	{l.a("this_access",0);}
  ;
base_access
  : BASE DOT IDENTIFIER									{l.a("base_access",0);}
  | BASE LEFT_BRACKET expression_list RIGHT_BRACKET		{l.a("base_access",1);}
  ;
post_increment_expression
  : postfix_expression PLUSPLUS		{l.a("post_increment_expression",1);}
  ;
post_decrement_expression
  : postfix_expression MINUSMINUS	{l.a("post_decrement_expression",1);}
  ;
new_expression
  : object_creation_expression		{l.a("new_expression",1);}
  ;
object_creation_expression
  : NEW type LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE		{l.a("object_creation_expression",2);}
  ;
array_creation_expression
  : NEW non_array_type LEFT_BRACKET expression_list RIGHT_BRACKET rank_specifiers_opt array_initializer_opt		{l.a("array_creation_expression",4);}
  | NEW array_type array_initializer																			{l.a("array_creation_expression",2);}
  ;
array_initializer_opt
  : /* Nothing */		{l.a("array_initializer_opt",0);}
  | array_initializer	{l.a("array_initializer_opt",1);}
  ;
typeof_expression
  : TYPEOF LEFT_BRACKET_CIRCLE type RIGHT_BRACKET_CIRCLE	{l.a("typeof_expression",1);}
  | TYPEOF LEFT_BRACKET_CIRCLE VOID RIGHT_BRACKET_CIRCLE	{l.a("typeof_expression",0);}
  ;
checked_expression
  : CHECKED LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE	{l.a("checked_expression",1);}
  ;
unchecked_expression
  : UNCHECKED LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE	{l.a("unchecked_expression",1);}
  ;
pointer_member_access
  : postfix_expression  ARROW IDENTIFIER		{l.a("pointer_member_access",1);}
  ;
addressof_expression
  : AND unary_expression		{l.a("addressof_expression",1);}
  ;
sizeof_expression
  : SIZEOF LEFT_BRACKET_CIRCLE type RIGHT_BRACKET_CIRCLE		{l.a("sizeof_expression",1);}
  ;
postfix_expression
  : primary_expression			{l.a("postfix_expression",1);}
  | qualified_identifier		{l.a("postfix_expression",1);}
  | post_increment_expression  	{l.a("postfix_expression",1);}
  | post_decrement_expression	{l.a("postfix_expression",1);}
  | pointer_member_access		{l.a("postfix_expression",1);}
  ;
unary_expression_not_plusminus
  : EXCLAMATION_POINT unary_expression	{l.a("unary_expression_not_plusminus",1);}
  | TILDE unary_expression				{l.a("unary_expression_not_plusminus",1);}	
  | cast_expression						{l.a("unary_expression_not_plusminus",1);}
  | postfix_expression 		        	{l.a("unary_expression_not_plusminus",1);}
  ;
pre_increment_expression
  : PLUSPLUS unary_expression	{l.a("pre_increment_expression",1);}
  ;
pre_decrement_expression
  : MINUSMINUS unary_expression	{l.a("pre_decrement_expression",1);}
  ;
unary_expression
  : PLUS unary_expression			{l.a("unary_expression",1);}
  | MINUS unary_expression			{l.a("unary_expression",1);}
  | STAR unary_expression			{l.a("unary_expression",1);}
  | pre_increment_expression		{l.a("unary_expression",1);}
  | pre_decrement_expression		{l.a("unary_expression",1);}
  | addressof_expression			{l.a("unary_expression",1);}
  | unary_expression_not_plusminus	{l.a("unary_expression",1);}
  ;
/* For cast_expression we really just want a (type) in the brackets,
 * but have to do some factoring to get rid of conflict with expressions.
 * The paremtnesised expression in the first three cases below should be 
 * semantically restricted to an identifier, optionally follwed by qualifiers
 */
cast_expression
  : LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE unary_expression_not_plusminus								{l.a("cast_expression",2);}
  | LEFT_BRACKET_CIRCLE multiplicative_expression STAR RIGHT_BRACKET_CIRCLE unary_expression						{l.a("cast_expression",2);}
  | LEFT_BRACKET_CIRCLE qualified_identifier rank_specifier type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression	{l.a("cast_expression",4);}	
  | LEFT_BRACKET_CIRCLE primitive_type type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression							{l.a("cast_expression",3);}
  | LEFT_BRACKET_CIRCLE class_type type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression								{l.a("cast_expression",3);}
  | LEFT_BRACKET_CIRCLE VOID type_quals_opt RIGHT_BRACKET_CIRCLE unary_expression									{l.a("cast_expression",2);}
  ;	
type_quals_opt
  : /* Nothing */ {l.a("type_quals_opt",0);}
  | type_quals	{l.a("type_quals_opt",1);}
  ;
type_quals
  : type_qual				{l.a("type_quals",1);}		
  | type_quals type_qual	{l.a("type_quals",2);}
  ;
type_qual 
  : rank_specifier	{l.a("type_qual",1);}
  | STAR			{l.a("type_qual",0);}
  ;
multiplicative_expression
  : unary_expression
  | multiplicative_expression STAR unary_expression		{l.a("unary_expression",2);}
  | multiplicative_expression SLASH unary_expression	{l.a("unary_expression",2);}
  | multiplicative_expression PERCENT unary_expression	{l.a("unary_expression",2);}
  ;
additive_expression
  : multiplicative_expression								{l.a("additive_expression",1);}
  | additive_expression PLUS multiplicative_expression		{l.a("additive_expression",2);}
  | additive_expression MINUS multiplicative_expression		{l.a("additive_expression",2);}
  ;
shift_expression
  : additive_expression							    {l.a("shift_expression",1);}
  | shift_expression LTLT additive_expression	    {l.a("shift_expression",2);}
  | shift_expression GTGT additive_expression	    {l.a("shift_expression",2);}
  ;
relational_expression
  : shift_expression								                	{l.a("relational_expression",1);}
  | relational_expression SMALLER shift_expression						{l.a("relational_expression",2);}
  | relational_expression GREATER shift_expression						{l.a("relational_expression",2);}
  | relational_expression LEQ shift_expression							{l.a("relational_expression",2);}
  | relational_expression GEQ shift_expression							{l.a("relational_expression",2);}	
  | relational_expression IS type										{l.a("relational_expression",2);}
  | relational_expression AS type										{l.a("relational_expression",2);}
  ;
equality_expression
  : relational_expression							              	{l.a("equality_expression",1);}
  | equality_expression EQEQ relational_expression					{l.a("equality_expression",2);}
  | equality_expression NOTEQ relational_expression					{l.a("equality_expression",2);}
  ;
and_expression
  : equality_expression					                    	{l.a("and_expression",1);}
  | and_expression AND equality_expression						{l.a("and_expression",2);}
  ;
exclusive_or_expression
  : and_expression									              	{l.a("exclusive_or_expression",1);}
  | exclusive_or_expression POWER and_expression					{l.a("exclusive_or_expression",2);}
  ;
inclusive_or_expression
  : exclusive_or_expression									              {l.a("inclusive_or_expression",1);}
  | inclusive_or_expression OR exclusive_or_expression						{l.a("inclusive_or_expression",2);}
  ;
conditional_and_expression
  : inclusive_or_expression									                    	{l.a("conditional_and_expression",1);}
  | conditional_and_expression ANDAND inclusive_or_expression	    {l.a("conditional_and_expression",2);}
  ;
conditional_or_expression
  : conditional_and_expression									                  {l.a("conditional_or_expression",1);}
  | conditional_or_expression OROR conditional_and_expression	    {l.a("conditional_or_expression",2);}
  ;
conditional_expression
  : conditional_or_expression											                	{l.a("conditional_expression",1);}
  | conditional_or_expression QUESTION_MARK expression COLON expression						{l.a("conditional_expression",3);}
  ;
assignment
  : unary_expression assignment_operator expression                        	{l.a("assignment",3);}
  ;
assignment_operator
  : EQUAL	                                                            {l.a("assignment_operator EQUAL",0);}
  | PLUSEQ	                                                          {l.a("assignment_operator PLUSEQ",0);}
  | MINUSEQ	                                                          {l.a("assignment_operator MINUSEQ",0);}
  | STAREQ	                                                          {l.a("assignment_operator STAREQ",0);}
  | DIVEQ	                                                            {l.a("assignment_operator DIVEQ",0);}
  | MODEQ	                                                            {l.a("assignment_operator MODEQ",0);}
  | XOREQ	                                                            {l.a("assignment_operator XOREQ",0);}
  | ANDEQ	                                                            {l.a("assignment_operator ANDEQ",0);}
  | OREQ	                                                            {l.a("assignment_operator OREQ",0);}
  | GTGTEQ	                                                          {l.a("assignment_operator GTGTEQ",0);}
  | LTLTEQ	                                                          {l.a("assignment_operator LTLTEQ",0);}
  ;
expression
  : conditional_expression                                            {l.a("expression",1);}
  | assignment			                                                  {l.a("expression",1);}
  ;
constant_expression
  : expression	                                                      {l.a("constant_expression",1);}
  ;
boolean_expression
  : expression	                                                       {l.a("boolean_expression",1);}
  ;
/***** C.2.5 Statements *****/
statement
  : labeled_statement		                                              {l.a("statement",1);}
  | declaration_statement	                                              {l.a("statement",1);}
  | embedded_statement		                                              {l.a("statement",1);}
  ;
embedded_statement
  : block					                                             {l.a("embedded_statement",1);}
  | empty_statement			                                             {l.a("embedded_statement",1);}
  | expression_statement	                                             {l.a("embedded_statement",1);}
  | selection_statement		                                             {l.a("embedded_statement",1);}
  | iteration_statement		                                             {l.a("embedded_statement",1);}
  | jump_statement			                                             {l.a("embedded_statement",1);}
  | try_statement			                                             {l.a("embedded_statement",1);}
  | checked_statement		                                             {l.a("embedded_statement",1);}
  | unchecked_statement		                                             {l.a("embedded_statement",1);}
  | lock_statement			                                             {l.a("embedded_statement",1);}
  | using_statement			                                             {l.a("embedded_statement",1);}
  | unsafe_statement		                                             {l.a("embedded_statement",1);}
  | fixed_statement			                                             {l.a("embedded_statement",1);}
  ;
block
  : LEFT_BRACKET_GROUP  { SPL->add_scope(); }  statement_list_opt  RIGHT_BRACKET_GROUP	             {l.a("block",1);  SPL->endScope();}
  | LEFT_BRACKET_GROUP     error			                       RIGHT_BRACKET_GROUP			     {l.a("block",1,1);}
  ;
statement_list_opt
  : /* Nothing */                                                     {l.a("statement_list_opt",0);}
  | statement_list	                                                  {l.a("statement_list_opt",1);}
  ;

statement_list
  : statement					                                        {l.a("statement_list",1);}
  | statement_list statement	                                        {l.a("statement_list",2);}
  ;
empty_statement
  : SEMICOLON                                                        	{l.a("empty_statement",0);}
  ;
labeled_statement
  : IDENTIFIER COLON statement	                                      {l.a("labeled_statement",1);}
  ;
declaration_statement
  : local_variable_declaration SEMICOLON	                              {l.a("declaration_statement",1);}
  | local_constant_declaration SEMICOLON	                              {l.a("declaration_statement",1);}
  | local_variable_declaration error		                              { l.a("declaration_statement",1,1);}
  | local_constant_declaration error		                              { l.a("declaration_statement",1,1);}
  ;
local_variable_declaration
  : type variable_declarators 		                                      
	{
		l.a("local_variable_declaration",2);

		SPL->addLocalVariable(*$<r.base>1,*$<r.identifiers>2,$<r.known_type>1,false,$<r.line_no>2,$<r.col_no>2) ;
	}
  ;
variable_declarators
  : variable_declarator			       
			{	 l.a("variable_declarators",1); 
				 $<r.identifiers>$ = new queue<string>();
				 $<r.identifiers>$->push(*$<r.identifier>1);
		   }
  | variable_declarators COMMA variable_declarator		                
		   {      l.a("variable_declarators",2);
				  $<r.identifiers>$ = $<r.identifiers>1;
				  $<r.identifiers>$->push(*$<r.identifier>3);
		   }
  ;
variable_declarator
  : IDENTIFIER                
		  {		 l.a("variable_declarator",0); 
				 $<r.identifier>$ = new string ($<r.str>1) ; 
		  }
  | IDENTIFIER EQUAL variable_initializer	        
		   {		l.a("variable_declarator",1); 
					$<r.identifier>$ = new string ($<r.str>1);
		   }
  ;
variable_initializer
  : expression				                                       {l.a("variable_initializer",1);}
  | array_initializer		                                       {l.a("variable_initializer",1);}
  | stackalloc_initializer	                                       {l.a("variable_initializer",1);}
  ;
stackalloc_initializer
  : STACKALLOC type  LEFT_BRACKET expression RIGHT_BRACKET								{l.a("stackalloc_initializer",2);}
  ; 
local_constant_declaration
  : CONST type constant_declarators														
  {
		l.a("local_constant_declaration",2);
		SPL->addLocalVariable(*$<r.base>2,*$<r.identifiers>3,$<r.known_type>2,true,$<r.line_no>2,$<r.col_no>2) ;
  }
  ;
constant_declarators
  : constant_declarator																	
  {
		l.a("constant_declarators",1);
  		$<r.identifiers>$ = new queue<string>();
		$<r.identifiers>$->push(*$<r.identifier>1);
  }
  | constant_declarators COMMA constant_declarator										
  {
		l.a("constant_declarators",2);
	  	$<r.identifiers>$ = $<r.identifiers>1;
		$<r.identifiers>$->push(*$<r.identifier>3);	
  }
  ;
constant_declarator
  : IDENTIFIER EQUAL constant_expression                            					{l.a("constant_declarator",1);$<r.identifier>$ = new string($<r.str>1);}
  ;
  /*
expression_statement
  : statement_expression SEMICOLON									{l.a("expression_statement",1);}
  |	statement_expression error		                                {l.a("expression_statement",1,1);}
  ;
  */
  expression_statement
  : invocation_expression			SEMICOLON                             {l.a("expression_statement",1);}
  | object_creation_expression		SEMICOLON							  {l.a("expression_statement",1);}
  | assignment						SEMICOLON							  {l.a("expression_statement",1);}
  | post_increment_expression  		SEMICOLON                             {l.a("expression_statement",1);}
  | post_decrement_expression		SEMICOLON                             {l.a("expression_statement",1);}
  | pre_increment_expression		SEMICOLON                             {l.a("expression_statement",1);}
  | pre_decrement_expression		SEMICOLON                             {l.a("expression_statement",1);}
  | invocation_expression			error                             { l.a("expression_statement",1,1);}
  | object_creation_expression		error							  {l.a("expression_statement",1,1);}
  | assignment						error							  {l.a("expression_statement",1,1);}
  | post_increment_expression 		error                             {l.a("expression_statement",1,1);}
  | post_decrement_expression		error                             {l.a("expression_statement",1,1);}
  | pre_increment_expression		error                             {l.a("expression_statement",1,1);}
  | pre_decrement_expression		error                             {l.a("expression_statement",1,1);}
  ;
statement_expression
  : invocation_expression	 										{l.a("statement_expression",1);}
  | object_creation_expression	 						    		{l.a("statement_expression",1);}
  | assignment		          										{l.a("statement_expression",1);}
  | post_increment_expression										{l.a("statement_expression",1);}
  | post_decrement_expression									    {l.a("statement_expression",1);}
  | pre_increment_expression									    {l.a("statement_expression",1);}
  | pre_decrement_expression										{l.a("statement_expression",1);}
  ;
selection_statement
  : if_statement		                                                  {l.a("selection_statement",1);}
  | switch_statement													 {l.a("selection_statement",1);}
  ;
if_statement
  : IF left_bracket_circle boolean_expression right_bracket_circle embedded_statement %prec THEN				      {l.a("if_statement",2);}
  | IF left_bracket_circle boolean_expression right_bracket_circle embedded_statement ELSE embedded_statement	{l.a("if_statement",3);}
  ;
switch_statement
  : SWITCH left_bracket_circle expression right_bracket_circle switch_block		{l.a("switch_statement",2);}
  ;
switch_block
  : LEFT_BRACKET_GROUP switch_sections_opt RIGHT_BRACKET_GROUP		{l.a("switch_block",1);}
  ;
switch_sections_opt
  : /* Nothing */     {l.a("switch_sections_opt",0);}
  | switch_sections		{l.a("switch_sections_opt",1);}
  ;
switch_sections
  : switch_section					        {l.a("switch_sections",1);}
  | switch_sections switch_section	{l.a("switch_sections",2);}
  ;
switch_section
  : switch_labels statement_list	{l.a("switch_section",2);}
  ;
switch_labels
  : switch_label				                              {l.a("switch_labels",1);}
  | switch_labels switch_label	                      {l.a("switch_labels",2);}
  ;
switch_label
  : CASE constant_expression COLON	                  {l.a("switch_label",1);}
  | DEFAULT COLON					                            {l.a("switch_label",0);}
  ;
iteration_statement
  : while_statement		                                {l.a("iteration_statement",1);}
  | do_statement		                                {l.a("iteration_statement",1);}
  | for_statement		                                {l.a("iteration_statement",1);}
  | foreach_statement	                                {l.a("iteration_statement",1);}
  ;
unsafe_statement
  : UNSAFE block	{l.a("unsafe_statement",1);}
  ;
while_statement
  : WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("while_statement",2);}
  | WHILE LEFT_BRACKET_CIRCLE error				 RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("while_statement",2,1);}
  | WHILE error {yyclearin;}  boolean_expression error				  embedded_statement	{  } {l.a("while_statement",2,1);}
  ;
do_statement
  : DO embedded_statement WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE SEMICOLON	{l.a("do_statement",2);}
  | DO embedded_statement WHILE LEFT_BRACKET_CIRCLE boolean_expression RIGHT_BRACKET_CIRCLE error		{ l.a("do_statement",2,1);}
  ;

for_statement
  : FOR left_bracket_circle for_initializer_opt semicolon for_condition_opt semicolon for_iterator_opt right_bracket_circle embedded_statement			{l.a("for_statement",8);}
  ;


for_initializer_opt
  : /* Nothing */   {l.a("for_initializer_opt",0);}
  | for_initializer	{l.a("for_initializer_opt",1);}
  ;
for_condition_opt
  : /* Nothing */ {l.a("for_condition_opt",0);}
  | for_condition	{l.a("for_condition_opt",1);}
  ;
for_iterator_opt
  : /* Nothing */	{l.a("for_iterator_opt",0);}
  | for_iterator	{l.a("for_iterator_opt",1);}
  ;
for_initializer
  : local_variable_declaration		{l.a("for_initializer",1);}
  | statement_expression_list		{l.a("for_initializer",1);}
  ;
for_condition
  : boolean_expression	{l.a("for_condition",1);}
  ;
for_iterator
  : statement_expression_list	{l.a("for_iterator",1);}
  ;
statement_expression_list
  : statement_expression									{l.a("statement_expression_list",1);}
  | statement_expression_list COMMA statement_expression	{l.a("statement_expression_list",2);}
  ;
foreach_statement
  : FOREACH left_bracket_circle type				 IDENTIFIER in expression right_bracket_circle embedded_statement			{l.a("foreach_statement",7);}
  ;
jump_statement
  : break_statement		{l.a("jump_statement",1);}
  | continue_statement	{l.a("jump_statement",1);}
  | goto_statement		{l.a("jump_statement",1);}
  | return_statement	{l.a("jump_statement",1);}
  | throw_statement		{l.a("jump_statement",1);}
  ;
break_statement
  : BREAK SEMICOLON	{l.a("break_statement",0);}
  | BREAK error		{l.a("break_statement",0,1);}
  ;
continue_statement
  : CONTINUE SEMICOLON	{l.a("continue_statement",0);}
  | CONTINUE error		{l.a("continue_statement",0,1);}
  ;
goto_statement
  : GOTO IDENTIFIER SEMICOLON					{l.a("goto_statement",0);}
  | GOTO CASE constant_expression SEMICOLON		{l.a("goto_statement",1);}
  | GOTO DEFAULT SEMICOLON						{l.a("goto_statement",0);}
  | GOTO IDENTIFIER error						{l.a("goto_statement",0,1);}
  | GOTO CASE constant_expression error			{l.a("goto_statement",1,1);}
  | GOTO DEFAULT error							{l.a("goto_statement",0,1);}
  ;
return_statement
  : RETURN expression_opt SEMICOLON	{l.a("return_statement",1);}
  | RETURN expression_opt error		{l.a("return_statement",1,1);}
  ;
expression_opt
  : /* Nothing */ {l.a("expression_opt",0);}
  | expression	  {l.a("expression_opt",1);}
  ;
throw_statement
  : THROW expression_opt SEMICOLON	  {l.a("throw_statement",1);}
  | THROW expression_opt error		  {l.a("throw_statement",1);}
  ;
try_statement
  : TRY block catch_clauses					        {l.a("try_statement",2);}
  | TRY block finally_clause				        {l.a("try_statement",2);}
  | TRY block catch_clauses finally_clause			{l.a("try_statement",3);}
  ;
catch_clauses	
  : catch_clause				        {l.a("catch_clauses",1);}
  | catch_clauses catch_clause			{l.a("catch_clauses",2);}
  ;
catch_clause
  : CATCH LEFT_BRACKET_CIRCLE class_type identifier_opt RIGHT_BRACKET_CIRCLE block	{l.a("catch_clause",3);}
  | CATCH LEFT_BRACKET_CIRCLE type_name  identifier_opt RIGHT_BRACKET_CIRCLE block	{l.a("catch_clause",3);}
  | CATCH block
  ;
identifier_opt
  : /* Nothing */	{l.a("identifier_opt",0);}
  | IDENTIFIER		{l.a("identifier_opt",0);}
  ;
finally_clause
  : FINALLY block	{l.a("finally_clause",1);}
  ;
checked_statement
  : CHECKED block	{l.a("checked_statement",1);}
  ;
unchecked_statement
  : UNCHECKED block	{l.a("unchecked_statement",1);}
  ;
lock_statement
  : LOCK LEFT_BRACKET_CIRCLE expression RIGHT_BRACKET_CIRCLE embedded_statement			{l.a("lock_statement",2);}
  ;
using_statement
  : USING LEFT_BRACKET_CIRCLE resource_acquisition RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("using_statement",2);}
  ;
resource_acquisition
  : local_variable_declaration	{l.a("resource_acquisition",1);}
  | expression					{l.a("resource_acquisition",1);}
  ;
fixed_statement
/*! : FIXED LEFT_BRACKET_CIRCLE pointer_type fixed_pointer_declarators RIGHT_BRACKET_CIRCLE embedded_statement */
  : FIXED LEFT_BRACKET_CIRCLE  type	fixed_pointer_declarators RIGHT_BRACKET_CIRCLE embedded_statement	{l.a("fixed_statement",3);}
  ;
fixed_pointer_declarators
  : fixed_pointer_declarator									{l.a("fixed_pointer_declarators",1);}
  | fixed_pointer_declarators COMMA fixed_pointer_declarator	{l.a("fixed_pointer_declarators",2);}
  ;
fixed_pointer_declarator
  : IDENTIFIER EQUAL expression		{l.a("fixed_pointer_declarator",1);}
  ;
compilation_unit
  : using_directives_opt attributes_opt						{l.a("compilation_unit",2);}
  | using_directives_opt namespace_member_declarations		{l.a("compilation_unit",2);}
  ;
using_directives_opt
  : /* Nothing */       {l.a("using_directives_opt",0);}
  | using_directives	{l.a("using_directives_opt",1);}
  ;
attributes_opt
  : /* Nothing */	 {l.a("attributes_opt",0);}
  | attributes		 {l.a("attributes_opt",1);}
  ;
namespace_member_declarations_opt
  : /* Nothing */                       {l.a("namespace_member_declarations_opt",0);}
  | namespace_member_declarations	    {l.a("namespace_member_declarations_opt",1);}
  ;
namespace_declaration
  : attributes_opt NAMESPACE qualified_identifier {SPL->addNamespace(*$<r.base>3,$<r.line_no>3,$<r.col_no>3);}
    namespace_body comma_opt					  {l.a("namespace_declaration",4);SPL->endScope();}
  ;
comma_opt
  : /* Nothing */ {l.a("comma_opt",0);}
  | SEMICOLON	  {l.a("comma_opt",0);}
  ;	

qualified_identifier
  : IDENTIFIER				
		  {		l.a("qualified_identifier",0);
				$<r.base>$ = new string($<r.str>1);
		  }
  | qualifier IDENTIFIER	
		{	l.a("qualified_identifier",1);
			$<r.base>$ = new string(string(*$<r.base>1) + string($<r.str>2));
		}
  ;

qualifier
  : IDENTIFIER DOT				{l.a("qualifier",0);$<r.base>$ = new string(string($<r.str>1) + ".");}
  | qualifier IDENTIFIER DOT	{l.a("qualifier",1);$<r.base>$ = new string(*$<r.base>1 + string($<r.str>2) + ".");}
  ;

namespace_body
  : LEFT_BRACKET_GROUP using_directives_opt namespace_member_declarations_opt RIGHT_BRACKET_GROUP	{l.a("namespace_body",2);}
  ;
using_directives
  : using_directive						{l.a("using_directives",1);}
  | using_directives using_directive	{l.a("using_directives",2);}
  ;
using_directive
  : using_alias_directive		{l.a("using_directive",1);}
  | using_namespace_directive	{l.a("using_directive",1);}
  ;
using_alias_directive
  : USING IDENTIFIER EQUAL qualified_identifier SEMICOLON	{l.a("using_alias_directive",1);}
  | USING IDENTIFIER EQUAL qualified_identifier error		{l.a("using_alias_directive",1,1);}
  ;
using_namespace_directive
  : USING namespace_name SEMICOLON		{l.a("using_namespace_directive",1);  SPL->add_using(*$<r.base>2,$<r.line_no>1,$<r.col_no>1);}
  | USING namespace_name error			{l.a("using_namespace_directive",1,1);SPL->add_using(*$<r.base>2,$<r.line_no>1,$<r.col_no>1);}
  ;
namespace_member_declarations
  : namespace_member_declaration									                {l.a("namespace_member_declarations",1);}
  | namespace_member_declarations namespace_member_declaration		{l.a("namespace_member_declarations",2);}
  ;
namespace_member_declaration
  : namespace_declaration	{l.a("namespace_member_declaration",1);}
  | type_declaration		{l.a("namespace_member_declaration",1);}
  ;
type_declaration
  : class_declaration		{l.a("type_declaration",1);}
  | struct_declaration		{l.a("type_declaration",1);}
  | interface_declaration	{l.a("type_declaration",1);}
  | enum_declaration		{l.a("type_declaration",1);}
  | delegate_declaration	{l.a("type_declaration",1);}
  ;

/***** Modifiers *****/
/* This now replaces:
 * class_modifier, constant_modifier, field_modifier, method_modifier, 
 * property_modifier, event_modifier, indexer_modifier, operator_modifier, 
 * constructor_modifier, struct_modifier, interface_modifier, 
 * enum_modifier, delegate_modifier
 */
modifiers_opt
  : /* Nothing  medo */       
  {		
		l.a("modifiers_opt",0);
		$<r.modifiers>$ = new queue<string>();
  }
  | modifiers	          
  {	
		l.a("modifiers_opt",1);
		$<r.modifiers>$ = $<r.modifiers>1;
  }
  ;
modifiers
  : modifier			          
  {	
		l.a("modifiers",1);
		$<r.modifiers>$ = new queue<string>();
		$<r.modifiers>$->push(*$<r.modifier>1);
  }
  | modifiers modifier			  
  {
		l.a("modifiers",2);
		$<r.modifiers>$ = $<r.modifiers>1;
		$<r.modifiers>$->push(*$<r.modifier>2);
  }
  ;
modifier
  : ABSTRACT	              {l.a("modifier",0);$<r.modifier>$ = new string("ABSTRACT"); } 
  | EXTERN		              {l.a("modifier",0);$<r.modifier>$ = new string("EXTERN");	  }
  | INTERNAL	              {l.a("modifier",0);$<r.modifier>$ = new string("INTERNAL"); }
  | NEW			              {l.a("modifier",0);$<r.modifier>$ = new string("NEW");      }
  | OVERRIDE	              {l.a("modifier",0);$<r.modifier>$ = new string("OVERRIDE"); }
  | PRIVATE		              {l.a("modifier",0);$<r.modifier>$ = new string("PRIVATE");  }
  | PROTECTED	              {l.a("modifier",0);$<r.modifier>$ = new string("PROTECTED");}
  | PUBLIC		              {l.a("modifier",0);$<r.modifier>$ = new string("PUBLIC");   }
  | READONLY	              {l.a("modifier",0);$<r.modifier>$ = new string("READONLY"); }
  | SEALED		              {l.a("modifier",0);$<r.modifier>$ = new string("SEALED");   }
  | STATIC		              {l.a("modifier",0);$<r.modifier>$ = new string("STATIC");   }
  | UNSAFE		              {l.a("modifier",0);$<r.modifier>$ = new string("UNSAFE");   }
  | VIRTUAL		              {l.a("modifier",0);$<r.modifier>$ = new string("VIRTUAL");  }
  | VOLATILE	              {l.a("modifier",0);$<r.modifier>$ = new string("VOLATILE"); }
  ;


 


/***** C.2.6 Classes *****/
class_declaration

  : attributes_opt modifiers_opt class IDENTIFIER class_base_opt 
  {
		SPL->addClass(*$<r.modifiers>2,string($<r.str>4),*$<r.bases>5,$<r.line_no>4,$<r.col_no>4);
  } 
  class_body comma_opt	{l.a("class_declaration",5);SPL->endScope();}
  | attributes_opt modifiers_opt class IDENTIFIER class_base_opt 
  {
		SPL->addClass(*$<r.modifiers>2,string($<r.str>4),*$<r.bases>5,$<r.line_no>4,$<r.col_no>4);
  } 
  error comma_opt	{l.a("class_declaration",5);SPL->endScope();}
  ;


class_base_opt
  : /* Nothing */   {l.a("class_base_opt",0);$<r.bases>$ = new queue<string>();}
  | class_base		{l.a("class_base_opt",1);$<r.bases>$ = $<r.bases>1;}
  ;
class_base
  : COLON class_type							{l.a("class_base",1);$<r.bases>$ = new queue<string>();}
  | COLON interface_type_list					{l.a("class_base",1);$<r.bases>$ = $<r.bases>2;}
  | COLON class_type COMMA interface_type_list	{l.a("class_base",2);$<r.bases>$ = new queue<string>();}
  ;
interface_type_list
  : type_name								
  {
		l.a("interface_type_list",1);
		$<r.bases>$ = new queue<string>();
		$<r.bases>$->push(*$<r.base>1);
  }
  | interface_type_list COMMA type_name		
  {
		l.a("interface_type_list",2);
		$<r.bases>$ = $<r.bases>1;
		$<r.bases>$->push(*$<r.base>3);
  }
  ;

class_body
  : LEFT_BRACKET_GROUP class_member_declarations_opt RIGHT_BRACKET_GROUP	{l.a("class_body",1);}
  ;

class_member_declarations_opt
  : /* Nothing */               {l.a("class_member_declarations_opt",0);}
  | class_member_declarations	{l.a("class_member_declarations_opt",1);}
  ;
class_member_declarations
  : class_member_declaration								{l.a("class_member_declarations",1);}
  | class_member_declarations class_member_declaration		{l.a("class_member_declarations",2);}
  ;
class_member_declaration
  : constant_declaration				{l.a("class_member_declaration",1);}
  | field_declaration					{l.a("class_member_declaration",1);}
  | method_declaration					{l.a("class_member_declaration",1);}
  | property_declaration				{l.a("class_member_declaration",1);}
  | event_declaration					{l.a("class_member_declaration",1);}
  | indexer_declaration					{l.a("class_member_declaration",1);}	
  | operator_declaration				{l.a("class_member_declaration",1);}
  | constructor_declaration				{l.a("class_member_declaration",1);}
  | destructor_declaration				{l.a("class_member_declaration",1);}
  | type_declaration					{l.a("class_member_declaration",1);}
  ;
constant_declaration
  : attributes_opt modifiers_opt CONST type constant_declarators SEMICOLON	
		  {		
		         l.a("constant_declaration",4);
	          SPL->addFieldConst(*$<r.modifiers>2,string("CONST"),*$<r.base>4,*$<r.identifiers>5,$<r.line_no>5,$<r.col_no>5,$<r.known_type>4);
		  }
  | attributes_opt modifiers_opt CONST type constant_declarators error		
         {
		    l.a("constant_declaration",4,1);
         SPL->addFieldConst(*$<r.modifiers>2,string("CONST"),*$<r.base>4,*$<r.identifiers>5,$<r.line_no>5,$<r.col_no>5,$<r.known_type>4);

		 }
  ;
field_declaration
  : attributes_opt modifiers_opt type variable_declarators SEMICOLON
	      {
		        SPL->addField(*$<r.modifiers>2,*$<r.base>3,*$<r.identifiers>4,$<r.line_no>4,$<r.col_no>4,$<r.known_type>3);
  		      l.a("field_declaration",4);
	      }
  | attributes_opt modifiers_opt type variable_declarators error			
        {
            l.a("field_declaration",4,1);
	          SPL->addField(*$<r.modifiers>2,*$<r.base>3,*$<r.identifiers>4,$<r.line_no>4,$<r.col_no>4,$<r.known_type>3);
        }
  ;

method_declaration
  : method_header 		{l.a("method_declaration",2);SPL->check_function(); SPL->endScope();}
  ;

method_header
  : attributes_opt modifiers_opt type qualified_identifier LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE block	
      {    l.a("method_header",5); 
          SPL->addMethod(*$<r.modifiers>2,*$<r.base>3,string(*$<r.base>4),*$<r.types_ids>6,$<r.line_no>4,$<r.col_no>4,$<r.known_type>3,1);
      }
  | attributes_opt modifiers_opt VOID qualified_identifier LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE	block
      {   l.a("method_header",4);
        	SPL->addMethod(*$<r.modifiers>2,"VOID",string(*$<r.base>4),*$<r.types_ids>6,$<r.line_no>4,$<r.col_no>4,1,1);
      }
  | attributes_opt modifiers_opt type qualified_identifier LEFT_BRACKET_CIRCLE error RIGHT_BRACKET_CIRCLE block
		  {    l.a("method_header",5); 
               SPL->addMethod(*$<r.modifiers>2,*$<r.base>3,string(*$<r.base>4),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),$<r.line_no>4,$<r.col_no>4,$<r.known_type>3,1);
         }
  | attributes_opt modifiers_opt VOID qualified_identifier LEFT_BRACKET_CIRCLE error RIGHT_BRACKET_CIRCLE	block
		 {   l.a("method_header",4);
        	SPL->addMethod(*$<r.modifiers>2,"VOID",string(*$<r.base>4),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),$<r.line_no>4,$<r.col_no>4,1,1);
         }



   | attributes_opt modifiers_opt type qualified_identifier LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE	SEMICOLON
      {    l.a("method_header",5); 
          SPL->addMethod(*$<r.modifiers>2,*$<r.base>3,string(*$<r.base>4),*$<r.types_ids>6,$<r.line_no>4,$<r.col_no>4,$<r.known_type>3,0);
      }
  | attributes_opt modifiers_opt VOID qualified_identifier LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE	SEMICOLON
      {   l.a("method_header",4);
        	SPL->addMethod(*$<r.modifiers>2,"VOID",string(*$<r.base>4),*$<r.types_ids>6,$<r.line_no>4,$<r.col_no>4,1,0);
      }
  | attributes_opt modifiers_opt type qualified_identifier LEFT_BRACKET_CIRCLE error RIGHT_BRACKET_CIRCLE SEMICOLON
		  {    l.a("method_header",5); 
               SPL->addMethod(*$<r.modifiers>2,*$<r.base>3,string(*$<r.base>4),queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>(),$<r.line_no>4,$<r.col_no>4,$<r.known_type>3,0);
         }
  | attributes_opt modifiers_opt VOID qualified_identifier LEFT_BRACKET_CIRCLE error RIGHT_BRACKET_CIRCLE	SEMICOLON
		 {   l.a("method_header",4);
        	SPL->addMethod(*$<r.modifiers>2,"VOID",string(*$<r.base>4),*(new queue<pair<pair<pair<string,string>,pair<int,int>>,bool>>()),$<r.line_no>4,$<r.col_no>4,1,0);
         }
  ;

formal_parameter_list_opt
  : /* Nothing */												
        {	   l.a("formal_parameter_list_opt",0);
               $<r.types_ids>$ = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
        }
  | formal_parameter_list									
        {   l.a("formal_parameter_list_opt",1);
            $<r.types_ids>$ = $<r.types_ids>1 ;
        }
  | formal_parameter_default_list								
        {   l.a("formal_parameter_list_opt",1);
            $<r.types_ids>$ = $<r.types_ids>1 ;
        }
  | formal_parameter_list COMMA formal_parameter_default_list   
        {   l.a("formal_parameter_list_opt",2);
            //merge queues
            $<r.types_ids>$ = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >();
            while(!($<r.types_ids>1)->empty()) {($<r.types_ids>$)->push(($<r.types_ids>1)->front()); ($<r.types_ids>1)->pop();}
            while(!($<r.types_ids>3)->empty()) {($<r.types_ids>$)->push(($<r.types_ids>3)->front()); ($<r.types_ids>3)->pop();}
        }
  ;
return_type
  : type					{l.a("return_type",1);}
  | VOID					{l.a("return_type",0);}
  ;
  /*
method_body
  : block		{l.a("method_body",1);}
  | SEMICOLON	{l.a("method_body",0);}
  ;
*/
  


formal_parameter_list
  : formal_parameter								
      {   l.a("formal_parameter_list",1);
          $<r.types_ids>$ = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      $<r.types_ids>$->push(make_pair(make_pair(make_pair(*$<r.base>1 ,*$<r.identifier>1),make_pair($<r.line_no>1,$<r.col_no>1)),$<r.known_type>1));
      }
  | formal_parameter_list COMMA formal_parameter	
      {   l.a("formal_parameter_list",2);
      		$<r.types_ids>$ = $<r.types_ids>1;
		      $<r.types_ids>$->push(make_pair(make_pair(make_pair(*$<r.base>3 ,*$<r.identifier>3),make_pair($<r.line_no>3,$<r.col_no>3)),$<r.known_type>3)); 
      }
  ;
formal_parameter_default_list
  : formal_parameter_default									  
      {   l.a("formal_parameter_default_list",1);
          $<r.types_ids>$ = new queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >(); 
		      $<r.types_ids>$->push(make_pair(make_pair(make_pair(*$<r.base>1 ,*$<r.identifier>1),make_pair($<r.line_no>1,$<r.col_no>1)),$<r.known_type>1));
      }
  | formal_parameter_default_list COMMA formal_parameter_default  
       {  l.a("formal_parameter_default_list",2);
          $<r.types_ids>$ = $<r.types_ids>1;
		      $<r.types_ids>$->push(make_pair(make_pair(make_pair(*$<r.base>3 ,*$<r.identifier>3),make_pair($<r.line_no>3,$<r.col_no>3)),$<r.known_type>3)); 
       }
  ;
formal_parameter
  : fixed_parameter		
      {	l.a("formal_parameter",1); 
        $<r.base>$ = $<r.base>1 ;
        $<r.identifier>$ = $<r.identifier>1;
        $<r.line_no>$ = $<r.line_no>1;
        $<r.col_no>$ = $<r.col_no>1;
        $<r.known_type>$ = $<r.known_type>1;
      }
  | parameter_array		
      { l.a("formal_parameter",1);
        $<r.base>$ = $<r.base>1;
        $<r.identifier>$ = $<r.identifier>1;
        $<r.line_no>$ = $<r.line_no>1;
        $<r.col_no>$ = $<r.col_no>1;
        $<r.known_type>$ = $<r.known_type>1;
      }
  ;
fixed_parameter
  : attributes_opt parameter_modifier_opt type IDENTIFIER	
      { l.a("fixed_parameter",3);
        $<r.base>$ = $<r.base>3;
        $<r.identifier>$ = new string ($<r.str>4);  
        $<r.line_no>$ = $<r.line_no>4;
        $<r.col_no>$ = $<r.col_no>4; 
        $<r.known_type>$ = $<r.known_type>3;
      }
  ;	
  
formal_parameter_default
  : fixed_parameter EQUAL variable_initializer	 
      { l.a("formal_parameter_default",2);
        $<r.base>$ = $<r.base>1 ;
        $<r.identifier>$ = $<r.identifier>1;
        $<r.line_no>$ = $<r.line_no>1;
        $<r.col_no>$ = $<r.col_no>1;
        $<r.known_type>$ = $<r.known_type>1;
      }
  | parameter_array EQUAL variable_initializer   
      { l.a("formal_parameter_default",2);
        $<r.base>$ = $<r.base>1;
        $<r.identifier>$ = $<r.identifier>1;
        $<r.line_no>$ = $<r.line_no>1;
        $<r.col_no>$ = $<r.col_no>1;
        $<r.known_type>$ = $<r.known_type>1;
      }
  ;

parameter_modifier_opt
  : /* Nothing */               {l.a("parameter_modifier_opt",0);}
  | REF		                    {l.a("parameter_modifier_opt",0);}
  | OUT		                    {l.a("parameter_modifier_opt",0);}
  ;
parameter_array
  : attributes_opt PARAMS type IDENTIFIER					
      { l.a("parameter_array",2);
        $<r.base>$ = $<r.base>3;
        $<r.identifier>$ = new string ($<r.str>4);
        $<r.line_no>$ = $<r.line_no>4;
        $<r.col_no>$ = $<r.col_no>4;
        $<r.known_type>$ = $<r.known_type>3;
      }
  ;
  
property_declaration
  : attributes_opt modifiers_opt type qualified_identifier 
      ENTER_getset
    LEFT_BRACKET_GROUP accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_getset													{l.a("property_declaration",7);}
  ;
accessor_declarations
  : get_accessor_declaration set_accessor_declaration_opt	{l.a("accessor_declarations",2);}
  | set_accessor_declaration get_accessor_declaration_opt	{l.a("accessor_declarations",2);}
  ;
set_accessor_declaration_opt
  : /* Nothing */             {l.a("set_accessor_declaration_opt",0);}
  | set_accessor_declaration	{l.a("set_accessor_declaration_opt",1);}
  ;
get_accessor_declaration_opt
  : /* Nothing */             {l.a("get_accessor_declaration_opt",0);}
  | get_accessor_declaration	{l.a("get_accessor_declaration_opt",1);}
  ;
get_accessor_declaration
  : attributes_opt GET 
      EXIT_getset
    accessor_body
      ENTER_getset		{l.a("get_accessor_declaration",4);}
  ;
set_accessor_declaration
  : attributes_opt SET 
      EXIT_getset
    accessor_body
      ENTER_getset		{l.a("set_accessor_declaration",4);}
  ;
accessor_body
  : block		{l.a("accessor_body",1);}
  | SEMICOLON	{l.a("accessor_body",0);}
  ;
event_declaration
  : attributes_opt modifiers_opt EVENT type					variable_declarators SEMICOLON		{l.a("event_declaration",4);}
  | attributes_opt modifiers_opt EVENT type qualified_identifier 
      ENTER_accessor_decl 
    LEFT_BRACKET_GROUP event_accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_accessor_decl														{l.a("event_declaration",7);}
  ;
event_accessor_declarations
  : add_accessor_declaration remove_accessor_declaration	{l.a("event_accessor_declarations",2);}
  | remove_accessor_declaration add_accessor_declaration	{l.a("event_accessor_declarations",2);}
  ;
add_accessor_declaration
  : attributes_opt ADD 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl		{l.a("add_accessor_declaration",4);}
  ;
remove_accessor_declaration
  : attributes_opt REMOVE 
      EXIT_accessor_decl 
    block 
      ENTER_accessor_decl		{l.a("remove_accessor_declaration",4);}
  ;
indexer_declaration
  : attributes_opt modifiers_opt indexer_declarator 
      ENTER_getset
    LEFT_BRACKET_GROUP accessor_declarations RIGHT_BRACKET_GROUP
      EXIT_getset													{l.a("indexer_declaration",6);}
  ;
indexer_declarator
  : type THIS LEFT_BRACKET formal_parameter_list RIGHT_BRACKET						{l.a("indexer_declarator",2);}
/*| type type_name DOT THIS LEFT_BRACKET formal_parameter_list RIGHT_BRACKET */
  | type qualified_this LEFT_BRACKET formal_parameter_list RIGHT_BRACKET			{l.a("indexer_declarator",3);}
  ;
qualified_this
  : qualifier THIS		{l.a("qualified_this",1);}
  ;
/* Widen operator_declaration to make modifiers optional */
operator_declaration
  : attributes_opt modifiers_opt operator_declarator operator_body	{l.a("operator_declaration",4);}
  ;
operator_declarator
  : overloadable_operator_declarator	{l.a("operator_declarator",2);}
  | conversion_operator_declarator		{l.a("operator_declarator",2);}
  ;
overloadable_operator_declarator
  : type OPERATOR overloadable_operator LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE							{l.a("overloadable_operator_declarator",3);}
  | type OPERATOR overloadable_operator LEFT_BRACKET_CIRCLE type IDENTIFIER COMMA type IDENTIFIER RIGHT_BRACKET_CIRCLE		{l.a("overloadable_operator_declarator",4);}
  ;
overloadable_operator
  : PLUS					        {l.a("overloadable_operator",0);}
  | MINUS					        {l.a("overloadable_operator",0);}
  | EXCLAMATION_POINT				{l.a("overloadable_operator",0);}
  | TILDE					        {l.a("overloadable_operator",0);}
  | PLUSPLUS			      		{l.a("overloadable_operator",0);}
  | MINUSMINUS		    			{l.a("overloadable_operator",0);}
  | TRUE					        {l.a("overloadable_operator",0);}
  | FALSE				        	{l.a("overloadable_operator",0);}
  | STAR				        	{l.a("overloadable_operator",0);}
  | SLASH				        	{l.a("overloadable_operator",0);}
  | PERCENT			      			{l.a("overloadable_operator",0);}
  | AND						        {l.a("overloadable_operator",0);}
  | OR						        {l.a("overloadable_operator",0);}
  | POWER					        {l.a("overloadable_operator",0);}
  | LTLT					        {l.a("overloadable_operator",0);}
  | GTGT					        {l.a("overloadable_operator",0);}
  | EQEQ					        {l.a("overloadable_operator",0);}
  | NOTEQ					        {l.a("overloadable_operator",0);}
  | GREATER							{l.a("overloadable_operator",0);}
  | SMALLER							{l.a("overloadable_operator",0);}
  | GEQ						        {l.a("overloadable_operator",0);}
  | LEQ						        {l.a("overloadable_operator",0);}
  ;
conversion_operator_declarator
  : IMPLICIT OPERATOR type LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE		{l.a("conversion_operator_declarator",2);}
  | EXPLICIT OPERATOR type LEFT_BRACKET_CIRCLE type IDENTIFIER RIGHT_BRACKET_CIRCLE		{l.a("conversion_operator_declarator",2);}
  ;
constructor_declaration
  : attributes_opt modifiers_opt IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE 
  {
  SPL->addMethod(*$<r.modifiers>2,"",string($<r.str>3),*$<r.types_ids>5,$<r.line_no>3,$<r.col_no>3,1,1);
  }
  constructor_initializer_opt constructor_body		{l.a("constructor_declaration",4);SPL->endScope();}
  ;
constructor_initializer_opt
  : /* Nothing */             {l.a("constructor_initializer_opt",0);}
  | constructor_initializer		{l.a("constructor_initializer_opt",1);}
  ;
constructor_initializer
  : COLON BASE LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE		{l.a("constructor_initializer",1);}
  | COLON THIS LEFT_BRACKET_CIRCLE argument_list_opt RIGHT_BRACKET_CIRCLE		{l.a("constructor_initializer",1);}
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
  : attributes_opt modifiers_opt TILDE IDENTIFIER LEFT_BRACKET_CIRCLE RIGHT_BRACKET_CIRCLE block	{l.a("destructor_declaration",3);}
  ;
operator_body
  : block		{l.a("operator_body",1);}
  | SEMICOLON	{l.a("operator_body",0);}
  ;
constructor_body /*** Added by JP - same as method_body ***/
  : block		{l.a("constructor_body",1);}
  | SEMICOLON	{l.a("constructor_body",0);}
  ;

/***** C.2.7 Structs *****/
struct_declaration
  : attributes_opt modifiers_opt STRUCT IDENTIFIER struct_interfaces_opt struct_body comma_opt	{l.a("struct_declaration",5);}
  ;
struct_interfaces_opt
  : /* Nothing */     {l.a("struct_interfaces_opt",0);}
  | struct_interfaces	{l.a("struct_interfaces_opt",1);}
  ;
struct_interfaces	
  : COLON interface_type_list	{l.a("struct_interfaces",1);}
  ;
struct_body
  : LEFT_BRACKET_GROUP struct_member_declarations_opt RIGHT_BRACKET_GROUP	{l.a("struct_body",1);}
  ;
struct_member_declarations_opt
  : /* Nothing */             	{l.a("struct_member_declarations_opt",0);}
  | struct_member_declarations	{l.a("struct_member_declarations_opt",1);}
  ;
struct_member_declarations
  : struct_member_declaration								{l.a("struct_member_declarations",1);}
  | struct_member_declarations struct_member_declaration	{l.a("struct_member_declarations",2);}
  ;
struct_member_declaration	
  : constant_declaration						{l.a("struct_member_declaration",1);}
  | field_declaration							{l.a("struct_member_declaration",1);}
  | method_declaration							{l.a("struct_member_declaration",1);}
  | property_declaration						{l.a("struct_member_declaration",1);}
  | event_declaration							{l.a("struct_member_declaration",1);}
  | indexer_declaration							{l.a("struct_member_declaration",1);}
  | operator_declaration						{l.a("struct_member_declaration",1);}
  | constructor_declaration						{l.a("struct_member_declaration",1);}
/*  | static_constructor_declaration */
  | type_declaration							{l.a("struct_member_declaration",1);}
  ;

/***** C.2.8 Arrays *****/
array_initializer
  : LEFT_BRACKET_GROUP variable_initializer_list_opt RIGHT_BRACKET_GROUP		{l.a("array_initializer",1);}
  | LEFT_BRACKET_GROUP variable_initializer_list COMMA RIGHT_BRACKET_GROUP		{l.a("array_initializer",1);}
  ;
variable_initializer_list_opt
  : /* Nothing */             {l.a("variable_initializer_list_opt",0);}
  | variable_initializer_list	{l.a("variable_initializer_list_opt",1);}
  ;
variable_initializer_list
  : variable_initializer									{l.a("variable_initializer_list",1);}
  | variable_initializer_list COMMA variable_initializer	{l.a("variable_initializer_list",2);}
  ;

/***** C.2.9 Interfaces *****/
interface_declaration
  : attributes_opt modifiers_opt INTERFACE IDENTIFIER interface_base_opt
  {
		SPL->addInterface(*$<r.modifiers>2,string($<r.str>4),*$<r.bases>5,$<r.line_no>4,$<r.col_no>4);		
  }
  interface_body comma_opt	{l.a("interface_declaration",5);SPL->endScope();}
  ;

interface_base_opt
  : /* Nothing */	  {l.a("interface_base_opt",0);$<r.bases>$ = new queue<string>();}
  | interface_base	  {l.a("interface_base_opt",1);$<r.bases>$ = $<r.bases>1;}
  ;
interface_base
  : COLON interface_type_list	{l.a("interface_base",1);$<r.bases>$ = $<r.bases>2;}
  ;
interface_body
  : LEFT_BRACKET_GROUP interface_member_declarations_opt RIGHT_BRACKET_GROUP	{l.a("interface_body",1);}
  ;
interface_member_declarations_opt
  : /* Nothing */                    		{l.a("interface_member_declarations_opt",0);}
  | interface_member_declarations			{l.a("interface_member_declarations_opt",1);}
  ;
interface_member_declarations
  : interface_member_declaration									                {l.a("interface_member_declarations",1);}
  | interface_member_declarations interface_member_declaration		{l.a("interface_member_declarations",2);}
  ;
interface_member_declaration
  : interface_method_declaration		{l.a("interface_member_declaration",1);}
  | interface_property_declaration		{l.a("interface_member_declaration",1);}
  | interface_event_declaration			{l.a("interface_member_declaration",1);}
  | interface_indexer_declaration		{l.a("interface_member_declaration",1);}
  ;
/* inline return_type to avoid conflict with interface_property_declaration */
interface_method_declaration
  : attributes_opt new_opt type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE interface_empty_body		
    {
     l.a("interface_method_declaration",5);
	 SPL->addMethod(*$<r.modifiers>2,*$<r.base>3,string($<r.str>4),*$<r.types_ids>6,$<r.line_no>4,$<r.col_no>4,$<r.known_type>3,0);
	 SPL->endScope();
    }
  | attributes_opt new_opt VOID IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE interface_empty_body		
    {
	  l.a("interface_method_declaration",4);
	  SPL->addMethod(*$<r.modifiers>2,"VOID",string($<r.str>4),*$<r.types_ids>6,$<r.line_no>4,$<r.col_no>4,1,0);
	  SPL->endScope();
    }
  ;
new_opt 
  : /* Nothing */  {l.a("new_opt",0); $<r.modifiers>$ = new queue<string>();}
  | NEW            {l.a("new_opt",0);$<r.modifiers>$ = new queue<string>() ; $<r.modifiers>$->push("NEW");} 
  ;
interface_property_declaration
  : attributes_opt new_opt type IDENTIFIER 
      ENTER_getset
    LEFT_BRACKET_GROUP interface_accessors RIGHT_BRACKET_GROUP
      EXIT_getset															{l.a("interface_property_declaration",1);}															{l.a("interface_property_declaration",1);}
  ;
interface_indexer_declaration
  : attributes_opt new_opt type THIS 
    LEFT_BRACKET formal_parameter_list RIGHT_BRACKET 
      ENTER_getset
    LEFT_BRACKET_GROUP interface_accessors RIGHT_BRACKET_GROUP
      EXIT_getset															{l.a("interface_indexer_declaration",7);}														{l.a("interface_indexer_declaration",7);}
  ;

interface_accessors
  : attributes_opt GET interface_empty_body															{l.a("interface_accessors",2);}
  | attributes_opt SET interface_empty_body															{l.a("interface_accessors",2);}
  | attributes_opt GET interface_empty_body attributes_opt SET interface_empty_body					{l.a("interface_accessors",4);}
  | attributes_opt SET interface_empty_body attributes_opt GET interface_empty_body					{l.a("interface_accessors",4);}
  ;
interface_event_declaration
  : attributes_opt new_opt EVENT type IDENTIFIER interface_empty_body		{l.a("interface_event_declaration",4);}
  ;

/* mono seems to allow this */
interface_empty_body
  : SEMICOLON									{l.a("interface_empty_body",0);}
  | LEFT_BRACKET_GROUP RIGHT_BRACKET_GROUP		{l.a("interface_empty_body",0);}
  ;

/***** C.2.10 Enums *****/
enum_declaration
  : attributes_opt modifiers_opt ENUM IDENTIFIER enum_base_opt enum_body comma_opt		{l.a("enum_declaration",5);}
  ;
enum_base_opt
  : /* Nothing */ {l.a("enum_base_opt",0);}
  | enum_base		{l.a("enum_base_opt",1);}
  ;
enum_base
  : COLON integral_type		{l.a("enum_base",1);}
  ;
enum_body
  : LEFT_BRACKET_GROUP enum_member_declarations_opt RIGHT_BRACKET_GROUP		{l.a("enum_body",1);}
  | LEFT_BRACKET_GROUP enum_member_declarations COMMA RIGHT_BRACKET_GROUP	{l.a("enum_body",1);}
  ;
enum_member_declarations_opt
  : /* Nothing */             	{l.a("enum_member_declarations_opt",0);}
  | enum_member_declarations		{l.a("enum_member_declarations_opt",1);}
  ;
enum_member_declarations
  : enum_member_declaration											{l.a("enum_member_declarations",1);}
  | enum_member_declarations COMMA enum_member_declaration			{l.a("enum_member_declarations",2);}
  ;
enum_member_declaration
  : attributes_opt IDENTIFIER								{l.a("enum_member_declaration",1);}
  | attributes_opt IDENTIFIER EQUAL constant_expression		{l.a("enum_member_declaration",2);}
  ;

/***** C.2.11 Delegates *****/
delegate_declaration
  : attributes_opt modifiers_opt DELEGATE return_type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE SEMICOLON		{l.a("enum_member_declaration",4);}
  | attributes_opt modifiers_opt DELEGATE return_type IDENTIFIER LEFT_BRACKET_CIRCLE formal_parameter_list_opt RIGHT_BRACKET_CIRCLE error			{l.a("enum_member_declaration",4,1);}
  ;

/***** C.2.12 Attributes *****/
attributes
  : attribute_sections		{l.a("attributes",1);}
  ;
attribute_sections
  : attribute_section							{l.a("attribute_sections",1);}
  | attribute_sections attribute_section		{l.a("attribute_sections",2);}
  ;
attribute_section
  : ENTER_attrib LEFT_BRACKET attribute_target_specifier_opt attribute_list RIGHT_BRACKET EXIT_attrib			{l.a("attribute_section",4);}
  | ENTER_attrib LEFT_BRACKET attribute_target_specifier_opt attribute_list COMMA RIGHT_BRACKET EXIT_attrib		{l.a("attribute_section",4);}
  ;
attribute_target_specifier_opt
  : /* Nothing */                 	{l.a("attribute_target_specifier_opt",0);}
  | attribute_target_specifier			{l.a("attribute_target_specifier_opt",1);}
  ;
attribute_target_specifier	
  : attribute_target COLON				{l.a("attribute_target_specifier",1);}
  ;
attribute_target
  : ASSEMBLY	{l.a("attribute_target",1);}
  | FIELD		{l.a("attribute_target",1);}
  | EVENT		{l.a("attribute_target",1);}
  | METHOD		{l.a("attribute_target",1);}
  | MODULE		{l.a("attribute_target",1);}
  | PARAM		{l.a("attribute_target",1);}
  | PROPERTY	{l.a("attribute_target",1);}
  | RETURN		{l.a("attribute_target",1);}
  | TYPE		{l.a("attribute_target",1);}
  ;
attribute_list
  : attribute						{l.a("attribute_list",1);}
  | attribute_list COMMA attribute	{l.a("attribute_list",2);}
  ;
attribute
  : attribute_name attribute_arguments_opt	{l.a("attribute",2);}
  ;
attribute_arguments_opt
  : /* Nothing */         {l.a("attribute_arguments_opt",0);}
  | attribute_arguments		{l.a("attribute_arguments_opt",1);}
  ;
attribute_name
  : type_name		{l.a("attribute_name",1);}
  ;
attribute_arguments
  : LEFT_BRACKET_CIRCLE expression_list_opt RIGHT_BRACKET_CIRCLE		{l.a("attribute_arguments",1);}
  ;



/** Dummy rules for those context-sensitive "keywords" **/
ENTER_attrib 
  : { /* lex_enter_attrib(); */ l.a("ENTER_attrib",1);}
  ;
EXIT_attrib 
  : { /* lex_exit_attrib(); */ l.a("EXIT_attrib",1);}
  ;
ENTER_accessor_decl 
  : { /* lex_enter_accessor(); */ l.a("ENTER_accessor_decl",1);}
  ;
EXIT_accessor_decl
  : { /* lex_exit_accessor();*/l.a("EXIT_accessor_decl",1); }
  ;
ENTER_getset
  : { /* lex_enter_getset();*/l.a("ENTER_getset",1); }
  ;
EXIT_getset
  : { /* lex_exit_getset();*/l.a("EXIT_getset",1); }
  ;


								/* Terminal Rules */
 

 class 
   : CLASS												{l.a("CLASS",0);}	
   | error										        {l.a("CLASS",0,1);yyclearin;}
   ;
left_bracket_circle 
  : LEFT_BRACKET_CIRCLE									{l.a("left_bracket_circle",0);}
  | error												{l.a("left_bracket_circle",0,1);yyclearin;}
  ;
right_bracket_circle 
  : RIGHT_BRACKET_CIRCLE								{l.a("right_bracket_circle",0);}
  | error												{l.a("right_bracket_circle",0,1);yyclearin;}
  ;
semicolon 
  : SEMICOLON											{ l.a("semicolon",0);}
  | error												{ l.a("semicolon",0,1);}
  ;
in 
  : IN												    {l.a("in",0);}
  | error											    {l.a("in",0,1);} 
  ; 



%%

void yyerror(const char* s)
{
	extern errorHandler error_handler;
	error_handler.add(error(yylval.r.line_no, yylval.r.col_no, s));
}




