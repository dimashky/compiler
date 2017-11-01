/*** Definition Section ***/
/* C code to be copied verbatim */
%{
	#include <iostream>
	#include <istream>
	#include <ostream>
	#include <FlexLexer.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include "../header/tokens.h"
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
"("				{	colNo++;	}
")"				{	colNo++;	}
"{"				{	colNo++;	}
"}"				{	colNo++;	}
"["				{	colNo++;	}
"]"				{	colNo++;	}
";"				{	colNo++;	}


				
				
				
				
\+			{	colNo += strlen(yytext);	printf("plus\n");			}	
"-"			{	colNo += strlen(yytext);	printf("minus\n");			}	
"*"			{	colNo += strlen(yytext);	printf("multiple\n");		}	
"/"			{	colNo += strlen(yytext);	printf("divide\n");			}						
"="			{	colNo += strlen(yytext);	printf("assigment\n");		}					
"++"		{	colNo += strlen(yytext);	printf("plus plus\n");		}	
"--"		{	colNo += strlen(yytext);	printf("minus minus\n");	}	
"+="		{	colNo += strlen(yytext);	printf("plus eq\n");		}	
"-="		{	colNo += strlen(yytext);	printf("minus eq\n");		}	
"*="		{	colNo += strlen(yytext);	printf("mult eq\n");		}	
"/="		{	colNo += strlen(yytext);	printf("div eq\n");			}	



"<"			{	colNo += strlen(yytext);	printf("smaller\n");		}
">"			{	colNo += strlen(yytext);	printf("bigger\n");			}
"<="		{	colNo += strlen(yytext);	printf("smaller or eq\n");	}
">="		{	colNo += strlen(yytext);	printf("bigger or eq\n");	}
"=="		{	colNo += strlen(yytext);	printf("equal\n");			}
"!="		{	colNo += strlen(yytext);	printf("not equal\n");		}

"->"		{	colNo += strlen(yytext);	printf("to pointer\n");		}


"base"		{	colNo += strlen(yytext);	printf("base\n");	   	}
"null"		{	colNo += strlen(yytext);	printf("null\n");		}
"oberator"	{	colNo += strlen(yytext);	printf("oberator\n");	}
"Namespace" {	colNo += strlen(yytext);	printf("namespace\n");	}
"event"		{	colNo += strlen(yytext);	printf("event\n");		}
"extern"	{	colNo += strlen(yytext);	printf("extern\n");		}
"implicit"	{	colNo += strlen(yytext);	printf("implicit\n");	}
"internal"  {	colNo += strlen(yytext);	printf("internal\n");	}
"lock"		{	colNo += strlen(yytext);	printf("lock\n");		}
"uncheched"	{	colNo += strlen(yytext);	printf("uncheched\n");	}
"sbyte"		{	colNo += strlen(yytext);	printf("sbyte\n");		}
"set"		{	colNo += strlen(yytext);	printf("set\n");		}
"sizeof"	{	colNo += strlen(yytext);	printf("sizeof\n");		}
"struct"	{	colNo += strlen(yytext);	printf("struct\n");		}
"this"		{	colNo += strlen(yytext);	printf("this\n");		}
"true"		{	colNo += strlen(yytext);	printf("true\n");		}
"typeof"	{	colNo += strlen(yytext);	printf("typeof\n");		}
"ulong"		{	colNo += strlen(yytext);	printf("ulong\n");		}
"unsafe"	{	colNo += strlen(yytext);	printf("unsafe\n");		}
"using"		{	colNo += strlen(yytext);	printf("using\n");		}
"as"		{	colNo += strlen(yytext);	printf("as\n");			}
"checked"	{	colNo += strlen(yytext);	printf("checked\n");	}
"decimal"	{	colNo += strlen(yytext);	printf("decimal\n");	}
"delegate"	{	colNo += strlen(yytext);	printf("delegate\n");	}
"explicit"	{	colNo += strlen(yytext);	printf("explicit\n");	}
"fixed"		{	colNo += strlen(yytext);	printf("fixed\n");		}
"get"		{	colNo += strlen(yytext);	printf("get\n");			}
"in"		{	colNo += strlen(yytext);	printf("in\n");			}
"is"		{	colNo += strlen(yytext);	printf("is\n");			}
"object"	{	colNo += strlen(yytext);	printf("object\n");		}
"out"		{	colNo += strlen(yytext);	printf("out\n");			}
"params"	{	colNo += strlen(yytext);	printf("params\n");		}
"reaonly"	{	colNo += strlen(yytext);	printf("reaonly\n");		}
"return"	{	colNo += strlen(yytext);	printf("return\n");		}
"sealed"	{	colNo += strlen(yytext);	printf("sealed\n");		}
"stackloc"	{	colNo += strlen(yytext);	printf("stackloc\n");	}
"unit"		{	colNo += strlen(yytext);	printf("unit\n");		}
"ushort"	{	colNo += strlen(yytext);	printf("ushort\n");		}
"value"		{	colNo += strlen(yytext);	printf("value\n");		}
"volatle"	{	colNo += strlen(yytext);	printf("volatle\n");		}



\/\*                           		{ BEGIN multilinecomment; }
<multilinecomment>[^*\n]*			{;}
<multilinecomment>"*"+[^*/\n]*		{lineNo++;}
<multilinecomment>"*"+"/"           { BEGIN INITIAL;	printf("multi line comment.\n");}

{Single_line_comment}				{ printf("single line comment.\n");	lineNo++;	}

									
																
{Identifier}						{ 	colNo += strlen(yytext);	printf("Identifier\n");			return(ID);}

{Integer}							{	colNo += strlen(yytext);	printf("%d\n",atoi(yytext));	}
											

%%




/*** C Code Section **/

int main(void)
{
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}