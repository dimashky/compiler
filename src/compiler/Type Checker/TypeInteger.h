#pragma once
#include "TypeExpression.h"
#include <string>
#include <iostream>
class TypeInteger : public TypeExpression {
public:
	static TypeInteger* getInstance();
	
	std::string typeExpression() {
		return "INT";
	}

	TypeExpression* opPlus(int);
	TypeExpression* opMinus(int);
	TypeExpression* opMult(int);
	TypeExpression* opDiv(int);
	TypeExpression* opMod(int);
	TypeExpression* opExp(int);

	TypeExpression* opGreaterThan(int);
	TypeExpression* opLessThan(int);
	TypeExpression* opGreaterOrEq(int);
	TypeExpression* opLessOrEq(int);

	TypeExpression* opEqual(int);

	int equivelantTo(int);

private:
	static TypeInteger* instance;
	TypeInteger();
};