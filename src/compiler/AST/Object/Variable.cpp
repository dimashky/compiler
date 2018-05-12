#include "Variable.h"
#include "../../Type Checker/all.h"
#include "../../Symbol Table/Field.h"
#include "../../Symbol Table/LocalVariable.h"
#include "../../Symbol Table/Class.h"

Variable::Variable(Symbol* symbol, Node *equal, Node* parent) :Object(symbol, parent)
{
	this->equal = equal;
}

int Variable::print(int nodeCnt)
{
	int currentId = nodeCnt;
	
	if (this->symbol != nullptr) {
		if (this->equal != nullptr) {
			fprintf(nodesFile, "{ id:%d, label:'%s =', shape: 'box', color:'#76fc67'},", nodeCnt, this->symbol->getName().c_str());
			fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
			nodeCnt = this->equal->print(nodeCnt + 1);
		}
		else {
			fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#76fc67'},", nodeCnt, this->symbol->getName().c_str());
		}
	}

	return nodeCnt;
}

string Variable::getType()
{
	return "variable";
}

bool Variable::typeChecking() {
	
	bool field = symbol->getType() == "field";

	if (field) {
		TypeExpression* elementType;
		if (((Field*)symbol)->isComplex()) {
			elementType = TypesTable::findOrCreate(((Class*)((Field*)symbol)->getTypeRef())->getFullPath(), ((Class*)((Field*)symbol))->getTypeRef());
		}
		else {
			elementType = TypesTable::getType(((Field*)symbol)->get_type_name()).first;
		}

		if (((Field*)symbol)->getDimension() > 0) {
			this->nodeType = TypesTable::findOrCreateArray(elementType, ((Field*)symbol)->getDimension());
		}
		else {
			this->nodeType = elementType;
		}

		if (((Field*)symbol)->getIsConst() && !this->equal) {
			new TypeError("a const field requires a value to be provided", symbol->getLineNo());
		}

		
	}
	else {
		if (((LocalVariable*)symbol)->isComplex()) {

			this->nodeType = TypesTable::findOrCreate(((Class*)((LocalVariable*)symbol)->getTypeRef())->getFullPath(), ((Class*)((LocalVariable*)symbol))->getTypeRef());
		}
		else {
			this->nodeType = TypesTable::getType(((LocalVariable*)symbol)->get_type_name()).first;
		}

		if (((LocalVariable*)symbol)->getIsConst() && !this->equal) {
			new TypeError("a const field requires a value to be provided", symbol->getLineNo());
		}
	}

	if (equal) {
		
		equal->typeChecking();
		
		this->nodeType = this->nodeType->operation(Operator::Equal, equal->nodeType);

		if (this->nodeType->getTypeId() == TYPE_ERROR) {
			return false;
		}
		if (field) {
			((Field*)symbol)->setInitializedStatus();
		}
		else {
			((LocalVariable*)symbol)->setInitializedStatus();
		}
		
	}
	return true;
}

Variable::~Variable()
{

}