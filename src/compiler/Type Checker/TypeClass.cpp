#include "all.h"
#include <string>

using namespace std;

TypeClass::TypeClass(string c) {
	this->name = c;
	this->typeId = TYPE_CLASS;
}

string TypeClass::typeExpression() {
	return this->name;
}

TypeExpression* TypeClass::opDot(std::string c) {
	auto res = this->members.find(c);
	return res->second.second;
}
