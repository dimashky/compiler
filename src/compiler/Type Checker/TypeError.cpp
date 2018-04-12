#include "TypeExpression.h"
#include "TypeError.h"
#include <string>

TypeError::TypeError(std::string msg) {
	this->typeId = TYPE::TYPE_ERROR;
	this->msg = msg;
}

std::string TypeError::getMsg() {
	return this->msg;
}