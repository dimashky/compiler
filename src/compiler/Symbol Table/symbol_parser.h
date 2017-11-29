#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Class.h"
#include "symbolTable.h"

using namespace std;

class symbolParser
{
private:
	symbolTable* symboltable;
public :
	symbolParser();
	
	void print(queue<string>& s1, char* s2);
	void addClass(queue<string>modifiers,string className,string baseClass,int line_no,int col_no);
};