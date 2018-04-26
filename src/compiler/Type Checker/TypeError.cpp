#include "all.h"
#include <string>
#include "../Error Handler/error_handler.h"
#include "../Error Handler/error_record.h"

extern errorHandler error_handler;

TypeError::TypeError(std::string msg, int lineNum) {
	this->typeId = TYPE_ERROR;
	this->msg = msg;
	this->bytes = 0;
	error_handler.add(error(lineNum, -1, msg));
}

std::string TypeError::getMsg() {
	return this->msg;
}