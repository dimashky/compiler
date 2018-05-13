#pragma once
#include "TypeExpression.h"
#include <string>

using std::string;

class TypeError : public TypeExpression {
public:
	TypeError(string, int = -1);
	string getMsg();

private:
	string msg;
};