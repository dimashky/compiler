#pragma once
#include "all.h"
#include <string>
#include <map>
#include "../Symbol Table/Symbol.h"

using namespace std;

class TypesTable {
public:

	static void init();
	static TypeExpression* findOrCreate(string, Symbol*);
	static TypeExpression* findOrCreateArray(TypeExpression*, int);
	static pair<TypeExpression*, Symbol*> getType(string);
	
private:
	TypesTable();
	static map<string, pair<TypeExpression*, Symbol*>> table;
};