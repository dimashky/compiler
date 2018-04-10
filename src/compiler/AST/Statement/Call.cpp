#include "Call.h"

Call::Call(Symbol *symbol, Node *parent, bool new_expression, bool known_type) :Statement(parent)
{
	this->symbol = symbol;
	this->new_expression = new_expression;
	this->known_type = known_type;
}



void Call::setParams(vector<pair<Node*, int> > params) {
	this->params = params;
	return;
}

int Call::print(int nodeCnt) {

	int currentId = nodeCnt;

	cout << "--------------------------" << endl;

	cout << symbol->getName() << endl;

	cout << params.size() << endl;

	cout << new_expression << " " << known_type << endl;

	cout << "--------------------------" << endl;

	return nodeCnt;
}

Symbol* Call::getSymbol() {
	return symbol;
}

string Call::getType() {
	return "call";
}

Call::~Call()
{
}
