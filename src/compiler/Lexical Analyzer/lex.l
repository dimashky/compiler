%{
	#include <string.h>
	#include <unistd.h>
	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <queue>
	#include <stack>
	#include "../parser/yacc.hpp"
	
	struct bracket {
		char br;
		int line_no;
		int col_no;
	};

	int line_no = 1;
	int col_no = 1;
	static bool invalid_token = false;
	queue <int> t;
	stack <bracket> brackets;

	void lexical_error(const char *, char *);
	static int token_for(const char *);

	void doForReturn(char * yytext){
		yylval.r.col_no = col_no;
		yylval.r.line_no = line_no;
		col_no += strlen(yytext);
	}
	void doForName(char* yytext){
		yylval.r.str = new char[255];
		yylval.r.str[0] = '\0';
		strcpy(yylval.r.str, yytext);
	}
%}

%option noyywrap
%option c++
%option stack

%x multilinecomment

single_line_comment    "//".*

dec_digit              [0-9]
hex_digit              [0-9A-Fa-f]
int_suffix             [UuLl]|[Uu][Ll]|[Ll][Uu]
dec_literal            {dec_digit}+{int_suffix}?
hex_literal            0[xX]{hex_digit}+{int_suffix}?
integer_literal        {dec_literal}|{hex_literal}

real_suffix            [FfDdMm]
sign                   [+\-]
exponent_part          [eE]{sign}?{dec_digit}+
whole_real1            {dec_digit}+{exponent_part}{real_suffix}?
whole_real2            {dec_digit}+{real_suffix}
part_real              {dec_digit}*\.{dec_digit}+{exponent_part}?{real_suffix}?
real_literal           {whole_real1}|{whole_real2}|{part_real}

