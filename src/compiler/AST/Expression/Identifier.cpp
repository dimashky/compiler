#include "Identifier.h"
#include "../../Symbol Table/symbolTable.h"
#include "../../Symbol Table/Method.h"
#include "AutoConst.h"
#include "../Object/Procedure.h"

bool Identifier::leftAssignment = false;

bool Identifier::isAssigned = true;

Identifier::Identifier(Node* preDot, Symbol* postDot, bool is_array) : Expression(Node::current)
{
	this->preDot = preDot;
	this->postDot = postDot;
	this->is_array = is_array;
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
	
	this->is_array = true;

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
		if (prev->getColNo() == -15) { 
			this->nodeType = new TypeError("undeclared identifier " + prev->getName(), prev->getLineNo());
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
		if (i != divs.size() - 1)
			prev = prev->getTypeRef();
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
