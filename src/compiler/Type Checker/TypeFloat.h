#pragma once
#include "TypeExpression.h"

class TypeFloat : public TypeExpression {
public:
	TypeFloat();

	TypeExpression* opPlus(int);

private:
};