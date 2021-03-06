#pragma once
#include "Expression.h"
#include "../Object/Object.h"
#include "../../Symbol Table/Symbol.h"
#include "../../Symbol Table/Class.h"
#include "../../Type Checker/all.h"
#include "../../Symbol Table/Field.h"
#include "../../Symbol Table/LocalVariable.h"

using namespace::std;

class Identifier : public Expression
{
private:
	/*
	*	maybe there is no dot so at least preDot or postDot not equal to nullptr	
	*/
	Node* preDot;
	Symbol* postDot;
	bool isArray, isConst, isReadonly, isType;
public:
	vector<Node*>dimensions;

	static bool leftAssignment, isAssigned, isStaticMethod;

	Identifier(Node* preDot, Symbol* postDot, bool isArray = false);

	string getPath();

	string getType();

	void setPostDot(Symbol* postdot) {
		this->postDot = postdot;
	}
	
	Node* getPreDot();

	Symbol* getPostDot();

	bool getIsConst();

	bool getIsReadonly();

	void setArrayDimensions(queue<Node*>dimensions);

	int print(int);

	bool typeChecking();
	void generateCode();

	~Identifier();
};

