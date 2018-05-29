#include "Call.h"
#include "../../Symbol Table/Class.h"

Call::Call(Node *call, Node *parent, bool new_expression, bool known_type, bool baseCall) :Statement(parent)
{
	this->call = call;
	this->new_expression = new_expression;
	this->known_type = known_type;
	this->base_call = baseCall;
	this->calledMethod = nullptr;
}

void Call::setParams(vector<pair<Node*, int> > params) {
	this->params = params;
	return;
}

void Call::updateParamsSymboltableRef(void* newSymboltable) {
	for each (auto param in this->params)
	{
		param.first->setSymbolTable(newSymboltable);
	}
}

int Call::print(int nodeCnt) {
	int currentId = nodeCnt;
	fprintf(nodesFile, "{ id:%d, label:'CALL', shape: 'box', color:'#53ac37'},", nodeCnt);
	return nodeCnt;
}

string Call::getType() {
	return "call";
}

bool Call::typeChecking() {

	Symbol *prev = nullptr;
	Class* newClassRef = nullptr;
	Node* preDot = ((Identifier*)call)->getPreDot();

	Symbol* postDot = ((Identifier*)call)->getPostDot();

	int line_no = ((Identifier*)call)->getPostDot()->getLineNo();

	if (preDot != nullptr) {
		preDot->typeChecking();
		pair<TypeExpression*, Symbol*>res = TypesTable::getType(preDot->nodeType->typeExpression());
		if (res.first->getTypeId() == TYPE_ERROR) {
			this->nodeType = res.first;
			return true;
		}
		if (res.second == nullptr) {
			this->nodeType = new TypeError("invalid Dot Operator on primitive type", line_no);
			return true;
		}
		prev = res.second;
	}

	if (new_expression) {

		//up to parent class st
		symbolTable* parentRef = (symbolTable*)this->symboltable;
		while (parentRef != nullptr) {
			if (parentRef->get_owner() != nullptr && parentRef->get_owner()->getType() == "class")
				break;
			parentRef = parentRef->get_parent();
		}


		prev = symbolTable::findType(((Class*)parentRef->get_owner())->get_type_graph_position(), postDot->getName());

		if (prev == nullptr) {
			this->nodeType = new TypeError("cannot initialize object from undeclared type '" + postDot->getName() + "'", line_no);
			return true;
		}

		if (prev->getType() == "interface") {
			this->nodeType = new TypeError("cannot initialize object from interface type named '" + prev->getName() + "'", line_no);
			return true;
		}

		newClassRef = (Class*)prev;

		if (((Class*)prev)->get_is_abstract()) {
			this->nodeType = new TypeError("cannot initialize object from abstract class named '" + prev->getName() + "'", line_no);
		}
		else if (((Class*)prev)->get_is_static()) {
			this->nodeType = new TypeError("cannot initialize object from static class named '" + prev->getName() + "'", line_no);
		}
	}

	Method* method = new Method(queue<string>(), "", postDot->getName(), line_no, -13);

	vector<LocalVariable*> curParams;

	for (int i = 0; i < this->params.size(); ++i) {
		params[i].first->typeChecking();
		pair<TypeExpression*, Symbol*>parRes = TypesTable::getType(params[i].first->nodeType->typeExpression());
		int dimension = 0;
		Symbol* typeRefParam = parRes.second;
		string typeName;
		
		if (parRes.first->getTypeId() == TYPE_ARRAY) {
			dimension = ((TypeArray*)parRes.first)->getDimension();
		}
		if (typeRefParam != nullptr) {
			typeName = typeRefParam->getName();
		}
		else {
			typeName = params[i].first->nodeType->typeExpression();
		}

		LocalVariable* localVariable = new LocalVariable(typeName, "", dimension, 1, 0, 0, 0);
		localVariable->set_type(typeRefParam);
		curParams.push_back(localVariable);
	}

	method->setParameters(curParams);

	method = (Method*)symbolTable::findIdentifier(method, (symbolTable*)this->symboltable, prev);

	if (method->getColNo() == -15) {
		method = (Method*)symbolTable::findOverrideFunction(method, (symbolTable*)this->symboltable, 0, prev);
	}

	if (method->getColNo() == -15) {
		//raise error
		this->nodeType = new TypeError("Call undeclared function " + method->getName(), method->getLineNo());
	}
	else {
		this->calledMethod = method;

		if (!new_expression) {
			if (Identifier::isStaticMethod && preDot == nullptr) {
				if (!method->get_is_static()) {
					this->nodeType = new TypeError("cannot use non static methods on static method", line_no);
					return false;
				}
			}
		}

		if (new_expression) {
			this->nodeType = TypesTable::findOrCreate(newClassRef->getFullPath(), newClassRef);
		}
		else if (method->isComplex()) {
			this->nodeType = TypesTable::findOrCreate(((Class*)method->getTypeRef())->getFullPath(), method->getTypeRef());
		}
		else {
			if (base_call) {
				this->nodeType = TypesTable::findOrCreate(((Procedure*)method->astPosition->getParent())->getSymbol()->getFullPath(), ((Procedure*)method->astPosition->getParent())->getSymbol());
			}
			else {
				this->nodeType = TypesTable::getType(method->get_return_type()).first;
			}
		}
	}
	return true;
}





