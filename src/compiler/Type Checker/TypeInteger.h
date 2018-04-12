#pragma once
#include "TypeExpression.h"

class TypeInteger : public TypeExpression {
public:
	TypeInteger();

	TypeExpression* opPlus(int);

private:
};