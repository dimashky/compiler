#pragma once
#include "all.h"
#include <string>
#include <map>

using namespace std;

class TypeClass : public TypeExpression {
public:
	TypeClass(string);
	string typeExpression();

	TypeExpression* opDot(std::string c);
private:
	std::string name;
	// Map: key is string (field or method) and 
	//		value is bool: for if this member static or not AND TypeExpression: of key
	map<string, pair<bool, TypeExpression*>> members;
};