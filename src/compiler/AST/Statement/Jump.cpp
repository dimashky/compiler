#include "Jump.h"
#include "../Object/Procedure.h"
Jump::Jump(Node* statement, JumpStatement jumpStatement, Node* parent, int lineNo) :Statement(parent)
{
	this->statement = statement;
	this->jumpStatement = jumpStatement;
	this->lineNo = lineNo;

	Node* currentNode = parent;

	while (currentNode->getType() != "procedure")
		currentNode = currentNode->getParent();
	this->parentMethod = (Procedure*)currentNode;
	((Procedure*)parentMethod)->setHasReturn(true);
}
Jump::~Jump()
{
}
