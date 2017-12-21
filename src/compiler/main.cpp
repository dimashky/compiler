#include <stdio.h>
#include<stack>
#include "Symbol Table\symbolTable.h"
#include "Symbol Table\symbol_parser.h"
#include "Error Handler\error_handler.h"
#include "logger/Logger.h"
#include"tools/dirent.h"
#include<regex>

using namespace std;

extern int yyparse(void);

extern errorHandler error_handler("error.log");
extern Logger l;
extern FILE* yyin;
extern int yydebug;
extern symbolParser* SPL = new symbolParser();
vector<string> files;
void scan(char*);
extern int line_no;
extern int col_no;


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
	scan("sample inputs/input");
	for (auto x : files) {
		line_no = col_no = 1;
		cout << endl << x.c_str() << " errors :" << endl;
		yyin = fopen(x.c_str(), "r");
		yyparse();
	}

	SPL->check();

	l.print();
	
	error_handler.print();

	if (! symbolTable::initPrintFiles())
	{
		cout << "the end is near";
	}
	else {
		SPL->getSymbolTableRoot()->print(0);

		symbolTable::closePrintFiles();
	}
	system("pause");
	return 0;
}



regex reg(".*.cs");
void scan(char *path) {
	DIR *dir;
	struct dirent *ent;
	if ((dir = opendir(path)) != NULL) {
		/* print all the files and directories within directory */
		while ((ent = readdir(dir)) != NULL) {
			if (ent->d_namlen < 3)
				continue;
			char location[55];
			strcpy(location, path);strcat(location, "/");strcat(location, ent->d_name);
			if (regex_match(string(ent->d_name), reg))
				files.push_back(string(location));
			if (opendir(location) != NULL)
				scan(location);
		}
		closedir(dir);
	}
	else {
		/* could not open directory */
		perror("error");
	}
}