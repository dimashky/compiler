/*** Definition Section ***/
/* C code to be copied verbatim */
%{
	#include <iostream>
	#include <istream>
	#include <ostream>
	#include <FlexLexer.h>
	#include <stdlib.h>
	#include <unistd.h>
	using namespace std;

	int lineNo = 1;
	int colNo = 1;

%}

/* options */

%option c++

/* This tells flex to read only one input file */
%option noyywrap

/* define state */
%x multilinecomment


/* Flex definition */

Single_line_comment		(\/\/)+[^\n]*
Integer					[1-9][0-9]*|0
Identifier              [a-zA-Z_][a-zA-Z0-9_]*








/*** RULE Section ***/

%%

"if"			{	colNo += strlen(yytext);	printf("if\n");			}
"else"			{	colNo += strlen(yytext);	printf("else\n");		}	

"for"			{	colNo += strlen(yytext);	printf("for\n");		}				
"foreach"		{	colNo += strlen(yytext);	printf("foreach\n");	}				
"while"			{	colNo += strlen(yytext);	printf("while\n");		}
"break"			{	colNo += strlen(yytext);	printf("break\n");		}
"switch"		{	colNo += strlen(yytext);	printf("switch\n");		}
"case"			{	colNo += strlen(yytext);	printf("case\n");		}
"do"			{	colNo += strlen(yytext);	printf("do\n");			}
"goto"			{	colNo += strlen(yytext);	printf("goto\n");		}
"default"		{	colNo += strlen(yytext);	printf("default\n");	}
"continue"		{	colNo += strlen(yytext);	printf("continue\n");	}
				
"class"			{	colNo += strlen(yytext);	printf("class\n");		}
"struct"		{	colNo += strlen(yytext);	printf("struct\n");		}
"interface"		{	colNo += strlen(yytext);	printf("interface\n");	}
"enum"			{	colNo += strlen(yytext);	printf("enum\n");		}


"public"		{	colNo += strlen(yytext);	printf("public\n");		}
"private"		{	colNo += strlen(yytext);	printf("private\n");	}
"protected"		{	colNo += strlen(yytext);	printf("protected\n");	}
		
"abstract"		{	colNo += strlen(yytext);	printf("abstract\n");	}
"static"		{	colNo += strlen(yytext);	printf("override\n");	}
		
"override"		{	colNo += strlen(yytext);	printf("override\n");	}
"virtual"		{	colNo += strlen(yytext);	printf("virtual\n");	}
				
"try"			{	colNo += strlen(yytext);	printf("try\n");		}
"catch"			{	colNo += strlen(yytext);	printf("catch\n");		}
"throw"			{	colNo += strlen(yytext);	printf("throw\n");		}
"finally"		{	colNo += strlen(yytext);	printf("finally\n");	}



"int"			{	colNo += strlen(yytext);	printf("int\n");		}
"char"			{	colNo += strlen(yytext);	printf("char\n");		}
"float"			{	colNo += strlen(yytext);	printf("float\n");		}				
"double"		{	colNo += strlen(yytext);	printf("double\n");		}				
"byte"			{	colNo += strlen(yytext);	printf("byte\n");		}
"short"			{	colNo += strlen(yytext);	printf("short\n");		}
"long"			{	colNo += strlen(yytext);	printf("long\n");		}
"bool"			{	colNo += strlen(yytext);	printf("bool\n");		}		
"void"			{	colNo += strlen(yytext);	printf("void\n");		}			
				
"const"			{	colNo += strlen(yytext);	printf("const\n");		}			
"ref"			{	colNo += strlen(yytext);	printf("ref\n");		}			
"new"			{	colNo += strlen(yytext);	printf("new\n");		}		
				
\n				{	colNo=1;	lineNo++;	}
\t 				{	colNo+=4;	}			
" "				{	colNo++;	}

				
				
				
				
\+			{	colNo += strlen(yytext);	printf("plus\n");		}	
"-"			{	colNo += strlen(yytext);	printf("minus\n");		}	
"*"			{	colNo += strlen(yytext);	printf("multiple\n");	}	
"/"			{	colNo += strlen(yytext);	printf("divide\n");		}	
"^"			{	colNo += strlen(yytext);	printf("exp\n");		}	
				
				
				

\/\*                           		{ BEGIN multilinecomment; }
<multilinecomment>[^*\n]*			{;}
<multilinecomment>"*"+[^*/\n]*		{lineNo++;}
<multilinecomment>"*"+"/"           { BEGIN INITIAL;	printf("multi line comment.\n");}

{Single_line_comment}				{ printf("single line comment.\n");	lineNo++;	}

									
																
{Identifier}						{ 	colNo += strlen(yytext);	printf("Identifier\n");			}

{Integer}							{	colNo += strlen(yytext);	printf("%d\n",atoi(yytext));	}
											

%%




/*** C Code Section **/

int main(void)
{
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}