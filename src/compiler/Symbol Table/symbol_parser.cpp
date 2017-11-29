#include<iostream>
#include "symbol_parser.h"
#include<queue>
using namespace std;

symbolParser::symbolParser()
{
	symboltable = new symbolTable(NULL);
}

void symbolParser::print(queue<string> &s1, char* s2)
{
	while (!s1.empty()) {
		cout << s1.front() << endl;
		s1.pop();
	}
	cout << s2 << endl;
}

void symbolParser::addClass(queue<string>modifiers, string className, string baseClass, int line_no, int col_no)
{
	Symbol* newClass = new Class(className, baseClass, line_no, col_no);
	((Class*)newClass)->add_attribute(modifiers);
	symboltable->addSymbol(newClass);
	cout << ((Class*)newClass)->getBaseName() << endl;


	return;
}
