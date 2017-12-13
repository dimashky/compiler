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
	Symbol* newInterface = new Interface(interfaceName, line_no, col_no);
	symboltable->addInterface(newInterface, bases, modifiers);
	return;
}

void symbolParser::check_later_defination()
{
	while (!symbolTable::later_defination.empty())
	{
		if (symbolTable::later_defination.front().second.second->getType() == "class")
		{
			symbolTable* search = (symbolTable*)symbolTable::type_defination_tree->find(symbolTable::later_defination.front().second.first, symbolTable::later_defination.front().first).first;

			if (search != nullptr)
			{

				if (search->get_owner()->getType() == "class")
				{

					pair<string, symbolTable*> test = ((Class*)symbolTable::later_defination.front().second.second)->get_extended_class();

					if (test.second != nullptr || test.first == "")
						cout << "error : there is an error in line " << symbolTable::later_defination.front().second.second->getLineNo() << ", no more than one extended class or it should be the first one after Colon." << endl;

					else
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

							cout << "error : there is an error in line " << symbolTable::later_defination.front().second.second->getLineNo() << ", cannot derive from sealed type '" << parent_name << "'.\n";
						}

						else 
						{
							((Class*)symbolTable::later_defination.front().second.second)->set_extended_class(make_pair(search->get_owner()->getName(), search));
							symboltable->type_defination_tree->set_base_class(((Class*)search->get_owner())->getName(), (((Class*)search->get_owner()))->get_type_graph_position(), ((Class*)symbolTable::later_defination.front().second.second)->get_type_graph_position());
							symboltable->parents.push_back((((Class*)search->get_owner()))->get_type_graph_position());
						}
					}
				}

				else if (search->get_owner()->getType() == "interface")
					((Interface*)symbolTable::later_defination.front().second.second)->add_base(search->get_owner()->getName(), search);

				else if (search->get_owner()->getType() == "namespace")
					cout << "error : there is an error in line " << symbolTable::later_defination.front().second.second->getLineNo() << ", '" << search->get_owner()->getName() << "' is a namespace." << endl;

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
		}

		else if (symbolTable::later_defination.front().second.second->getType() == "interface")
		{
			symbolTable* search = (symbolTable*)symbolTable::type_defination_tree->find(symbolTable::later_defination.front().second.first, symbolTable::later_defination.front().first).first;

			if (search != nullptr)
			{

				if (search->get_owner()->getType() == "class")
				{
					cout << "error : there is an error in line " << symbolTable::later_defination.front().second.second->getLineNo() << ", '" << search->get_owner()->getName() << "' is class and interfaces cant extend classes." << endl;
				}

				else if (search->get_owner()->getType() == "interface")
					((Interface*)symbolTable::later_defination.front().second.second)->add_base(search->get_owner()->getName(), search);

				else if (search->get_owner()->getType() == "namespace")
					cout << "error : there is an error in line " << symbolTable::later_defination.front().second.second->getLineNo() << ", '" << search->get_owner()->getName() << "' is a namespace." << endl;
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
				cout << "error : there is an error in line " << symbolTable::later_defination.front().second.second->getLineNo() << ", implemented from non declared or inaccessible interface '" << parent_name << "'." << endl;
			}
		}


		symbolTable::later_defination.pop();
	}
}
vector<node*> cycle_path;
void check_cycle(node* curr, node* parent)
{
	if (curr->visited == 2)
		return;

	else if (curr->visited == 1)
	{		
		cout << "error : there is an error in line " << ((symbolTable*)curr->stPTR)->get_owner()->getLineNo() << ", these classes ";
		
		for (int i = 0;i < cycle_path.size() - 1;i++)
			cout << "'" << cycle_path[i]->name << "' , ";

		cout << "'" << cycle_path[cycle_path.size() - 1]->name << "' form inhertince cycle." << endl;

		return;
	}

	cycle_path.push_back(curr);

	curr->visited = 1;

	check_cycle(curr->base_class.second, curr);
	
	curr->visited = 2;
	
	cycle_path.pop_back();
	
	return;
}

void symbolParser::check()
{
	check_later_defination();

	for (int i = 0;i < symboltable->parents.size();i++)
		check_cycle(symboltable->parents[i], symboltable->parents[i]);

}

symbolTable* symbolParser::getSymbolTableRoot()
{
	return this->symboltable;
}