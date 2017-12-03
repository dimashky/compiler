#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "Interface.h"
using namespace::std;

class Class : public Symbol
{
private:
	Class *basePtr;
	vector<pair<string,Symbol*> > baseClassImpInterfaces;
	Attribute* attribute;

	void add_attributes(queue<string>attributes);


public:
	Class(string name, queue<string>attributes, int line_no, int col_no);
	~Class();
	void add_base(string name, Symbol* ref);
	string getType();

};

