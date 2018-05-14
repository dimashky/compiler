#include "Identifier.h"
#include "../../Symbol Table/symbolTable.h"
#include "../../Symbol Table/Method.h"
#include "AutoConst.h"
#include "../Object/Procedure.h"

bool Identifier::leftAssignment = false;

bool Identifier::isAssigned = true;

bool Identifier::isStaticMethod = true;

Identifier::Identifier(Node* preDot, Symbol* postDot, bool isArray) : Expression(Node::current)
{
	this->preDot = preDot;
	this->postDot = postDot;
	this->isArray = isArray;
	this->isConst = false;
	this->isReadonly = false;
}

string Identifier::getType()
{
	return "identifier";
}

Symbol* Identifier::getPostDot() {
	return this->postDot;
}

int Identifier::print(int nodeCnt)
{

	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#b1e2de'},", nodeCnt, this->postDot->getName().c_str());

	return nodeCnt;
}

Node* Identifier::getPreDot() {
	return preDot;
}

bool Identifier::getIsConst() {
	return this->isConst;
}

bool Identifier::getIsReadonly() {
	return this->isReadonly;
}

void Identifier::setArrayDimensions(queue<Node*>dimensions) {
	
	this->isArray = true;

	while (!dimensions.empty())
		this->dimensions.push_back(dimensions.front()), dimensions.pop();
	return;
}

bool Identifier::typeChecking() {

	Symbol* prev = nullptr;

	if (this->preDot != nullptr) {
		this->preDot->typeChecking();
		prev = TypesTable::getType(this->preDot->nodeType->typeExpression()).second;
		
		// preDot in this case return primitive type
		if (prev == nullptr) {
			this->nodeType = new TypeError("invalid Dot Operator");
			return true;
		}
		else if (prev->getColNo() == -15) {
			this->nodeType = new TypeError("undeclared identifier " + prev->getName(), prev->getLineNo());
			return true;
		}
	}


	//to check if last div is a type or normal variable
	bool type = false;

	vector<Symbol*>divs = postDot->divideName();

	for (int i = 0;i < divs.size();i++) {
		prev = symbolTable::findIdentifier(divs[i], (symbolTable*)this->symboltable, prev);

		//we didnt find identifier
		if (prev->getColNo() == -15) {
			
			//try to find it as static field in class !!
			if ((i == 0 || type) && preDot == nullptr && divs.size() > 1) {
				
				type = true;
				
				symbolTable* parentRef = (symbolTable*)this->symboltable;

				//up to parent class
				while (parentRef != nullptr) {
					if (parentRef->get_owner() != nullptr && parentRef->get_owner()->getType() == "class")
						break;
					parentRef = parentRef->get_parent();
				}

				prev = symbolTable::findType(((Class*)parentRef->get_owner())->get_type_graph_position(), divs[0]->getName());
				
				if (prev != nullptr) {
					continue;
				}

			}
			
			this->nodeType = new TypeError("undeclared identifier " + divs[i]->getName(), divs[i]->getLineNo());
			return true;
		}

		if (divs[i]->getName() == "this" || divs[i]->getName() == "base") {
			this->nodeType = TypesTable::findOrCreate(((Class*)prev)->getFullPath(), prev);
			return true;
		}

		//this if for check if this Identifier is const or not
		if (i == divs.size() - 1) {
			if (prev->getType() == "field") {
				if (((Field*)prev)->getIsConst())
					this->isConst = true;
				if (((Field*)prev)->getIsReadonly())
					this->isReadonly = true;

			}
			else if (prev->getType() == "localvariable") {
				if (((LocalVariable*)prev)->getIsConst())
					this->isConst = true;
			}
		}

		//this for check un assigned variable
		if(preDot == nullptr && i == 0) {
			// using unassigned variable
			if (prev->getType() == "localvariable" && !((LocalVariable*)prev)->isInitialized()) {
				if (!Identifier::leftAssignment) {
					new TypeError("Warning for using unassigned variable", divs[0]->getLineNo());
				}
				else {
					if (divs.size() > 1) {
						new TypeError("Warning for using Dot operator in unassigned variable", divs[i]->getLineNo());
					}
					Identifier::isAssigned = false;
				}
			}

			if (Identifier::isStaticMethod) {
				if (divs[i]->getName() == "this" || divs[i]->getName() == "base") {
					this->nodeType = new TypeError("use '" + divs[i]->getName() + "' keyword in static method is not allowed", divs[i]->getLineNo());
					return true;
				}
				if (i == 0 && preDot == nullptr && prev->getType() == "field" && !((Field*)prev)->getIsStatic()) {
					this->nodeType = new TypeError("cannot use non static fields on static method", divs[i]->getLineNo());
					return true;
				}
			}
		}

		//throw error when access to static field from this keyword
		if (prev->getType() == "field") {
			if (((Field*)prev)->getIsStatic() && (preDot != nullptr || i != 0 && !type)) {
				this->nodeType = new TypeError("cannot access to static field from 'this' keyword or objects", divs[i]->getLineNo());
				return true;
			}
		}

		if (i != divs.size() - 1) {
			//throw error if we want to use dot op on primitive var
			if (prev->getTypeRef() == nullptr) {
				if (prev->getType() == "field") {
					if (TypesTable::getType(((Field*)prev)->get_type_name()).second == nullptr) {
						this->nodeType = new TypeError("Dot operator isn't allowed on primitive type", divs[i]->getLineNo());
						return true;
					}
				}
				else if (prev->getType() == "localvariable") {
					if (TypesTable::getType(((LocalVariable*)prev)->get_type_name()).second == nullptr) {
						this->nodeType = new TypeError("Dot operator isn't allowed on primitive type", divs[i]->getLineNo());
						return true;
					}
				}
			}
			prev = prev->getTypeRef();
		}
		//if code reach to here prev don't hold type on it
		type = false;
	}


	if (prev->isComplex()) {
		this->nodeType = TypesTable::findOrCreate(((Class*)prev->getTypeRef())->getFullPath(), prev->getTypeRef());
	}
	else {
		if (prev->getType() == "field") {
			this->nodeType = TypesTable::getType(((Field*)prev)->get_type_name()).first;
		}
		else if (prev->getType() == "localvariable") {
			this->nodeType = TypesTable::getType(((LocalVariable*)prev)->get_type_name()).first;
		}
	}

	if (prev->getType() == "field") {
		if (((Field*)prev)->getDimension() != this->dimensions.size()) {
			if (((Field*)prev)->getDimension() == 0) {
				this->nodeType = new TypeError("cannot apply indexing to un array type", prev->getLineNo());
				return true;
			}
			if (this->dimensions.size() != 0) {
				this->nodeType = new TypeError("wrong number of indices, expected " + ((Field*)prev)->getDimension(), prev->getLineNo());
				return true;
			}
			this->nodeType = new TypeArray(this->nodeType, this->dimensions.size());
		}
	}
	else if (prev->getType() == "localvariable") {
		if (((LocalVariable*)prev)->getDimension() != this->dimensions.size()) {
			if (((LocalVariable*)prev)->getDimension() == 0) {
				this->nodeType = new TypeError("cannot apply indexing to un array type", prev->getLineNo());
				return true;
			}
			if (this->dimensions.size() != 0) {
				this->nodeType = new TypeError("wrong number of indices, expected " + to_string(((LocalVariable*)prev)->getDimension()), prev->getLineNo());
				return true;
			}
			this->nodeType = new TypeArray(this->nodeType, ((LocalVariable*)prev)->getDimension());
		}
	}
	return true;
}

Identifier::~Identifier()
{
}
