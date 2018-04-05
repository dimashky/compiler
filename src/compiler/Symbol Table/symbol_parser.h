#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Class.h"
#include "symbolTable.h"
#include "Namespace.h"
#include"Field.h"
#include"LocalVariable.h"
#include "../AST/Node.h"
#include"Method.h"
#include "../AST/Statement/If.h"
#include "../AST/Statement/Block.h"
#include "../AST/Statement/While.h"
#include "../AST/Statement/DoWhile.h"
#include "../AST/Statement/Foreach.h"
#include "../AST/Statement/For.h"
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
	Symbol* addNamespace(string name, int line_no, int col_no);
	Symbol* addClass(queue<string>&modifiers, string className, queue<string> &bases, int line_no, int col_no);
	Symbol* addInterface(queue<string>modifiers, string interfaceName, queue<string> bases, int line_no, int col_no);
	vector<Symbol*> addField(queue<string>modifiers , string typeIdentifier, queue<string>identifier , int line_no, int col_no, bool known_type );
	vector<Symbol*> addFieldConst(queue<string>modifiers,string modifier_const,string typeIdentifier, queue<string>identifier, int line_no, int col_no, bool known_type);
	vector<Symbol*> addLocalVariable(string typeIdentifier, queue<string>identifier, queue<Node*>exps, bool known_type,bool constant, int line_no, int col_no);
	Symbol* addMethod(queue<string>modifiers  , string typeIdentifier, string identifier, queue<pair <pair<pair<string, string >, pair<int, int> >, bool > >types_ids_parameters, int line_no, int col_no, bool known_type,bool is_body);
	void add_scope();
	void add_using(string s,int line_no,int col_no);
	void send_using_to_st();
	void check();
	void check_function();
	void check_later_defination();
	void check_is_methods_not_override();
	void add_object();
	void clear_given_usings() {
		given_usings.clear();
	}

	Symbol* find(string s) {
		return symboltable->findIdentifier(s);
	}

	void addStatement(Node* st) {

		if (Node::current->getType() == "block") {
			((Block*)Node::current)->add(st);
		}
		else if (Node::current->getType() == "if") {
			((If*)Node::current)->setIfStatement(st);
		}
		else if (Node::current->getType() == "while") {
			((While*)Node::current)->setStatement(st);
		}
		else if (Node::current->getType() == "dowhile") {
			((DoWhile*)Node::current)->setStatement(st);
		}
		else if (Node::current->getType() == "for") {
			((For*)Node::current)->setStatement(st);
		}
		else if (Node::current->getType() == "foreach") {
			((Foreach*)Node::current)->setStatement(st);
		}

		if (st->getType() == "if" || st->getType() == "while" || st->getType() == "dowhile" || st->getType() == "for" || st->getType() == "foreach")
			Node::setCurrent(st);
	}

	void closeASTscope(bool ifElse = false) {
		if (ifElse) {
			Node* currentIf = Node::current;
			Node::Up();
			Block* elseBlock = new Block(Node::current);
			((If*)currentIf)->setElseStatement(elseBlock);
			Node::setCurrent(elseBlock);
			return;
		}

		Node::Up();
	}



	symbolTable* getSymbolTableRoot();
};