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

void Call::updateParamsSymboltableRef(void* newSymboltable) {
	for each (auto param in this->params)
	{
		param.first->setSymbolTable(newSymboltable);
	}
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

	Node* preDot = ((Identifier*)call)->getPreDot();

	vector<Symbol*>divs = ((Identifier*)call)->getPostDot()->divideName();

	if (preDot != nullptr) {
		preDot->typeChecking();
		prev = TypesTable::getType(preDot->nodeType->typeExpression()).second;

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

	for (int i = 0;i < divs.size() - 1;i++) {
		
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

		//this for check un assigned variable
		if (preDot == nullptr && i == 0) {
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
					this->nodeType = new TypeError("cannot use non static fields or methods on static method", divs[i]->getLineNo());
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
		//if code reach to here prev don't hold type on it
		type = false;
	}


	if (new_expression) {

		symbolTable* parentRef = (symbolTable*)this->symboltable;

		while (parentRef != nullptr) {
			if (parentRef->get_owner() != nullptr && parentRef->get_owner()->getType() == "class")
				break;
			parentRef = parentRef->get_parent();
		}

		prev = symbolTable::findType(((Class*)parentRef->get_owner())->get_type_graph_position(), divs[0]->getName());

		if (prev == nullptr) {
			this->nodeType = new TypeError("cannot initialize object from undeclared type '" + divs[0]->getName() + "'", divs[divs.size() - 1]->getLineNo());
			return true;
		}

		if (prev->getType() == "interface") {
			this->nodeType = new TypeError("cannot initialize object from interface type named '" + prev->getName() + "'", divs[divs.size() - 1]->getLineNo());
			return true;
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
		Symbol* typeRefParam = TypesTable::getType(params[i].first->nodeType->typeExpression()).second;
		LocalVariable* localVariable = new LocalVariable(typeRefParam->getName(), "", 0, 1, 0, 0, 0);
		localVariable->set_type(typeRefParam);
		curParams.push_back(localVariable);
	}

	method->setParameters(curParams);

	method = (Method*)symbolTable::findIdentifier(method, (symbolTable*)this->symboltable, prev);

	if (method->getColNo() == -15) {
		//raise error
		this->nodeType = new TypeError("Call undeclared function in " + to_string(method->getLineNo()));
	}
	else {

		if (!new_expression) {
			if (Identifier::isStaticMethod && divs.size() == 1) {
				if (!method->get_is_static()) {
					this->nodeType = new TypeError("cannot use non static methods on static method", divs[0]->getLineNo());
					return false;
				}
			}
		}

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
