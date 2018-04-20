#pragma once
#include "all.h"
#include <string>
#include <map>

using namespace std;

class TypesTable {
public:
	TypesTable();
	
	TypeExpression* getType(string);
	bool setType(string, TypeExpression*);
	
private:
	map<string, TypeExpression*> table;
};