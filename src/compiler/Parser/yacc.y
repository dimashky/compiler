%output ="yacc.cpp"
%{
	#include <iostream>
	using namespace std;
	#include <FlexLexer.h>
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	
	FlexLexer* lexer = new yyFlexLexer();
	
	class Parser
	{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	
%}

%nonassoc _def_val_ test test2
%left T_EQUAL
%token T_LNUMBER
%token T_STRING
%right T_STATIC T_ABSTRACT T_FINAL T_PRIVATE T_PROTECTED T_PUBLIC
%token T_CLASS
%token T_EXTENDS


%nonassoc right_arc left_arc


%union{
	struct R{
		int i;
		float f;
		char c;
		char* str;
		int myLineNo;
		int myColno;
		}r;
	}


%%

start:
    top_statement_list                                      {  }
;

top_statement_list:
      top_statement_list top_statement                      { }
    | /* empty */                                           { }
;

top_statement:
      class_declaration_statement                           { }  
;

class_declaration_statement:
      class_entry_type T_STRING extends_from '{' class_statement_list '}'
        
;

class_entry_type:
      T_CLASS  
    | T_ABSTRACT T_CLASS
    | T_FINAL T_CLASS   
;

extends_from:
      /* empty */       
    | T_EXTENDS T_STRING    
;

class_statement_list:
      class_statement_list class_statement    
    | /* empty */                             
;

class_statement:
      variable_modifiers property_declaration ';'         
;
variable_modifiers:
      non_empty_member_modifiers                      
;

non_empty_member_modifiers:
      member_modifier                                 
    | non_empty_member_modifiers member_modifier      
;

member_modifier:
      T_PUBLIC           {cout<<"member_modifier: public";}                             
    | T_PROTECTED                                     
    | T_PRIVATE                                       
    | T_STATIC                                      
    | T_ABSTRACT                                    
    | T_FINAL                                       
;

property_declaration:
      T_STRING       
    | T_STRING T_EQUAL T_LNUMBER     
;
%%



void yyerror(char *s) 
{
	;
}

int yylex()
{
	return lexer->yylex();
}
void main(void)
{
	Parser* p = new Parser();
	p->parse();
	
}
