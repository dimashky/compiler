#include "Call.h"
#include "../../Symbol Table/Class.h"

Call::Call(Node *call, Node *parent, bool new_expression, bool known_type) :Statement(parent)
{
	this->call = call;
	this->new_expression = new_expression;
	this->known_type = known_type;
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

	if (((Identifier*)call)->getPreDot() != nullptr) {
		Node* preNode = ((Identifier*)call)->getPreDot();
		preNode->typeChecking();

		if (preNode->nodeType->getTypeId() != TYPE_ERROR) {
			prev = TypesTable::getType(((Identifier*)call)->getPreDot()->nodeType->typeExpression()).second;
		}
		else {
			this->nodeType = preNode->nodeType;
			return false;
		}
	}

	vector<Symbol*>divs = ((Identifier*)call)->getPostDot()->divideName();

	for (int i = 0;i < divs.size() - 1;i++) {
		prev = symbolTable::findIdentifier(divs[i], (symbolTable*)this->symboltable, prev);
		prev = prev->getTypeRef();
	}

	if(new_expression) {

		symbolTable* parentRef = (symbolTable*)this->symboltable;

		while (parentRef != nullptr) {
			if (parentRef->get_owner() != nullptr && parentRef->get_owner()->getType() == "class")
				break;
			parentRef = parentRef->get_parent();
		}

		prev = symbolTable::findType(((Class*)parentRef->get_owner())->get_type_graph_position(), divs[0]->getName());
		newClassRef = (Class*)prev;
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

		cout << "call function in " << to_string(method->getLineNo()) << endl;

		if (new_expression) {
			this->nodeType = TypesTable::findOrCreate(newClassRef->getFullPath(), newClassRef);
		}
		else if (method->isComplex()) {
			this->nodeType = TypesTable::findOrCreate(((Class*)method->getTypeRef())->getFullPath(), method->getTypeRef());
		}
		else {
			
			this->nodeType = TypesTable::getType(method->get_return_type()).first;
			cout << nodeType->getTypeId() << endl;
		}
	}
	return true;
}

Call::~Call()
{
}
