/*** Definition Section ***/
/* C code to be copied verbatim */
%{
	#include <iostream>
	#include <istream>
	#include <ostream>
	#include <FlexLexer.h>

	int lineNo = 1;
	int colNo = 1;

%}

/* options */

%option c++

/* This tells flex to read only one input file */
%option noyywrap

/* define states */
%x multilinecomment


/* Flex definition */

Single_line_comment		(\/\/)+[^\n]*
Integer					[1-9][0-9]*|0
Identifier              [a-zA-Z_][a-zA-Z0-9_]*





/*** RULE Section ***/

%%

"if"			{
					colNo += strlen(yytext);
				}
"else"			{
					colNo += strlen(yytext);
				}
				

				
				
"while"			{
					colNo += strlen(yytext);					
				}
"do"			{
					colNo += strlen(yytext);
				}
"for"			{
					colNo += strlen(yytext);
				}

				
				
				
				
"class"			{
					colNo += strlen(yytext);
				}
"struct"		{
					colNo += strlen(yytext);
				}
"interface"		{
					colNo += strlen(yytext);
				}
"implement"		{
					colNo += strlen(yytext);
				}
"public"		{
					colNo += strlen(yytext);
				}
"private"		{
					colNo += strlen(yytext);				
				}
"protected"		{
					colNo += strlen(yytext);
				}
				
				
				
"int"			{
					colNo += strlen(yytext);
					cout<<"int\n";
				}
"char"			{
					colNo += strlen(yytext);
					cout<<"char\n";
				}
"float"			{
					colNo += strlen(yytext);
					cout<<"float\n";					
				}				
"double"		{
					colNo += strlen(yytext);
					cout<<"double\n";					
				}				
"short"			{
					colNo += strlen(yytext);
					cout<<"short\n";					
				}
"long"			{
					colNo += strlen(yytext);
					cout<<"long\n";					
				}
"bool"			{
					colNo += strlen(yytext);
					cout<<"bool\n";					
				}				
				
				
				
				
				
				
\n				{
					colNo=1;
					lineNo++;
				}
\t 				{
					colNo+=4;
				}			
	

" "				{
					colNo += 1; 
				}

				
				
				
				
\+				{
					colNo += strlen(yytext); 
					cout<<"plus\n";
				}
"/"				{
					colNo += strlen(yytext); 					
				}
"*"				{
					colNo += strlen(yytext); 					
				}				
"^"				{
					colNo += strlen(yytext); 					
				}
"-"				{
					colNo += strlen(yytext); 
				}
				
				
				

\/\*                           		{ BEGIN multilinecomment; }
<multilinecomment>[^*\n]*			{;}
<multilinecomment>"*"+[^*/\n]*		{lineNo++;}
<multilinecomment>"*"+"/"           { BEGIN INITIAL;cout<<"\t it is a Multi Line Comment \n";}

{Single_line_comment}				{ cout<<"\tit is a single line comment\n";
										lineNo++;
									}

									
									
									
									
{Identifier}						{ 	colNo += strlen(yytext);
										cout<<yytext<<endl;;
										cout<<"\t it is id \n";
									}

{Integer}							{
										colNo += strlen(yytext);
										int x=atoi(yytext);
										cout<<x<<endl;
									}
											

%%




/*** C Code Section **/

int main(void)
{
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
    return 0;
}