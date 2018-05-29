#pragma once
#include "../Node.h"
#include "Statement.h"
#include "../../Type Checker/all.h"
#include "../../Symbol Table/Method.h"
#include "../../Symbol Table/Class.h"
#include "../Object/Procedure.h"

enum JumpStatement {
	Return, Break, Continue, Throw
};

/*
	Notify :
		i set ToString method as method has a return statement in it in symbol parser init
*/

class Jump : public Statement
{
private:
	Node* statement, *parentMethod;
	JumpStatement jumpStatement;
	int lineNo;
public:

	Jump(Node* statement, JumpStatement jumpStatement, Node* parent,int lineNo);

	int print(int nodeCnt);

	string getType();
	
	bool typeChecking();

	void generateCode();

	~Jump();
};

