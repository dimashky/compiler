#include <stdio.h>
#include <chrono>
#include <ctime>
#include "Error Handler\error_handler.h"
#include "logger/Logger.h"

#include <Windows.h>

using namespace std;

extern int yyparse(void);

extern errorHandler error_handler("error.log");
extern FILE* info = fopen("./visually output/js/info.js","w");
extern Logger l;
extern FILE* yyin;
extern int yydebug;

extern string get_time_and_date();


int main()
{

	int debug=1;
	int num=1;

	/*cout << "Enter to bison debug mode? [ 0 (no) - other (yes)] ";
	cin >> debug;
	yydebug = (debug == 0 ? 0 : 1);
	
	cout << "Enter example number : ";
	*/cin >> num;
	num = (num < 1 ? 1 : (num > 16 ? 16 : num));
	yyin = fopen(string("sample inputs/example"+to_string(num)+".cs").c_str(),"r");
	fprintf(info, "var input = '%s", string("example" + to_string(num) + ".cs';").c_str());
	auto start = std::chrono::system_clock::now();
	yyparse();
	auto end = std::chrono::system_clock::now();

	std::chrono::duration<double> elapsed_seconds = end - start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	string end_time_str = get_time_and_date();
	std::cout << "-> Finished Parsing at:\t" << std::ctime(&end_time) << "-> Elapsed time:\t" << elapsed_seconds.count() << "s\n";
	fprintf(info, "var parse_end = '%s';var parse_elapsed = '%f';\n", end_time_str.c_str(), elapsed_seconds.count());
	int error_cnt = error_handler.errorsNum();
	cout<< (error_cnt == 0 ? "With NO errors" : ("-> With Errors :\t"+to_string(error_cnt)) )<<"\n============\n";

	l.print();
	
	error_handler.print();
	if(error_cnt == 0)
		cout << "To see visuallize section open -> ./visually output/index.html\n" << endl;
	cout << "-------------------------THE END-----------------------------\n" << endl;

	fclose(info);

	system("pause");
	return 0;
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
