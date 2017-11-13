#include <stdio.h>

using namespace std;

extern int yyparse(void);

int main()
{

	freopen("sample inputs/input.cs", "r", stdin);

	freopen("error.log", "w", stderr);

	return yyparse();

}