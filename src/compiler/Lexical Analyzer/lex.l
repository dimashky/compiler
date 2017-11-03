/*** Definition Section ***/
/* C code to be copied verbatim */
%{
	#include <iostream>
	#include <istream>
	#include <ostream>
	#include <FlexLexer.h>
	#include "../parser/yacc.hpp"
	#include <stdlib.h>
	#include <unistd.h>
	#include "../header/tokens.h"
	using namespace std;

	int lineNo = 1;
	int colNo = 1;

	void printLiteral(char *str, int len){
		for(int i=0; i < len; ++i){
			if(str[i] != '\"'){
				if(str[i] == '\\' && str[i+1] == 'n'){
					printf("\n"),++i;
				}else if(str[i] == '\\' && str[i+1] == 't'){
					printf("\t"),++i;
				}else{
					printf("%c",str[i]);
				}
			}
		}
		printf("\n");
	}
%}

/* options */

%option c++

/* This tells flex to read only one input file */
%option noyywrap

/* define state */
%x multilinecomment


/* Flex definition */
Real					([+ -]?[0-9]+"."+[0-9]+)|([+ -]?[0-9]+"."+[0-9]+[e E]+[0-9]+)|([+ -]?[0-9]+[e E]+[0-9]+)
Single_line_comment		(\/\/)+[^\n]*

Integer					[+ -]?[0-9]*|0
Float                   ({Integer}[f F])|({Real}[f F])
Double                  ({Integer}[d D])|({Real}[d D]?)
Long                    {Integer}[l L]?
String					["].*["]
Identifier              [a-zA-Z_][a-zA-Z0-9_]*








/*** RULE Section ***/

%%

"using static"	{	colNo += yyleng;	printf("using static\n");}
"using"			{	colNo += yyleng;	printf("using\n");		 }
"namespace"		{	colNo += yyleng;	printf("namespace\n");	 }



"if"			{	colNo += yyleng;	printf("if\n");			}
"else"			{	colNo += yyleng;	printf("else\n");		}	

"foreach"		{	colNo += yyleng;	printf("foreach\n");	}
"for"			{	colNo += yyleng;	printf("for\n");		}				
"as"			{	colNo += yyleng;	printf("as\n");			}				
"while"			{	colNo += yyleng;	printf("while\n");		}
"break"			{	colNo += yyleng;	printf("break\n");		}
"switch"		{	colNo += yyleng;	printf("switch\n");		}
"case"			{	colNo += yyleng;	printf("case\n");		}
"do"			{	colNo += yyleng;	printf("do\n");			}
"goto"			{	colNo += yyleng;	printf("goto\n");		}
"default"		{	colNo += yyleng;	printf("default\n");	}
"continue"		{	colNo += yyleng;	printf("continue\n");	}
				
"class"			{	colNo += yyleng;	printf("class\n");		}
"struct"		{	colNo += yyleng;	printf("struct\n");		}
"interface"		{	colNo += yyleng;	printf("interface\n");	}
"enum"			{	colNo += yyleng;	printf("enum\n");		}


"public"		{	colNo += yyleng;	printf("public\n");		}
"private"		{	colNo += yyleng;	printf("private\n");	}
"protected"		{	colNo += yyleng;	printf("protected\n");	}
		
"abstract"		{	colNo += yyleng;	printf("abstract\n");	}
"sealed"		{	colNo += yyleng;	printf("sealed\n");		}

"static"		{	colNo += yyleng;	printf("static\n");		}	
"override"		{	colNo += yyleng;	printf("override\n");	}
"virtual"		{	colNo += yyleng;	printf("virtual\n");	}

"base"			{	colNo += yyleng;	printf("base\n");		}
"this"			{	colNo += yyleng;	printf("this\n");		}

"object"		{	colNo += yyleng;	printf("object\n");		}

				
"try"			{	colNo += yyleng;	printf("try\n");		}
"catch"			{	colNo += yyleng;	printf("catch\n");		}
"throw"			{	colNo += yyleng;	printf("throw\n");		}
"finally"		{	colNo += yyleng;	printf("finally\n");	}



"char"			{	colNo += yyleng;	printf("char\n");		}
"string"		{	colNo += yyleng;	printf("string\n");		}
"float"			{	colNo += yyleng;	printf("float\n");		}				
"double"		{	colNo += yyleng;	printf("double\n");		}				
"byte"			{	colNo += yyleng;	printf("byte\n");		}
"sbyte"			{	colNo += yyleng;	printf("sbyte\n");		}
"short"			{	colNo += yyleng;	printf("short\n");		}
"ushort"		{	colNo += yyleng;	printf("ushort\n");		}
"int"			{	colNo += yyleng;	printf("int\n");		}
"uint"			{	colNo += yyleng;	printf("uint\n");		}
"long"			{	colNo += yyleng;	printf("long\n");		}
"ulong"			{	colNo += yyleng;	printf("ulong\n");		}
"decimal"		{	colNo += yyleng;	printf("decimal\n");	}
"bool"			{	colNo += yyleng;	printf("bool\n");		}		
"void"			{	colNo += yyleng;	printf("void\n");		}

