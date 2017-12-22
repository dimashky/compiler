#include <stdio.h>
#include<stack>
#include "Symbol Table\symbolTable.h"
#include "Symbol Table\symbol_parser.h"
#include <chrono>
#include <ctime>
#include "Error Handler\error_handler.h"
#include "logger/Logger.h"
#include"tools/dirent.h"
#include<regex>

#include <Windows.h>

using namespace std;

extern int yyparse(void);

extern errorHandler error_handler("error.log");
extern FILE* info = fopen("./visually output/js/info.js","w");
extern Logger l;
extern FILE* yyin;
extern int yydebug;
extern symbolParser* SPL = new symbolParser();
vector<string> files;
void scan(char*);
extern int line_no;
extern int col_no;

extern string get_time_and_date();


int main()
{
	
	int debug = 0;

  fprintf(info, "var input = 'sample inputs/input'");

  auto start = std::chrono::system_clock::now();
	scan("sample inputs/input");
	for (auto x : files) {
		line_no = col_no = 1;
		cout << "===> Compiling " << x << endl;
		yyin = fopen(x.c_str(), "r");
		yyparse();
	}
  auto end = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	string end_time_str = get_time_and_date();
	std::cout << "-> Finished Parsing at:\t" << std::ctime(&end_time) << "-> Elapsed time:\t" << elapsed_seconds.count() << "s\n";
	fprintf(info, "var parse_end = '%s';var parse_elapsed = '%f';\n", end_time_str.c_str(), elapsed_seconds.count());
	int error_cnt = error_handler.errorsNum();
	cout<< (error_cnt == 0 ? "With NO errors" : ("-> With Errors :\t"+to_string(error_cnt)) )<<"\n============\n";
  
  
	SPL->check();
  
  
	l.print();
	
	error_handler.print();
	if(error_cnt == 0)
		cout << "To see visuallize section open -> ./visually output/index.html\n" << endl;
	cout << "-------------------------THE END-----------------------------\n" << endl;

	if (! symbolTable::initPrintFiles())
	{
		cout << "the end is near";
	}
	else {
		SPL->getSymbolTableRoot()->print(0);
		symbolTable::closePrintFiles();
	}
  fclose(info);
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

extern string get_time_and_date() {

	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	auto duration = now.time_since_epoch();

	typedef std::chrono::duration<int, std::ratio_multiply<std::chrono::hours::period, std::ratio<8>>::type> Days; /* UTC: +8:00 */

	Days days = std::chrono::duration_cast<Days>(duration);
	duration -= days;
	auto hours = std::chrono::duration_cast<std::chrono::hours>(duration);
	duration -= hours;
	auto minutes = std::chrono::duration_cast<std::chrono::minutes>(duration);
	duration -= minutes;
	auto seconds = std::chrono::duration_cast<std::chrono::seconds>(duration);
	duration -= seconds;
	auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(duration);
	duration -= milliseconds;
	auto microseconds = std::chrono::duration_cast<std::chrono::microseconds>(duration);
	duration -= microseconds;
	auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(duration);

	return (to_string(hours.count()) + ":" + to_string(minutes.count()) + ":" + to_string(seconds.count()) + ":" + to_string(milliseconds.count()) + ":" + to_string(microseconds.count()) + ":" + to_string(nanoseconds.count()));
}
