#pragma once
#include "TypeExpression.h"

class TypeVoid : public TypeExpression {
public:
	static TypeVoid* getInstance();

	std::string typeExpression();

private:
	static TypeVoid* instance;
	TypeVoid();
};