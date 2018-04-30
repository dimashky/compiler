#include "Identifier.h"
#include "../../Symbol Table/symbolTable.h"
#include "../../Symbol Table/Method.h"
#include "AutoConst.h"
#include "../Object/Procedure.h"

bool Identifier::leftAssignment = false;

bool Identifier::isAssigned = true;

Identifier::Identifier(Node* preDot, Symbol* postDot, bool isArray) : Expression(Node::current)
{
	this->preDot = preDot;
	this->postDot = postDot;
	this->isArray = isArray;
	this->isConst = false;
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
			return false;
		}
		else if (prev->getColNo() == -15) {
			this->nodeType = new TypeError("undeclared identifier " + prev->getName(), prev->getLineNo());
			return false;
		}
	}



	vector<Symbol*>divs = postDot->divideName();

	for (int i = 0;i < divs.size();i++) {
		prev = symbolTable::findIdentifier(divs[i], (symbolTable*)this->symboltable, prev);
		
		if (i == divs.size() - 1) {
			if (prev->getType() == "field") {
				if (((Field*)prev)->getIsConst())
					this->isConst = true;
			}
			else if(prev->getType() == "localvariable") {
				if (((LocalVariable*)prev)->getIsConst())
					this->isConst = true;
			}
		}

		if (prev->getColNo() == -15) {
			//try to find it as static field in class !!
			if (i == 0 && preDot == nullptr && divs.size() > 1) {
				symbolTable* parentRef = (symbolTable*)this->symboltable;

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
			return false;
		}
		
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
			if (divs[i]->getName() == "this" || divs[i]->getName() == "base") {
				Node* currentNode = parent;

				while (currentNode->getType() != "procedure")
					currentNode = currentNode->getParent();
				if (((Procedure*)currentNode)->getSymbol()->getType() == "method") {
					if (((Method*)((Procedure*)currentNode)->getSymbol())->get_is_static()) {
						this->nodeType = new TypeError("use '" + divs[i]->getName() + "' keyword in static method is not allowed", divs[i]->getLineNo());
						return false;
					}
				}
			}
		}

		if (divs[i]->getName() == "this" || divs[i]->getName() == "base") {
			this->nodeType = TypesTable::findOrCreate(((Class*)prev)->getFullPath(), prev);
			return true;
		}

		if (i != divs.size() - 1) {

			if (prev->getTypeRef() == nullptr) {
				if (prev->getType() == "field") {
					if (TypesTable::getType(((Field*)prev)->get_type_name()).second == nullptr) {
						this->nodeType = new TypeError("Dot operator isn't allowed on primitive type", divs[i]->getLineNo());
						return false;
					}
				}
				else if (prev->getType() == "localvariable") {
					if (TypesTable::getType(((LocalVariable*)prev)->get_type_name()).second == nullptr) {
						this->nodeType = new TypeError("Dot operator isn't allowed on primitive type", divs[i]->getLineNo());
						return false;
					}
				}
			}
			prev = prev->getTypeRef();
		}
	}

	cout << "valid identifier in " << prev->getName() << " " << prev->getLineNo() << endl;

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
	return true;
}

Identifier::~Identifier()
{
}
