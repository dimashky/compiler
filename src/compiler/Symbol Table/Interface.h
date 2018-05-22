#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Symbol.h"
#include"Attribute.h"
#include "symbolTable.h"

using namespace::std;

class Interface : public Symbol
{
private:
	vector<pair<string, symbolTable*> > impInterfaces;
	Attribute* attribute;

	bool is_public, is_private, is_protected, owner_is_namespace;
	node* type_graph_position;



public:
	Interface(string name, int line_no, int col_no);
	~Interface();

	void add_base(string name, symbolTable* ref);
	void add_attributes(queue<string>&attributes);
	
	void set_namespace_owner();
	void set_type_graph_position(node* pos);

	string getType();
	bool get_is_public();	
	node* get_type_graph_position();
	string getFullPath();
	void delete_implemented_interface(symbolTable* ref);//please delete implemented interface
};

