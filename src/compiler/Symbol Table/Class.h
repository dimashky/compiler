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
	vector<pair<string,Symbol*> > baseClassImpInterfaces;

	Attribute* attribute;
	bool isFinal,is_public,is_private,is_protected,owner_is_namespace;


public:
	Class(string name, int line_no, int col_no);
	string getType();

	void add_base(string name, Symbol* ref);
	void add_attributes(queue<string>&attributes);

	void set_namespace_owner();
	bool is_final();

	~Class();

};

