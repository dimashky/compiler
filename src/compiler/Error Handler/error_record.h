#ifndef ERROR_RECORD_H
#define ERROR_RECORD_H

#include <string>

struct error
{
	int id;
	int line_no;
	int col_no;
	std::string msg;

	error(int line,int col,const char* msg) {
		this->line_no = line;
		this->col_no = col;
		this->msg = std::string(msg);
	}

	error(int line, int col, std::string msg) {
		this->line_no = line;
		this->col_no = col;
		this->msg = msg;
	}

	bool operator == (const error& e) {
		// return (line_no == e.line_no && col_no == e.col_no && msg == e.msg);
		return (msg == e.msg);
	}

	bool operator < (const error& e) {
		return (line_no < e.line_no);
	}

	bool operator > (const error& e) {
		return (line_no > e.line_no);
	}
};



#endif