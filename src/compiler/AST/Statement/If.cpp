#include "If.h"

If::If(Expression *codnition , Node *parent) :Statement(parent)
{
	if (codnition == nullptr) {
		cout << "are you kidding me !!" << endl;
		system("pause");
	}
	this->codnition = codnition; 
	this->ifStatement = nullptr;
	this->elseStatement = nullptr;
	cout << "woooow if created here !!" << endl;
}

If::~If()
{
}
