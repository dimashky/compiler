#include "all.h"
#include <map>
#include "../Symbol Table/symbolTable.h"
TypesTable::TypesTable() {

}

map<string, pair<TypeExpression*, Symbol*>> TypesTable::table = map<string, pair<TypeExpression*, Symbol*>>();

TypeExpression* TypesTable::findOrCreate(string type, Symbol* symbol) {
	auto result = TypesTable::table.find(type);
	if (result != TypesTable::table.end()) {
		return result->second.first;
	}
	else {
		return (TypesTable::table[type] = make_pair(new TypeClass(type), symbol)).first;
	}
}

TypeExpression* TypesTable::findOrCreateArray(TypeExpression* elementType, int dimension) {
	string exp = elementType->typeExpression() + "[";
	for (int i = 0; i < dimension - 1; ++i) {
		exp += ",";
	}
	exp += "]";
	auto result = TypesTable::table.find(exp);
	if (result != TypesTable::table.end()) {
		return result->second.first;
	}
	else {
		return (TypesTable::table[exp] = make_pair(new TypeArray(elementType, dimension), getType(elementType->typeExpression()).second)).first;
	}
}

void TypesTable::init() {
	TypesTable::table["INT"] = make_pair(TypeInteger::getInstance(), nullptr);
	TypesTable::table["STRING"] = make_pair(TypeString::getInstance(), nullptr);
	TypesTable::table["CHAR"] = make_pair(TypeString::getInstance(), nullptr);
	TypesTable::table["FLOAT"] = make_pair(TypeFloat::getInstance(), nullptr);
	TypesTable::table["DOUBLE"] = make_pair(TypeDouble::getInstance(), nullptr);
	TypesTable::table["BOOL"] = make_pair(TypeBoolean::getInstance(), nullptr);
	TypesTable::table["VOID"] = make_pair(TypeVoid::getInstance(), nullptr);
	if (symbolTable::object_ref) {
		TypesTable::table["object"] = make_pair(new TypeClass("object"), symbolTable::object_ref->get_owner());
	}
}

pair<TypeExpression*,Symbol*> TypesTable::getType(string type) {
	auto result = TypesTable::table.find(type);
	if (result != TypesTable::table.end()) {
		return result->second;
	}
	
	return make_pair(new TypeError(type + " is not found in TypesTable"), nullptr);
}

