#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> 
#include <string.h>
#include "error_record.h"


class errorHandler {
	std::vector<error> errorList;
	char* filename;
	int counter ;
public:
	errorHandler(char* filename) {
		counter = 0 ;
		this->filename = filename;
	}
	void add(error e) {
		if (e.msg.find("ERROR_TYPE") == std::string::npos && e.msg.find("Error") == std::string::npos && e.msg.find("TypesTable") == std::string::npos) {
			e.id = ++counter;
			errorList.push_back(e);
		}
	}
	void print() {
		std::sort(errorList.begin(), errorList.end());
	//	errorList.erase(unique(errorList.begin(), errorList.end()), errorList.end());
		FILE* f = fopen(filename, "w");
		fprintf(f, "Total Errors = %d\n", errorsNum());
		extern FILE* info;
		fprintf(info, "var error_num = %d;\n", errorsNum());
		if(counter)
			fprintf(info, "var errors = [];\n");
		for (error e : errorList) {
			fprintf(f, "Error#%d [%d, %d] -> %s\n",e.id,e.line_no, e.col_no, e.msg.c_str());
			std::string ss = "errors.push({ line: "+ std::to_string(e.line_no) +", col : "+std::to_string(e.col_no)+", msg: '"+ e.msg+"'});\n";
			fprintf(info, "%s", ss.c_str());
		}
		fclose(f);
	}
	int errorsNum() {
		return errorList.size();
	}
};






#endif