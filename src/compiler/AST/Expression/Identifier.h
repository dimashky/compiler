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

	bool is_array;

	vector<Node*>dimensions;

public:

	Identifier(Node* preDot, Symbol* postDot, bool is_array = false);

	int print(int);

	string getType();
	
	Symbol* getPostDot() {
		return this->postDot;
	}


	void setArrayDimensions(queue<Node*>dimensions);
	
	bool typeChecking() {
		Symbol* prev = nullptr;

		if (this->preDot != nullptr) {
			this->preDot->typeChecking();
			prev = TypesTable::getType(this->preDot->nodeType->typeExpression()).second;
			if (prev->getColNo() == -15) {
				this->nodeType = new TypeError("Invalid Dot operator in line " + to_string(prev->getLineNo()));
				return false;
			}
		}
		
		vector<Symbol*>divs = postDot->divideName();

		for (int i = 0;i < divs.size();i++) {
			prev = symbolTable::findIdentifier(divs[i], (symbolTable*)this->symboltable, prev);
			if (prev->getColNo() == -15) {
				this->nodeType = new TypeError("Invalid Dot operator in line " + to_string(prev->getLineNo()));
				return false;
			}
			if (i != divs.size() - 1)
				prev = prev->getTypeRef();
		}
		
		cout << "valid identifier in " << prev->getLineNo() << endl;

		if (prev->isComplex()) {
			
			this->nodeType = TypesTable::findOrCreate(((Class*)prev->getTypeRef())->getFullPath(), prev->getTypeRef());
		}
		else {
			if (prev->getType() == "field") {
				this->nodeType = TypesTable::getType(((Field*)prev)->get_type_name()).first;
			}
			else if(prev->getType() == "variable") {
				this->nodeType = TypesTable::getType(((LocalVariable*)prev)->get_type_name()).first;
			}
		}
		return false; 
	}
	~Identifier();
};

