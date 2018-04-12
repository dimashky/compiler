#pragma once

enum TYPE
{
	TYPE_ERROR = 0, TYPE_VOID, TYPE_INTEGER, TYPE_BOOLEAN, TYPE_FLOAT, TYPE_STRING, TYPE_CHAR,
	TYPE_CLASS, TYPE_ARRAY, TYPE_FUNCTION
};

class TypeExpression {
public:
	TypeExpression();
	
	// getters
	int getTypeId();

	// operations
	virtual TypeExpression* opPlus(int typeId);
	virtual TypeExpression* opMinus(int typeId);
	virtual TypeExpression* opMult(int typeId);
	virtual TypeExpression* opDiv(int typeId);
	virtual TypeExpression* opMod(int typeId);
	
protected:
	int typeId;
};