#include <stdio.h>

using namespace std;

extern int yyparse(void);

int main()
{
	return yyparse();
}