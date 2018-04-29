#include "Call.h"
#include "../../Symbol Table/Class.h"

Call::Call(Node *call, Node *parent, bool new_expression, bool known_type, bool baseCall) :Statement(parent)
{
	this->call = call;
	this->new_expression = new_expression;
	this->known_type = known_type;
	this->base_call = baseCall;
	
}

void Call::setParams(vector<pair<Node*, int> > params) {
	this->params = params;
	return;
}

int Call::print(int nodeCnt) {
	int currentId = nodeCnt;
	fprintf(nodesFile, "{ id:%d, label:'CALL', shape: 'box', color:'#53ac37'},", nodeCnt);
	return nodeCnt;
}

string Call::getType() {
	return "call";
}

bool Call::typeChecking() {

	Symbol *prev = nullptr;

	Class* newClassRef = nullptr;

	Node* preNode = ((Identifier*)call)->getPreDot();

	vector<Symbol*>divs = ((Identifier*)call)->getPostDot()->divideName();

	if (preNode != nullptr) {
		preNode->typeChecking();
		
		auto res = TypesTable::getType(preNode->nodeType->typeExpression());
		prev = res.second;

		// preDot in this case return primitive type
		if (prev == nullptr || res.first->getTypeId() != TYPE_ERROR) {
			this->nodeType = new TypeError("invalid Dot Operator", divs[0]->getLineNo());
			return false;
		}
		else if (prev->getColNo() == -15) {
			this->nodeType = new TypeError("undeclared identifier " + prev->getName(), prev->getLineNo());
			return false;
		}
	}


	for (int i = 0;i < divs.size() - 1;i++) {
		prev = symbolTable::findIdentifier(divs[i], (symbolTable*)this->symboltable, prev);
		
		if (preNode == nullptr && i == 0) {
			// using unassigned variable
			if (prev->getType() == "localvariable" && !((LocalVariable*)prev)->isInitialized()) {
				new TypeError("Warning for using unassigned variable", divs[0]->getLineNo());
			}
		}
		
		prev = prev->getTypeRef();
	}

	if (divs.size() == 1 && divs[0]->getName() == "base" && !base_call) {
		this->nodeType = new TypeError("invalid use for '" + divs[0]->getName() + "' keyword", divs[0]->getLineNo());;
		return false;
	}

	if(new_expression) {

		symbolTable* parentRef = (symbolTable*)this->symboltable;

		while (parentRef != nullptr) {
			if (parentRef->get_owner() != nullptr && parentRef->get_owner()->getType() == "class")
				break;
			parentRef = parentRef->get_parent();
		}

		prev = symbolTable::findType(((Class*)parentRef->get_owner())->get_type_graph_position(), divs[0]->getName());
		


		if(prev->getType() == "interface") {
			this->nodeType = new TypeError("cannot initialize object from interface type named '" + prev->getName() + "'", divs[divs.size() - 1]->getLineNo());
			return false;
		}

		newClassRef = (Class*)prev;

		if (((Class*)prev)->get_is_abstract()) {
			this->nodeType = new TypeError("cannot initialize object from abstract class named '" + prev->getName() + "'", divs[divs.size() - 1]->getLineNo());
		}
		else if (((Class*)prev)->get_is_static()) {
			this->nodeType = new TypeError("cannot initialize object from static class named '" + prev->getName() + "'", divs[divs.size() - 1]->getLineNo());
		}
	}

	Method* method = new Method(queue<string>(), "", divs[divs.size() - 1]->getName(), divs[divs.size() - 1]->getLineNo(), -13);

	vector<LocalVariable*> curParams;

	for (int i = 0; i < this->params.size(); ++i) {
		params[i].first->typeChecking();
		curParams.push_back(new LocalVariable(params[i].first->nodeType->typeExpression(), "", 0, 1, 0, 0, 0));
	}

	method->setParameters(curParams);

  	method = (Method*)symbolTable::findIdentifier(method, (symbolTable*)this->symboltable, prev);

	if (method->getColNo() == -15) {
		//raise error
		this->nodeType = new TypeError("Call undeclared function in " + to_string(method->getLineNo()));
	}
	else {

		if (new_expression) {
			this->nodeType = TypesTable::findOrCreate(newClassRef->getFullPath(), newClassRef);
		}
		else if (method->isComplex()) {
			this->nodeType = TypesTable::findOrCreate(((Class*)method->getTypeRef())->getFullPath(), method->getTypeRef());
		}
		else {
			if (base_call) {
				this->nodeType = TypesTable::getType("VOID").first;
			}
			else {
				this->nodeType = TypesTable::getType(method->get_return_type()).first;
			}
		}
	}
	return true;
}

Call::~Call()
{
}
