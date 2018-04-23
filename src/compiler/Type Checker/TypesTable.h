#pragma once
#include "all.h"
#include <string>
#include <map>

using namespace std;

class TypesTable {
public:

	static void init();
	static TypeExpression* findOrCreate(string);
	static TypeExpression* getType(string);
	static bool setType(string, TypeExpression*);
	
private:
	TypesTable();
	static map<string, TypeExpression*> table;
};