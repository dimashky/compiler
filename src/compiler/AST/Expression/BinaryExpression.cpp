#include "BinaryExpression.h"
#include "../../Type Checker/TypeError.h"
#include "AutoConst.h"
#include "../../Type Checker/all.h"
#include "../../Symbol Table/symbolTable.h"
#include "../../AST/Expression/Identifier.h"
#include "../Object/Procedure.h"

BinaryExpression::BinaryExpression(Node *left, Operator op, Node *right,Node* parent):Expression(parent)
{
	this->left = left; 
	this->right = right; 
	this->op = op;
}

string BinaryExpression::getType() {
	return "bexpression";
}

int BinaryExpression::print(int nodeCnt) {

	int currentId = nodeCnt;

	fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#fce2be'},", currentId, OperatorName[op].c_str());

	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = left->print(nodeCnt + 1);
	fprintf(edgesFile, "{from:%d, to:%d, dashes:true},", currentId, nodeCnt + 1);
	nodeCnt = right->print(nodeCnt + 1);

	return nodeCnt;
}

BinaryExpression::~BinaryExpression()
{
}

bool BinaryExpression::typeChecking() {
	bool check = true;
	this->left->typeChecking();
	if (this->op == Operator::Is) {
		Node* currentNode = this->parent;

		//up to parent method
		while (currentNode->getType() != "procedure") {
			currentNode = currentNode->getParent();
		}
		//up to parent class
		currentNode = currentNode->getParent();

		Symbol* type = ((Procedure*)currentNode)->getSymbol();
		
		type = symbolTable::findType(((Class*)type)->get_type_graph_position(), ((Identifier*)right)->getPostDot()->getName());

		if (type == nullptr) {
			this->nodeType = new TypeError("type " + ((Identifier*)right)->getPostDot()->getName() + " is not defined", ((Identifier*)right)->getPostDot()->getLineNo());
		}
		else {
			this->right->nodeType = TypesTable::findOrCreate(((Class*)type)->getFullPath(), type);
		}
	}
	else if (this->op == Operator::As) {
	/*	
		vector<Symbol*>divs = ((Identifier*)this->right)->getPostDot()->divideName();



		if(this->left->nodeType->equivelantTo(this->right->nodeType, true)){
			this->nodeType = this->right->nodeType;
		}
		else {
			cout << "shit" << endl;
			this->nodeType = new TypeError("no AS operation suitable");
		}

		*/
	}
	else {
		this->right->typeChecking();
	}

	if (left && right) {
		this->nodeType = this->left->nodeType->operation(op, this->right->nodeType);
	}
	return check;
}