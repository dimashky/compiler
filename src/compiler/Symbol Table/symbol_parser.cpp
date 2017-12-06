#include<iostream>
#include "symbol_parser.h"
#include<queue>
using namespace std;

symbolParser::symbolParser()
{
	symboltable = new symbolTable(NULL,NULL);
}

void symbolParser::print(queue<string> &s1, char* s2)
{
	while (!s1.empty()) {
		cout << s1.front() << endl;
		s1.pop();
	}
	cout << s2 << endl;
}

void symbolParser::endScope()
{
	symboltable->closeScope();
}



void symbolParser::addNamespace(string name, int line_no, int col_no)
{
	//Symbol* newClass = new Namespace(name, line_no, col_no);
	
	return;
}

void symbolParser::addClass(queue<string>modifiers, string className, queue<string> bases, int line_no, int col_no)
{
	Symbol* newClass = new Class(className, modifiers, line_no, col_no);
	symboltable->addClass(newClass, bases);
	return;
}



void symbolParser::addInterface(queue<string>modifiers, string interfaceName, queue<string> bases, int line_no, int col_no)
{
	Symbol* newInterface = new Interface(interfaceName, modifiers, line_no, col_no);
	symboltable->addInterface(newInterface, bases);
	return;
}

void symbolParser::check()
{

}
