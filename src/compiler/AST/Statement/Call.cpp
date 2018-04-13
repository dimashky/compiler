#include "Call.h"

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

	cout << "------------st function call--------------" << endl;
	call->print(nodeCnt);
	cout << "------------en function call--------------" << endl;

	return nodeCnt;
}


string Call::getType() {
	return "call";
}

Call::~Call()
{
}
