#pragma once

class TypeExpression {
public:
	TypeExpression();
	
	// getters
	int getTypeId();
	int getSize();

	// setters
	void setSize(int);



	// operations
	/// TODO: opDot 

	virtual TypeExpression* opPlus(int);
	virtual TypeExpression* opMinus(int);
	virtual TypeExpression* opMult(int);
	virtual TypeExpression* opDiv(int);
	virtual TypeExpression* opMod(int);

	virtual TypeExpression* opGreaterThan(int);
	virtual TypeExpression* opLessThan(int);
	virtual TypeExpression* opGreaterOrEq(int);
	virtual TypeExpression* opLessOrEq(int);

	virtual TypeExpression* opAnd(int);
	virtual TypeExpression* opOr(int);
	virtual TypeExpression* opEqual(int);

	virtual TypeExpression* opSqrBrackets(int);

	//Type Equivelance
	virtual int equivelantTo(int);
	
protected:
	int size;
	int typeId;
};