single_char            [^\\\']
simple_esc_seq         \\[\'\"\\0abfnrtv]
uni_esc_seq1           \\u{hex_digit}{4}
uni_esc_seq2           \\U{hex_digit}{8}
uni_esc_seq            {uni_esc_seq1}|{uni_esc_seq2}
hex_esc_seq            \\x{hex_digit}{1,4}
character              {single_char}|{simple_esc_seq}|{hex_esc_seq}|{uni_esc_seq}
character_literal      \'{character}\'


single_string_char     [^\\\"]
reg_string_char        {single_string_char}|{simple_esc_seq}|{hex_esc_seq}|{uni_esc_seq}
regular_string         \"{reg_string_char}*\"
single_verbatim_char   [^\"]
quote_esc_seq          \"\"
verb_string_char       {single_verbatim_char}|{quote_esc_seq}
verbatim_string        @\"{verb_string_char}*\"
string_literal         {regular_string}|{verbatim_string}

white_space			  [ \t\n\r]

letter_char            [A-Za-z]
ident_char             {dec_digit}|{letter_char}|"_"|"@"
identifier             ({letter_char}|"_"){ident_char}*
at_identifier          \@{identifier}
bad_identifier			[&^%$#@!~{}"?,|\/{}0-9]*{identifier}

rank_specifier         "["{white_space}*(","{white_space}*)*"]"

%x IN_COMMENT

%s IN_ATTRIB IN_ACCESSOR IN_GETSET

%%

%{
		while(!t.empty()){
			int x = t.front();
			t.pop();
			return x;
		}
%}
					/***** White comments *****/
\n				{ col_no=1; line_no++; }
\t				{ col_no+=4; }
" "				{ col_no++; }


                      /***** Comments *****/
\/\*                           		{ BEGIN multilinecomment; }
<multilinecomment>[^*\n]*			{;}
<multilinecomment>"*"+[^*/\n]*		{line_no++;}
<multilinecomment>"*"+"/"           { BEGIN INITIAL;}

{single_line_comment} { line_no++; col_no=1; }

                      /***** Literals *****/
{integer_literal}     { doForReturn(yytext); yylval.r.i=atoi(yytext); t.push(INTEGER_LITERAL); }
{real_literal}        { doForReturn(yytext); yylval.r.f=(float)atof(yytext); t.push(REAL_LITERAL); }
{character_literal}   { doForReturn(yytext); yylval.r.c=yytext[1]; t.push(CHARACTER_LITERAL); }
{string_literal}      { doForReturn(yytext); doForName(yytext); t.push(STRING_LITERAL); }



                      /*** Punctuation and Single-Character Operators ***/
","   { doForReturn(yytext); t.push(COMMA); }


"["   { doForReturn(yytext);  bracket b = {'[',line_no,col_no}; brackets.push(b); t.push(LEFT_BRACKET); }

"]"   { doForReturn(yytext); 
	
		if(brackets.empty())
			fprintf(stderr,"[%d, %d] -> unbalanced parenthesis, unexpected ]\n",line_no,col_no);
		else if(brackets.top().br != '[')
			fprintf(stderr,"[%d, %d] -> unbalanced parenthesis, unexpected ], expected %c in line %d\n",line_no,col_no,brackets.top().br,brackets.top().line_no);
		else
			brackets.pop();
		
		t.push(RIGHT_BRACKET); 
}



"{"   { doForReturn(yytext);  bracket b = {'{',line_no,col_no}; brackets.push(b); t.push(LEFT_BRACKET_GROUP); }

"}"   { doForReturn(yytext); 

		if(brackets.empty())
			fprintf(stderr,"[%d, %d] -> unbalanced parenthesis, unexpected }\n",line_no,col_no);
		else if(brackets.top().br != '{')
			fprintf(stderr,"[%d, %d] -> unbalanced parenthesis, unexpected }, expected %c in line %d\n",line_no,col_no,brackets.top().br,brackets.top().line_no);
		else
			brackets.pop();

		t.push(RIGHT_BRACKET_GROUP); 
}



"("   {  doForReturn(yytext);  bracket b = {'(',line_no,col_no}; brackets.push(b); t.push(LEFT_BRACKET_CIRCLE); }

")"   { doForReturn(yytext); 
	
		if(brackets.empty())
			fprintf(stderr,"[%d, %d] -> unbalanced parenthesis, unexpected )\n",line_no,col_no);
		else if(brackets.top().br != '(')
			fprintf(stderr,"[%d, %d] -> unbalanced parenthesis, unexpected ), expected %c in line %d\n",line_no,col_no,brackets.top().br,brackets.top().line_no);
		else
			brackets.pop();

		t.push(RIGHT_BRACKET_CIRCLE); 
}



">"   { doForReturn(yytext); t.push(GREATER); }
"<"   { doForReturn(yytext); t.push(SMALLER); }

"."   { doForReturn(yytext); t.push(DOT); }
";"   { doForReturn(yytext); t.push(SEMICOLON); }
":"   { doForReturn(yytext); t.push(COLON); }

"+"   { doForReturn(yytext); t.push(PLUS); }
"-"   { doForReturn(yytext); t.push(MINUS); }
"*"   { doForReturn(yytext); t.push(STAR); }
"/"   { doForReturn(yytext); t.push(SLASH); }
"%"   { doForReturn(yytext); t.push(PERCENT); }
"&"   { doForReturn(yytext); t.push(AND); }
"|"   { doForReturn(yytext); t.push(OR); }
"!"   { doForReturn(yytext); t.push(EXCLAMATION_POINT); }
"~"   { doForReturn(yytext); t.push(TILDE); }
"^"   { doForReturn(yytext); t.push(POWER); }

"?"   { doForReturn(yytext); t.push(QUESTION_MARK); }
"="   { doForReturn(yytext); t.push(EQUAL); }

{rank_specifier}     { t.push(RANK_SPECIFIER); }

                      /*** Multi-Character Operators ***/
"+="  { doForReturn(yytext); t.push(PLUSEQ); }
"-="  { doForReturn(yytext); t.push(MINUSEQ); }
"*="  { doForReturn(yytext); t.push(STAREQ); }
"/="  { doForReturn(yytext); t.push(DIVEQ); }
"%="  { doForReturn(yytext); t.push(MODEQ); }
"^="  { doForReturn(yytext); t.push(XOREQ); }
"&="  { doForReturn(yytext); t.push(ANDEQ); }
"|="  { doForReturn(yytext); t.push(OREQ); }
"<<"  { doForReturn(yytext); t.push(LTLT); }
">>"  { doForReturn(yytext); t.push(GTGT); }
">>="  { doForReturn(yytext); t.push(GTGTEQ); }
"<<="  { doForReturn(yytext); t.push(LTLTEQ); }
"=="  { doForReturn(yytext); t.push(EQEQ); }
"!="  { doForReturn(yytext); t.push(NOTEQ); }
"<="  { doForReturn(yytext); t.push(LEQ); }
">="  { doForReturn(yytext); t.push(GEQ); }
"&&"  { doForReturn(yytext); t.push(ANDAND); }
"||"  { doForReturn(yytext); t.push(OROR); }
"++"  { doForReturn(yytext); t.push(PLUSPLUS); }
"--"  { doForReturn(yytext); t.push(MINUSMINUS); }
"->"  { doForReturn(yytext); t.push(ARROW); }




{identifier}          { doForReturn(yytext); doForName(yytext); t.push(token_for(yytext)); }

{bad_identifier}	  { lexical_error("unqualified id, unexpected",  yytext); }

.					  {	lexical_error("invalid token", yytext);	}

<<EOF>> {
	if(!brackets.empty() || invalid_token == true)
		yyterminate();
	t.push(0);
	while(!t.empty()){
		int x = t.front();
		t.pop();
		return x;
	}
}
%%


static struct name_value {
  char *name;
  int value;
} name_value;
static struct name_value keywords [] = {
 /* This list must remain sorted!!! */
    {"abstract", ABSTRACT},
    {"as", AS},
    {"base", BASE},
    {"bool", BOOL},
    {"break", BREAK},
    {"byte", BYTE},
    {"case", CASE},
    {"catch", CATCH},
    {"char", CHAR},
    {"checked", CHECKED},
    {"class", CLASS},
    {"const", CONST},
    {"continue", CONTINUE},
    {"decimal", DECIMAL},
    {"default", DEFAULT},
    {"delegate", DELEGATE},
    {"do", DO},
    {"double", DOUBLE},
    {"else", ELSE},
    {"enum", ENUM},
    {"event", EVENT},
    {"explicit", EXPLICIT},
    {"extern", EXTERN},
    {"false", FALSE},
    {"finally", FINALLY},
    {"fixed", FIXED},
    {"float", FLOAT},
    {"for", FOR},
    {"foreach", FOREACH},
    {"goto", GOTO},
    {"if", IF},
    {"implicit", IMPLICIT},
    {"in", IN},
    {"int", INT},
    {"interface", INTERFACE},
    {"internal", INTERNAL},
    {"is", IS},
    {"lock", LOCK},
    {"long", LONG},
    {"namespace", NAMESPACE},
    {"new", NEW},
    {"null", NULL_LITERAL},
    {"object", OBJECT},
    {"operator", OPERATOR},
    {"out", OUT},
    {"override", OVERRIDE},
    {"params", PARAMS},
    {"private", PRIVATE},
    {"protected", PROTECTED},
    {"public", PUBLIC},
    {"readonly", READONLY},
    {"ref", REF},
    {"return", RETURN},
    {"sbyte", SBYTE},
    {"sealed", SEALED},
    {"short", SHORT},
    {"sizeof", SIZEOF},
    {"stackalloc", STACKALLOC},
    {"static", STATIC},
    {"string", STRING},
    {"struct", STRUCT},
    {"switch", SWITCH},
    {"this", THIS},
    {"throw", THROW},
    {"true", TRUE},
    {"try", TRY},
    {"typeof", TYPEOF},
    {"uint", UINT},
    {"ulong", ULONG},
    {"unchecked", UNCHECKED},
    {"unsafe", UNSAFE},
    {"ushort", USHORT},
    {"using", USING},
    {"virtual", VIRTUAL},
    {"void", VOID},
    {"volatile", VOLATILE},
    {"while", WHILE},
  };


/* Conduct a binary search for lexeme in the keywords array
 * between indices start (inclusive) and finish (exclusive)
 */
static int bin_search(const char *lexeme, int start, int finish)
{
  if (start >= finish)  /* Not found */
      return IDENTIFIER;
  else {
    int mid = (start+finish)/2;
    int cmp = strcmp(lexeme,keywords[mid].name);
    if (cmp == 0)
      return keywords[mid].value;
    else if (cmp < 0)
      return bin_search(lexeme,start,mid);
    else
      return bin_search(lexeme,mid+1,finish);
  }
}

static int token_for(const char *lexeme)
{

  static int num_keywords = sizeof(keywords) / sizeof(name_value);
  int token = bin_search(lexeme,0,num_keywords);
  if (token == -1)
    token = IDENTIFIER;
  return token;
}



void lexical_error(const char *msg, char *yytext)
{
	extern bool invalid_token;
	invalid_token = true;
	fprintf(stderr,"[%d, %d] -> lexical error, %s [%s]\n",line_no,col_no,msg,yytext);
}