void Call::generateCode() {	
	// store old $fp in new 
	AsmGenerator::sw("fp", "sp", -1 * (calledMethod->returnAddressOffset + 4));
	
	for (int i = 0; i < params.size(); ++i) {
		params[i].first->generateCode();
		if (params[i].first->getType() == "call") {
			AsmGenerator::sw("t1", "sp", 0);
		}
		else {
			AsmGenerator::pop("t1");
		}
		AsmGenerator::sw("t1", "sp", -1 * ( 4 * i + 8));
	}

	if (new_expression) {
		
		// call parent constructor
		if (calledMethod->astPosition->getBaseCall()) {
			((Call*)calledMethod->astPosition->getBaseCall())->new_expression = true;
			calledMethod->astPosition->getBaseCall()->generateCode();
		}

		Symbol* classRef = TypesTable::getType(this->nodeType->typeExpression()).second;
		AsmGenerator::allocate("s0", ((Class*)classRef)->bytes);
		// store dispatch pointer
		AsmGenerator::addInstruction("la $t1, " + ((Procedure*)calledMethod->astPosition->getParent())->getFullPath() + "_DispatchTable");
		AsmGenerator::sw("t1", "s0", 0);

		AsmGenerator::sw("s0", "sp", -4); // pass self value to first parameter
		AsmGenerator::sw("s0", "sp", 0 ); // pass self value to return value section in AR

		  // move $sp to new $sp
		AsmGenerator::addInstruction("add $fp, $sp, 0");
		AsmGenerator::addInstruction("sub $sp, $sp, " + to_string(calledMethod->stackFrameSize));

		AsmGenerator::addInstruction("jal " + calledMethod->astPosition->getFullPath());
	}
	else { 
		Node* preDot = ((Identifier*)call)->getPreDot();
		bool isCalledMethodStatic = this->calledMethod->get_is_static();
		if (preDot) {
			preDot->generateCode();
			if (preDot->getType() == "call") {
				AsmGenerator::lw("s0", "sp", 0);
				AsmGenerator::push("s0");
			}
			AsmGenerator::pop("s0");
			AsmGenerator::sw("s0", "sp", -4); // pass self value to first parameter
		}
		else if (!isCalledMethodStatic){
			AsmGenerator::lw("s0", "fp", -4);
			AsmGenerator::sw("s0", "sp", -4); // pass self value to first parameter
		}
		
		if (isCalledMethodStatic) {
			// move $sp to new $sp
			AsmGenerator::addInstruction("add $fp, $sp, 0");
			AsmGenerator::addInstruction("sub $sp, $sp, " + to_string(calledMethod->stackFrameSize));
			AsmGenerator::addInstruction("jal " + calledMethod->astPosition->getFullPath());
			return;
		}

		AsmGenerator::lw("t1", "s0", 0);  // dispatch ptr
		AsmGenerator::lw("t2", "t1", calledMethod->offset);
		// move $sp to new $sp
		AsmGenerator::addInstruction("add $fp, $sp, 0");
		AsmGenerator::lw("t3", "t1", 4 + calledMethod->offset);
		AsmGenerator::addInstruction("sub $sp, $sp, $t3");

		AsmGenerator::addInstruction("jalr $t2");
	}
}

Call::~Call()
{
}
