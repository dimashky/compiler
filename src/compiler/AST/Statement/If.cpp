#include "If.h"

If::If(Expression *codnition , Node *parent) :Statement(parent)
{
	this->codnition = codnition; 
	this->ifStatement = nullptr;
	this->elseStatement = nullptr;
}

string If::getType() {
	return "if";
}

void If::setIfStatement(Node* statement) {
	this->ifStatement = statement;
};

void If::print(int level) {

	cout << "if" << endl;

	codnition->print(level + 1);

	if (ifStatement)
		ifStatement->print(level + 1);

	if (elseStatement)
		elseStatement->print(level + 1);
}

void If::setElseStatement(Node* statement) {
	this->elseStatement = statement;
};

If::~If()
{
}
