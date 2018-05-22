#pragma once 
#include "TypeExpression.h"

class TypeString : public TypeExpression {
public:
	static TypeString* getInstance();

	std::string TypeString::typeExpression();

	TypeExpression* operation(Operator op, TypeExpression* secondOperand = nullptr);

	int equivelantTo(TypeExpression* secondOperand, bool cast = false);

private:
	static TypeString* instance;

	TypeString();
};