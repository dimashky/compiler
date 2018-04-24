#pragma once
#include "all.h"
#include <string>
#include <map>

using namespace std;

class TypeClass : public TypeExpression {
public:
	TypeClass(string);
	string typeExpression();
	
	TypeExpression* operation(Operator op, TypeExpression* secondOperand);

	int equivelantTo(TypeExpression* secondOperand);

private:
	std::string name;
};