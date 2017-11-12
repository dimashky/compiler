#include <stdio.h>

using namespace std;

extern int yyparse(void);

int main()
{

	freopen("sample inputs/input.cs", "r", stdin);

	freopen("output.txt", "w", stdout);

	return yyparse();

}