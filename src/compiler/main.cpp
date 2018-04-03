#include "Symbol Table/symbolTable.h"
#include "Symbol Table/symbol_parser.h"
#include "Error Handler/error_handler.h"
#include "logger/Logger.h"
#include "tools/tools.h"
#include <stdio.h>
#include <ctime>
#include"AST\Object\Procedure.h"
using namespace std;

// Extern from YACC 
extern int yyparse(void);
extern FILE* yyin;

// Extern for Logs
extern errorHandler error_handler("logs/error.log");
extern Logger l;
extern FILE *lexLogger = fopen("logs/lex.log","w");

//extern for AST
extern Procedure* AST = new Procedure(nullptr, nullptr);


// Extern for website
extern FILE* info = fopen("./visually output/js/info.js","w");

// Extern for SymbolTable <-> Parsing 
extern symbolParser* SPL = new symbolParser();

// Extern for Lex
extern int line_no;
extern int col_no;
int main()
{
	Node::current = AST;
	//fprintf(info, "var input = 'sample inputs/input';");
	auto start = std::chrono::system_clock::now();
	//printf("-------------------------\nC# Compiler\n-------------------------\n");
	//printf("START Parsing....\n");
	
	vector<string> files;
	scan_for_cs_files("sample inputs/input",&files);
	for (auto x : files) {
		line_no = col_no = 1;
	//	cout << "===> Parsing\t\t'" << x <<"'"<< endl;
		yyin = fopen(x.c_str(), "r");
		yyparse();
		fclose(yyin);
		SPL->send_using_to_st();
		SPL->clear_given_usings();
	}

	fclose(lexLogger);
	auto end = std::chrono::system_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	string end_time_str = get_time_and_date();
//	std::cout << "\nFINISHED Parsing at:\t" << std::ctime(&end_time) << "-> Elapsed time:\t" << elapsed_seconds.count() << "s\n";
//	fprintf(info, "var parse_end = '%s';var parse_elapsed = '%f';\n", end_time_str.c_str(), elapsed_seconds.count());
	 
	// check symbol table
	SPL->check();
	/* Print type_defination_tree */
	symbolTable::type_defination_tree->print_defination_tree(symbolTable::type_defination_tree->get_root());
	// print yacc logger
	l.print();
	// errors
	error_handler.print();
	
	int error_cnt = error_handler.errorsNum();
//	cout << (error_cnt == 0 ? "\nWith NO errors" : ("\n-> With Errors :\t" + to_string(error_cnt))) << "\n";

	//if(error_cnt == 0)
	//cout << "To see visuallize section open -> ./visually output/index.html\n" << endl;
	//cout << "-------------------------\nEND\n-------------------------\n" << endl;
	
	if (! symbolTable::initPrintFiles())
	{
		//cout << "the end is near";
	}
	else {
		SPL->getSymbolTableRoot()->print(0);
		symbolTable::closePrintFiles();
	}
    fclose(info);


	for (int i = 0;i < symbolTable::deleted.size();i++)
		delete symbolTable::deleted[i];
	
	
	//AST->print(0);

 	system("pause");
	return 0;
}


