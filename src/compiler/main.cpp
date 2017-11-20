#include <stdio.h>
#include <chrono>
#include <ctime>
#include "Error Handler\error_handler.h"
#include "logger/Logger.h"
#include <Windows.h>

using namespace std;

extern int yyparse(void);

extern errorHandler error_handler("error.log");
extern Logger l;
extern FILE* yyin;
extern int yydebug;


int main()
{

	int debug;
	int num;
	
	cout << "Enter to bison debug mode? [ 0 (no) - other (yes)] ";
	cin >> debug;
	yydebug = (debug == 0 ? 0 : 1);
	
	cout << "Enter example number : ";
	cin >> num;
	num = (num < 1 ? 1 : (num > 16 ? 16 : num));
	yyin = fopen(string("sample inputs/example"+to_string(num)+".cs").c_str(),"r");

	auto start = std::chrono::system_clock::now();
	yyparse();
	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);

	std::cout << "-> Finished Parsing at:\t" << std::ctime(&end_time) << "-> Elapsed time:\t" << elapsed_seconds.count() << "s\n";

	int error_cnt = error_handler.errorsNum();
	cout<< (error_cnt == 0 ? "With NO errors" : ("-> With Errors :\t"+to_string(error_cnt)) )<<"\n============\n";

	l.print();
	
	error_handler.print();
	if(error_cnt == 0)
		cout << "To see visuallize section open -> ./visually output/index.html\n" << endl;
	cout << "-------------------------THE END-----------------------------\n" << endl;


	system("pause");
	return 0;
}