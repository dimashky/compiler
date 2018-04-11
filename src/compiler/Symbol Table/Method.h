#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "symbolTable.h"
#include "LocalVariable.h"
using namespace::std;
class Method : public Symbol
{
private:
	Attribute* attribute;
	string return_type;
	Symbol* return_type_ref;
	bool isFinal,is_static,is_abstract,is_override , is_virtual, is_extern;
	bool is_public, is_private , is_protected , is_internal; 
	bool must_ovrride; 
	vector<LocalVariable*> types_ids_parameter;
public:
	Method(queue<string>&modifiers, string return_type, string name, int line_no, int col_no);
	void add_attributes(queue<string>&attributes,string name_parent, bool is_body);
	void add_parametars(queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > parameters, queue<int>params_dimension);

	void set_return_type(Symbol* ref);

	bool compare(Symbol* comp);
	bool is_final();

	vector<LocalVariable*>& get_parameters();
	int get_parametars_count();
	bool get_is_static();
	bool get_is_abstract();
	bool get_is_override();
	bool get_is_virtual();
	bool get_is_public();
	bool get_is_private();
	bool get_is_protected();
	bool get_is_internal();
	bool get_is_must_ovrride();

	void set_must_ovrride(bool must_override);
	string get_return_type();
	string getType();

	~Method();

};

