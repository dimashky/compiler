#pragma once
#include "all.h"
#include <string>

class TypeClass : public TypeExpression {
public:
	TypeClass();
	string typeExpression();

private:
	std::string name;
	// Map: key is string (field or method) and value is TypeExpression of key
};