"checked"		{	colNo += yyleng;	printf("checked\n");	}
"typeof"		{	colNo += yyleng;	printf("typeof\n");		}
"sizeof"		{	colNo += yyleng;	printf("sizeof\n");		}
"operator"		{	colNo += yyleng;	printf("operator\n");	}

"true"			{	colNo += yyleng;	printf("true\n");		}
"false"			{	colNo += yyleng;	printf("false\n");		}

				
"const"			{	colNo += yyleng;	printf("const\n");		}			
"ref"			{	colNo += yyleng;	printf("ref\n");		}			
"new"			{	colNo += yyleng;	printf("new\n");		}		
"readonly"		{	colNo += yyleng;	printf("readonly\n");	}		
"null"			{	colNo += yyleng;	printf("null\n");		}		

"params"		{	colNo += yyleng;	printf("params\n");		}		


"fixed"			{	colNo += yyleng;	printf("fixed\n");		}				

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


				
				
				
				
\+			{	colNo += yyleng;	printf("plus\n");			}	
"-"			{	colNo += yyleng;	printf("minus\n");			}	
"*"			{	colNo += yyleng;	printf("multiple\n");		}	
"/"			{	colNo += yyleng;	printf("divide\n");			}						
"="			{	colNo += yyleng;	printf("assigment\n");		}					
"++"		{	colNo += yyleng;	printf("plus plus\n");		}	
"--"		{	colNo += yyleng;	printf("minus minus\n");	}	
"+="		{	colNo += yyleng;	printf("plus eq\n");		}	
"-="		{	colNo += yyleng;	printf("minus eq\n");		}	
"*="		{	colNo += yyleng;	printf("mult eq\n");		}	
"/="		{	colNo += yyleng;	printf("div eq\n");			}	



"<"			{	colNo += yyleng;	printf("smaller\n");		}
">"			{	colNo += yyleng;	printf("bigger\n");			}
"<="		{	colNo += yyleng;	printf("smaller or eq\n");	}
">="		{	colNo += yyleng;	printf("bigger or eq\n");	}
"=="		{	colNo += yyleng;	printf("equal\n");			}
"!="		{	colNo += yyleng;	printf("not equal\n");		}






"oberator"	{	colNo += yyleng;	printf("oberator\n");	}
"Namespace" {	colNo += yyleng;	printf("namespace\n");	}
"event"		{	colNo += yyleng;	printf("event\n");		}
"extern"	{	colNo += yyleng;	printf("extern\n");		}
"implicit"	{	colNo += yyleng;	printf("implicit\n");	}
"internal"  {	colNo += yyleng;	printf("internal\n");	}
"lock"		{	colNo += yyleng;	printf("lock\n");		}
"uncheched"	{	colNo += yyleng;	printf("uncheched\n");	}

"set"		{	colNo += yyleng;	printf("set\n");		}






"unsafe"	{	colNo += yyleng;	printf("unsafe\n");		}




"delegate"	{	colNo += yyleng;	printf("delegate\n");	}
"explicit"	{	colNo += yyleng;	printf("explicit\n");	}

"get"		{	colNo += yyleng;	printf("get\n");		}
"in"		{	colNo += yyleng;	printf("in\n");			}
"is"		{	colNo += yyleng;	printf("is\n");			}

"out"		{	colNo += yyleng;	printf("out\n");		}

"reaonly"	{	colNo += yyleng;	printf("reaonly\n");	}
"return"	{	colNo += yyleng;	printf("return\n");		}

"stackloc"	{	colNo += yyleng;	printf("stackloc\n");	}
"unit"		{	colNo += yyleng;	printf("unit\n");		}

"value"		{	colNo += yyleng;	printf("value\n");		}
"volatle"	{	colNo += yyleng;	printf("volatle\n");	}



\/\*                           		{ BEGIN multilinecomment; }
<multilinecomment>[^*\n]*			{;}
<multilinecomment>"*"+[^*/\n]*		{lineNo++;}
<multilinecomment>"*"+"/"           { BEGIN INITIAL;	printf("multi line comment.\n");}

{Single_line_comment}				{ printf("single line comment.\n");	lineNo++;	}

									
																
{Identifier}						{ 	colNo += yyleng;	printf("Identifier\n");		}

{Integer}							{
										colNo += yyleng;
										int x=atoi(yytext);
										cout<<x<<endl;
										cout<<"Integer"<<endl; 
										
									}
{Float}								{
										colNo += yyleng;
										cout<<atof(yytext)<<" is Float"<<endl;
																
									}
{Double}							{
										colNo += yyleng;
										cout<<atof(yytext)<<" is Double"<<endl; 
									}
{Long}								{
										colNo += yyleng;
										long x=atol(yytext);
										cout<<x<<endl;
										cout <<"Long"<<endl;
										
									}
{String}							{

										 colNo += yyleng;
										 printLiteral(yytext,yyleng);
									}

											

%%




/*** C Code Section **/

