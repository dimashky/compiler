#include <stdio.h>
#include "Error Handler\error_handler.h"
#include "Logger.h"

using namespace std;

extern int yyparse(void);

extern errorHandler error_handler("Logs/error.log");

extern Logger l;

int main()
{
	//extern int yydebug;
	//yydebug = 1;


	freopen("sample inputs/input.cs", "r", stdin);
	fclose(fopen("logs/Lex.log", "w"));

	//freopen("error.log", "w", stderr);

	yyparse();

	l.print();
	
	error_handler.print();

	return 0;
}