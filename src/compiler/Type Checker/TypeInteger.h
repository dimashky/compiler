#pragma once
#include "TypeExpression.h"
#include <string>
#include <iostream>
class TypeInteger : public TypeExpression {
public:
	static TypeInteger* getInstance();
	
	std::string typeExpression();

	TypeExpression* operation(Operator op, TypeExpression* secondOperand = nullptr);

	int equivelantTo(TypeExpression* secondOperand, bool cast = false);
private:
	static TypeInteger* instance;
	TypeInteger();
};