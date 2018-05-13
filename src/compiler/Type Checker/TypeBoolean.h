#pragma once
#include "TypeExpression.h"
#include "../AST/Operator.h"

class TypeBoolean : public TypeExpression {
public:
	static TypeBoolean* getInstance();

	std::string typeExpression();

	TypeExpression* operation(Operator op, TypeExpression* secondOperand = nullptr);

	int equivelantTo(TypeExpression* secondOperand, bool cast = false);

private:
	static TypeBoolean* instance;
	TypeBoolean();
};