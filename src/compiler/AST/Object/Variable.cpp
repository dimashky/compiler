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
		if (((Field*)symbol)->isComplex()) {
			this->nodeType = TypesTable::findOrCreate(((Class*)((Field*)symbol)->getTypeRef())->getFullPath(), ((Class*)((Field*)symbol))->getTypeRef());
		}
		else {
			this->nodeType = TypesTable::getType(((Field*)symbol)->get_type_name()).first;
		}
	}
	else {
		if (((LocalVariable*)symbol)->isComplex()) {

			this->nodeType = TypesTable::findOrCreate(((Class*)((LocalVariable*)symbol)->getTypeRef())->getFullPath(), ((Class*)((LocalVariable*)symbol))->getTypeRef());
		}
		else {
			this->nodeType = TypesTable::getType(((LocalVariable*)symbol)->get_type_name()).first;
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