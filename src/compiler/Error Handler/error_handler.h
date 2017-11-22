#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

#include <iostream>
#include <fstream>
#include <queue>
#include <string.h>
#include "error_record.h"


class errorHandler {
	std::queue<error> errorList;
	char* filename;
	int counter = 0;
public:
	errorHandler(char* filename) {
		this->filename = filename;
	}
	void add(error e) {
		e.id = ++counter;
		errorList.push(e);
	}
	void print() {
		FILE* f = fopen(filename, "w");
		fprintf(f, "Total Errors = %d\n", counter);
		extern FILE* info;
		fprintf(info, "var error_num = %d;\n", counter);
		if(counter)
			fprintf(info, "var errors = [];\n");
		while (!errorList.empty()) {
			error e = errorList.front();
			fprintf(f, "Error#%d [%d, %d] -> %s\n",e.id,e.line_no, e.col_no, e.msg.c_str());
			std::string ss = "errors.push({ line: "+ std::to_string(e.line_no) +", col : "+std::to_string(e.col_no)+", msg: '"+ e.msg+"'});\n";
			fprintf(info, "%s", ss.c_str());
			errorList.pop();
		}
		fclose(f);
	}
	int errorsNum() {
		return errorList.size();
	}
};






#endif