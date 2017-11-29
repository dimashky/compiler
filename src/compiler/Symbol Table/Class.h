#pragma once
#include<iostream>
#include<string>
#include<queue>
#include "Symbol.h"
#include "Attribute.h"
#include "Interface.h"
using namespace::std;

class Class : public Symbol
{
private:
	Class *basePtr;
	string baseName;
	Attribute* attribute;
public:
	Class(string name, string baseName, int line_no, int col_no);
	~Class();
	void add_attribute(string s);
	void add_attribute(queue<string>attributes);
	string getBaseName();
	string getType();

};

