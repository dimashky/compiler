%{
	#include <string.h>
	#include <unistd.h>
	#include <iostream>
	#include <FlexLexer.h>
	#include <string>
	#include <queue>
	#include <stack>
	#include <ctime>
	#include <ratio>
	#include <chrono>
	#include "../Error Handler/error_handler.h"

	using namespace std;

	#define YY_DECL int yylex()

	#include "../parser/yacc.tab.h"


	struct bracket {
		char br;
		int line_no;
		int col_no;
	};
	
	struct r{
		int i;
		float f;
		char c;
		char* str;
		int line_no;
		int col_no;
		r(int i, float f, char c, char* s, int line_no, int col_no){
			this->i = i;
			this->f = f;
			this->c = c;
							this->str = new char[255];	this->str[0] = '\0';
			if(s != NULL){
				strcpy(this->str, s);
			}
			this->line_no = line_no;
			this->col_no = col_no;
		}
	};

	bool first_loop = true;
	int line_no = 1;
	int col_no = 1;
	static bool invalid_token = false;
	queue <int> t;
	queue <r> q;
	stack <bracket> brackets;

	void lexical_error(const char *, char *);
	static int token_for(const char *);

	void doForReturn(char * yytext){
		yylval.r.col_no = col_no;
		yylval.r.line_no = line_no;
		col_no += (int)strlen(yytext);
	}
	void add(int i, float f, char c, char* s, char* yytext){
		q.push(r(i,f,c,s,line_no,col_no) );
		if(yytext != NULL)
		col_no += (int)strlen(yytext);
	}
	void printstr(FILE* f, char* s){
		fprintf(f," ");
		for(int i = 0; i < strlen(s); ++i){
			
				if(s[i] == '\\' && s[i+1] == 'n')
				{
					fprintf(f,"\n");
					i++;
				}
				else if(s[i] == '\\' && s[i+1] == 't')
				{
					fprintf(f,"\t");
					i++;
				}
				else{
					fprintf(f,"%c",s[i]);
				}	
		}

	}
	void print(FILE* f, r *x){
		static int last_row = 1;
		if( last_row != x->line_no){
			fprintf(f,"\n");
			last_row = x->line_no;
		}
		if(x->i != NULL) fprintf(f,"%d ",x->i);
		else if(x->f != NULL) fprintf(f,"%f ",x->f);
		else if(x->c != NULL) fprintf(f,"%c ",x->c);
		else if(x->str) printstr(f, x->str);
	}
	void doForName(char* yytext){
		yylval.r.str = new char[255];
		yylval.r.str[0] = '\0';
		strcpy(yylval.r.str, yytext);
	}
	std::chrono::system_clock::time_point start;
	
	extern errorHandler error_handler;
%}

%option noyywrap
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
		if(first_loop){
		 start  = std::chrono::system_clock::now();
		 first_loop = false;
		}
		FILE *f = fopen("Lex.log","a");
		while(!t.empty()){
			int x = t.front();
			r y = q.front();
			print(f, &y);
			yylval.r.i = y.i; yylval.r.f = y.f; yylval.r.c = y.c; yylval.r.str = y.str; yylval.r.col_no = y.col_no , yylval.r.line_no = y.line_no;
			q.pop();
			t.pop();
			return x;
		}
		fclose(f);
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
{integer_literal}     { add(atoi(yytext),NULL,NULL,NULL,yytext); t.push(INTEGER_LITERAL); }
{real_literal}        { add(NULL,atof(yytext),NULL,NULL,yytext); t.push(REAL_LITERAL); }
{character_literal}   { add(NULL,NULL,yytext[0],NULL,yytext);	  t.push(CHARACTER_LITERAL); }
{string_literal}      { add(NULL,NULL,NULL,yytext,yytext);	  // printstr(stdout, yytext);
																 t.push(STRING_LITERAL); }



                      /*** Punctuation and Single-Character Operators ***/
","   { add(NULL,NULL,NULL,NULL,yytext);  t.push(COMMA); }


"["   { add(NULL,NULL,NULL,NULL,yytext);   bracket b = {'[',line_no,col_no}; brackets.push(b); t.push(LEFT_BRACKET); }

"]"   { add(NULL,NULL,NULL,NULL,yytext);  
	
		if(brackets.empty())
			error_handler.add(error(line_no, col_no, "unbalanced parenthesis, unexpected ]\n"));
		else if(brackets.top().br != '[')
			error_handler.add(error(line_no, col_no, ("unbalanced parenthesis, unexpected ], expected match for "+string(1,(brackets.top().br))+" in line "+to_string(brackets.top().line_no)).c_str()));

		brackets.pop();
		
		t.push(RIGHT_BRACKET); 
}



"{"   { add(NULL,NULL,NULL,NULL,yytext);   bracket b = {'{',line_no,col_no}; brackets.push(b); t.push(LEFT_BRACKET_GROUP); }

