#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "Interface.h"
#include "symbolTable.h"
using namespace::std;

class Class : public Symbol
{
private:
	vector<pair<string, symbolTable*> > baseClassImpInterfaces;

	Attribute* attribute;
	bool isFinal,is_public,is_private,is_protected,owner_is_namespace;
	node* type_graph_position;


public:
	Class(string name, int line_no, int col_no);
	string getType();

	void add_base(string name, symbolTable* ref);
	void add_attributes(queue<string>&attributes);

	void set_namespace_owner();

	bool is_final();

	bool get_is_public() 
	{
		return is_public;
	}

	void set_type_graph_position(node* pos)
	{
		type_graph_position = pos;
		return;
	}

	node* get_type_graph_position()
	{
		return type_graph_position;
	}

	pair<string, symbolTable*> get_extended_class()
	{
		return baseClassImpInterfaces[0];
	}

	void set_extended_class(pair<string, symbolTable*>val)
	{
		baseClassImpInterfaces[0] = val;
		return;
	}

	~Class();

};

