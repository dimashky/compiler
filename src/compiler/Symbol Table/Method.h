#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "symbolTable.h"
#include "LocalVariable.h"
#include "../AST/Object/Procedure.h"
using namespace::std;
class Method : public Symbol
{
private:
	Attribute* attribute;
	string return_type;
	Symbol* return_type_ref;
	bool isFinal,is_static,is_abstract,is_override , is_virtual, is_extern;
	bool is_public, is_private , is_protected , is_internal,is_new; 
	bool must_ovrride;
	bool exist_ovrride; 
	bool is_constructer;
	int default_counter;
	vector<LocalVariable*> types_ids_parameter;
public:
	Procedure* astPosition;
	string getFullPath() {
		string signature = this->getName();
		for each (auto param in this->types_ids_parameter)
		{
			signature += "_" + param->get_type_name();
		}
	}
	bool isNew() {
		return this->is_new;
	}
	/// TODO: change this size to correct size with TypeExpression class
	int stackFrameSize;
	/*
	Every stackframe has:
	1- Return Value = 4
	2- Parameters = 4 * #params
	3- Return Address = 4
	4- Control link	= 4
	5- local variables	= 4 * #vars
	*/
	int returnAddressOffset;
	//true for default case of compare "same number of params" ... false for compare to handle default params case
	static bool compare_status;

	Method(queue<string>&modifiers, string return_type, string name, int line_no, int col_no);
	void add_attributes(queue<string>&attributes,string name_parent, bool is_body);
	void add_parametars(queue<pair <pair<pair<string, string >, pair<int, int> >, bool > > parameters, queue<int>params_dimension, queue<Node*>var_init);
	void setParameters(vector <LocalVariable*> params);
	void set_return_type(Symbol* ref);
	void setPublic() {
		this->is_public = true;
		this->is_private = this->is_protected = this->is_internal = false;
	}

	bool compare(Symbol* comp);
	bool is_final();

	vector<LocalVariable*>& get_parameters();
	LocalVariable* getParameter(int index) {
		return types_ids_parameter[index];
	}
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
	bool get_is_constructer() {
		return is_constructer;
	}

	bool isComplex() {
		return return_type_ref != nullptr;
	}
	bool get_exist_ovrride() {
		return exist_ovrride; 
	}
	void set_exist_ovrride(bool exist_ovrride) {
		this->exist_ovrride = exist_ovrride; ;
	}

	void set_must_ovrride(bool must_override);
	string get_return_type();
	string getType();
	Symbol* getTypeRef() {
		return return_type_ref;
	}

	~Method();

};

