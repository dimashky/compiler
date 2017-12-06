#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Class.h"
#include "symbolTable.h"
#include "Namespace.h"

using namespace std;

class symbolParser
{
private:
	symbolTable* symboltable;
public :
	symbolParser();
	void endScope();
	void print(queue<string>& s1, char* s2);
	void addNamespace(string name, int line_no, int col_no);
	void addClass(queue<string>modifiers, string className, queue<string> bases, int line_no, int col_no);
	void addInterface(queue<string>modifiers, string interfaceName, queue<string> bases, int line_no, int col_no);
	void check();
};