"}"   { add(NULL,NULL,NULL,NULL,yytext);  

		if(brackets.empty())
			error_handler.add(error(line_no, col_no, "unbalanced parenthesis, unexpected }\n"));
		else if(brackets.top().br != '{')
			error_handler.add(error(line_no, col_no, ("unbalanced parenthesis, unexpected }, expected match for "+string(1,(brackets.top().br))+" in line "+to_string(brackets.top().line_no)).c_str()));

		brackets.pop();

		t.push(RIGHT_BRACKET_GROUP); 
}



"("   {  add(NULL,NULL,NULL,NULL,yytext);   bracket b = {'(',line_no,col_no}; brackets.push(b); t.push(LEFT_BRACKET_CIRCLE); }

")"   { add(NULL,NULL,NULL,NULL,yytext);  
	
		if(brackets.empty())
			error_handler.add(error(line_no, col_no, "unbalanced parenthesis, unexpected )\n"));
		else if(brackets.top().br != '(')
			error_handler.add(error(line_no, col_no, ("unbalanced parenthesis, unexpected ), expected match for "+string(1,(brackets.top().br))+" in line "+to_string(brackets.top().line_no)).c_str()));
		
		brackets.pop();

		t.push(RIGHT_BRACKET_CIRCLE); 
}



">"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(GREATER); }
"<"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(SMALLER); }

"."   { add(NULL,NULL,NULL,NULL,yytext);  t.push(DOT); }
";"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(SEMICOLON); }
":"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(COLON); }

"+"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(PLUS); }
"-"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(MINUS); }
"*"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(STAR); }
"/"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(SLASH); }
"%"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(PERCENT); }
"&"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(AND); }
"|"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(OR); }
"!"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(EXCLAMATION_POINT); }
"~"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(TILDE); }
"^"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(POWER); }

"?"   { add(NULL,NULL,NULL,NULL,yytext);  t.push(QUESTION_MARK); }
"="   { add(NULL,NULL,NULL,NULL,yytext);  t.push(EQUAL); }

{rank_specifier}     { add(NULL,NULL,NULL,NULL,yytext); t.push(RANK_SPECIFIER); }

                      /*** Multi-Character Operators ***/
"+="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(PLUSEQ); }
"-="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(MINUSEQ); }
"*="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(STAREQ); }
"/="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(DIVEQ); }
"%="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(MODEQ); }
"^="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(XOREQ); }
"&="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(ANDEQ); }
"|="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(OREQ); }
"<<"  { add(NULL,NULL,NULL,NULL,yytext);  t.push(LTLT); }
">>"  { add(NULL,NULL,NULL,NULL,yytext);  t.push(GTGT); }
">>=" { add(NULL,NULL,NULL,NULL,yytext);  t.push(GTGTEQ); }
"<<=" { add(NULL,NULL,NULL,NULL,yytext);  t.push(LTLTEQ); }
"=="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(EQEQ); }
"!="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(NOTEQ); }
"<="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(LEQ); }
">="  { add(NULL,NULL,NULL,NULL,yytext);  t.push(GEQ); }
"&&"  { add(NULL,NULL,NULL,NULL,yytext);  t.push(ANDAND); }
"||"  { add(NULL,NULL,NULL,NULL,yytext);  t.push(OROR); }
"++"  { add(NULL,NULL,NULL,NULL,yytext);  t.push(PLUSPLUS); }
"--"  { add(NULL,NULL,NULL,NULL,yytext);  t.push(MINUSMINUS); }
"->"  { add(NULL,NULL,NULL,NULL,yytext);  t.push(ARROW); }




{identifier}          { add(NULL,NULL,NULL,yytext,yytext);  t.push(token_for(yytext)); }


.					  {	lexical_error("invalid token", yytext);	}

<<EOF>> {
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout << "Statics:\n-> Finished Scan at:\t" << std::ctime(&end_time) << "-> Elapsed time:\t" << elapsed_seconds.count() << "s\n============\n";


	if(!brackets.empty()){
		while(!brackets.empty()){
			error_handler.add(error(line_no, col_no, ("unbalanced parenthesis, NO match for "+string(1,(brackets.top().br))+" in line "+to_string(brackets.top().line_no)).c_str()));		
			brackets.pop();
		}
		yyterminate();
		return 0;
	}

	t.push(0);
	add(NULL,NULL,NULL,"END","END");
	FILE *f = fopen("Lex.log","w");
	while(!t.empty()){
		int x = t.front();
		r y = q.front();
		print(f,&y);
		yylval.r.i = y.i; yylval.r.f = y.f; yylval.r.c = y.c; yylval.r.str = y.str; yylval.r.line_no = y.col_no;
		q.pop();
		t.pop();
		return x;
	}
	fclose(f);
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