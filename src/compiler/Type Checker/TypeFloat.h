#pragma once
#include "TypeExpression.h"

class TypeFloat : public TypeExpression {
public:
	static TypeFloat* getInstance();

	std::string typeExpression();

	TypeExpression* operation(Operator op, TypeExpression* secondOperand = nullptr);

	int equivelantTo(TypeExpression* secondOperand, bool cast = false);

private:
	static TypeFloat* instance;
	TypeFloat();
};