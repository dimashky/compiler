#pragma once
#include "TypeExpression.h"

class TypeDouble : public TypeExpression {
public:
	static TypeDouble* getInstance();

	std::string typeExpression();

	TypeExpression* operation(Operator op, TypeExpression* secondOperand = nullptr);

	int equivelantTo(TypeExpression* secondOperand, bool cast = false);

private:
	static TypeDouble* instance;
	TypeDouble();
};