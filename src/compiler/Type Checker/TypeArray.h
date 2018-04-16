#pragma once
#include "all.h"

class TypeArray : public TypeExpression {
public:
	TypeArray(TypeExpression*, int);
	string typeExpression();

	int getSize();
	TypeExpression* getOf();

	TypeExpression* opSqrBrackets(TypeExpression*);

private:
	// number of elements
	int size;
	// Type Expression of its elements
	TypeExpression* elementType;
};