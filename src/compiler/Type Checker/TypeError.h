#pragma once
#include "TypeExpression.h"
#include <string>

using std::string;

class TypeError : public TypeExpression {
public:
	TypeError(string);
	string getMsg();

private:
	string msg;
};