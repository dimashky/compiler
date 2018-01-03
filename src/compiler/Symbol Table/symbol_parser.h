#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Class.h"
#include "symbolTable.h"
#include "Namespace.h"
#include"Field.h"
#include"LocalVariable.h"
#include"Method.h"
using namespace std;

class symbolParser
{
private:
	symbolTable* symboltable;
	vector<pair<string,pair<int,int > > > given_usings;
public:
	symbolParser();
	void endScope();
	void print(queue<string>& s1, char* s2);
	void addNamespace(string name, int line_no, int col_no);
	void addClass(queue<string>&modifiers, string className, queue<string> &bases, int line_no, int col_no);
	void addInterface(queue<string>modifiers, string interfaceName, queue<string> bases, int line_no, int col_no);
	void addField(queue<string>modifiers , string typeIdentifier, queue<string>identifier , int line_no, int col_no, bool known_type );
	void addFieldConst(queue<string>modifiers,string modifier_const,string typeIdentifier, queue<string>identifier, int line_no, int col_no, bool known_type);
	void addLocalVariable(string typeIdentifier, queue<string>identifier, bool known_type,bool constant, int line_no, int col_no);
	void addMethod(queue<string>modifiers  , string typeIdentifier, string identifier, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >types_ids_parameters, int line_no, int col_no, bool known_type,bool is_body);
	void add_scope();
	void add_using(string s,int line_no,int col_no);
	void send_using_to_st();
	void check();
	void check_function();
	void check_later_defination();
	void add_object();
	void clear_given_usings() {
		given_usings.clear();
	}
	symbolTable* getSymbolTableRoot();
};