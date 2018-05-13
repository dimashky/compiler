#pragma once
#include "../Node.h"
#include "Statement.h"
#include "../../Type Checker/all.h"
#include "../../Symbol Table/Method.h"
#include "../../Symbol Table/Class.h"
#include "../Object/Procedure.h"
enum JumpStatement {
	Return, Break, Continue, Throw
};

/*

	Notify :
		i set ToString method as method has a return statement in it in symbol parser init

*/
class Jump : public Statement
{
private:
	Node* statement, *parentMethod;
	JumpStatement jumpStatement;
	int lineNo;
public:

	Jump(Node* statement, JumpStatement jumpStatement, Node* parent,int lineNo);

	int print(int nodeCnt) {
		return nodeCnt;
	}

	string getType() {
		return "jump";
	}
	
	bool typeChecking() {
		
		/*
		*	TODO : we should handle throw exception here !!s
		*/

		if (this->jumpStatement == JumpStatement::Return) {

			Method *method = (Method*)((Procedure*)parentMethod)->getSymbol();

			if (this->statement != nullptr) {

				this->statement->typeChecking();

				//function return primitiveType
				
				if (method->getTypeRef() == nullptr) {
					TypeExpression* typeExpression = TypesTable::getType(method->get_return_type()).first;
					if (typeExpression->getTypeId() != this->statement->nodeType->getTypeId()) {
						this->nodeType = new TypeError("error in return statement no suitable type", this->lineNo);
						return false;
					}
				}
				else {
					TypeExpression* typeExpression = TypesTable::findOrCreate(((Class*)method->getTypeRef())->getFullPath(), method->getTypeRef());
					if (typeExpression->getTypeId() != this->statement->nodeType->getTypeId()) {
						this->nodeType = new TypeError("error in return statement no suitable type", this->lineNo);
						return false;
					}
				}
			}
			else {
				if (method->getTypeRef() != nullptr || method->get_return_type() != "VOID") {
					this->nodeType = new TypeError("error in return statement no suitable type", this->lineNo);
					return false;
				}
			}
		}
		return true;
	}

	void generateCode() {
		if (jumpStatement == JumpStatement::Return && statement) {
			statement->generateCode();
			AsmGenerator::pop("t0");
			AsmGenerator::sw("t0", "fp", 0);
		}
	};

	~Jump();
};

