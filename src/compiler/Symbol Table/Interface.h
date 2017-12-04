#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Symbol.h"
#include"Attribute.h"

using namespace::std;

class Interface : public Symbol
{
private:
	vector<pair<string, Symbol*> > impInterfaces;
	Attribute* attribute;

	void add_attributes(queue<string>attributes);


public:
	Interface(string name, queue<string>attributes, int line_no, int col_no);
	~Interface();
	void add_base(string name, Symbol* ref);
	string getType();

};

