#pragma once
#include "TypeExpression.h"

class TypeBoolean : public TypeExpression {
public:
	static TypeBoolean* getInstance();

	//Operations
	TypeExpression* opAnd(int secondTypeId);

	TypeExpression* opOr(int secondTypeId);

	int equivelantTo(int secondTypeId);
private:
	static TypeBoolean* instance;
	TypeBoolean();
};