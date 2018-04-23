#include "all.h"

TypeVoid::TypeVoid() {
	this->typeId = TYPE_VOID;
	this->bytes = 0;
}

TypeVoid* TypeVoid::instance = nullptr;

TypeVoid* TypeVoid::getInstance() {
	if (instance != nullptr) {
		instance = new TypeVoid();
	}
	return instance;
}
