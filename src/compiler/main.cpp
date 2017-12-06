#include <stdio.h>
#include<stack>
#include "Symbol Table\symbolTable.h"
#include "Error Handler\error_handler.h"
#include "logger/Logger.h"

using namespace std;

extern int yyparse(void);

extern errorHandler error_handler("error.log");
extern Logger l;
extern FILE* yyin;
extern int yydebug;


int main()
{

	int debug = 0;
	int num = 1;

	/*cout << "Enter to bison debug mode? [ 0 (no) - other (yes)] ";
	cin >> debug;
	yydebug = (debug == 0 ? 0 : 1);

	cout << "Enter example number : ";
	cin >> num;
	num = (num < 1 ? 1 : (num > 16 ? 16 : num));*/

	yyin = fopen(string("sample inputs/example"+to_string(num)+".cs").c_str(),"r");

	yyparse();

	l.print();
	
	error_handler.print();


	system("pause");
	return 0;
}