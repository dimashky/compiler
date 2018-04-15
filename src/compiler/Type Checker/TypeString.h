#pragma once 
#include "TypeExpression.h"

class TypeString : public TypeExpression {
public:
	static TypeString* getInstance();

	TypeExpression* opPlus(int secondTypeId);
	TypeExpression* opEqual(int secondTypeId);

	int equivelantTo(int secondTypeId);

	int getTypeId();

private:
	static TypeString* instance;

	TypeString();
};