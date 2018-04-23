#pragma once
#include "TypeExpression.h"

class TypeFloat : public TypeExpression {
public:
	static TypeFloat* getInstance();

	std::string typeExpression() {
		return "FLOAT";
	}

	TypeExpression* opPlus(int secondTypeId);

	TypeExpression* opMinus(int secondTypeId);

	TypeExpression* opMult(int secondTypeId);

	TypeExpression* opDiv(int secondTypeId);

	TypeExpression* opMod(int secondTypeId);

	TypeExpression* opGreaterThan(int secondTypeId);

	TypeExpression* opLessThan(int secondTypeId);

	TypeExpression* opGreaterOrEq(int secondTypeId);

	TypeExpression* opLessOrEq(int secondTypeId);

	TypeExpression* opEqual(int secondTypeId);

	int equivelantTo(int secondTypeId);

private:
	static TypeFloat* instance;
	TypeFloat();
};