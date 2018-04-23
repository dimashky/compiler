#pragma once
#include "TypeExpression.h"

class TypeVoid : public TypeExpression {
public:
	static TypeVoid* getInstance();
private:
	static TypeVoid* instance;
	TypeVoid();
};