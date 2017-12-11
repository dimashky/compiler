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
	Symbol* newNamespace = new Namespace(name, line_no, col_no);
	symboltable->addNamespace(newNamespace);
	return;
}

void symbolParser::addClass(queue<string>&modifiers, string className, queue<string> &bases, int line_no, int col_no)
{
	Symbol* newClass = new Class(className, line_no, col_no);
	symboltable->addClass(newClass, bases, modifiers);
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
	while (!symbolTable::later_defination.empty())
	{
		symbolTable* search = (symbolTable*)symbolTable::type_defination_tree->find(symbolTable::later_defination.front().second.first, symbolTable::later_defination.front().first).first;
		
		if (search != nullptr)
		{

			if (((Class*)search->get_owner())->is_final())
			{
				string parent_name;
				while (!symbolTable::later_defination.front().first.empty())
				{
					parent_name += symbolTable::later_defination.front().first.front();
					symbolTable::later_defination.front().first.pop();
					if (!symbolTable::later_defination.front().first.empty())
						parent_name += '.';
				}

				cout << "error : there is an error in line " << search->get_owner()->getLineNo() << ", cannot derive from sealed type '" << parent_name << "'.\n";
			}

			else ((Class*)symbolTable::later_defination.front().second.second)->add_base(search->get_owner()->getName(), search);
		}
		else 
		{
			string parent_name;
			while (!symbolTable::later_defination.front().first.empty())
			{
				parent_name += symbolTable::later_defination.front().first.front();
				symbolTable::later_defination.front().first.pop();
				if (!symbolTable::later_defination.front().first.empty())
					parent_name += '.';
			}
			cout << "error : there is an error in line " << symbolTable::later_defination.front().second.second->getLineNo() << ", inhertince from non declared or inaccessible type '" << parent_name << "'." << endl;
		}
		symbolTable::later_defination.pop();
	}
}
