#include "all.h"
#include <string>
#include "../Error Handler/error_handler.h"
#include "../Error Handler/error_record.h"

extern errorHandler error_handler;

TypeError::TypeError(std::string msg) {
	this->typeId = TYPE_ERROR;
	this->msg = msg;
	error_handler.add(error(-15,-15,msg));
}

std::string TypeError::getMsg() {
	return this->msg;
}