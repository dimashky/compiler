#include "Identifier.h"
#include "../../Symbol Table/symbolTable.h"
#include "AutoConst.h"

Identifier::Identifier(Node* preDot, Symbol* postDot, bool is_array) : Expression(Node::current)
{
	this->preDot = preDot;
	this->postDot = postDot;
	this->is_array = is_array;
}
string Identifier::getType()
{
	return "identifier";
}


int Identifier::print(int nodeCnt)
{
	cout << endl;
	cout << "=============st Identifier=============" << endl;

	cout << endl;
	if (postDot == nullptr)
		cout << "ooops" << endl;
	else cout << postDot->getName() << endl;

	if (preDot == nullptr)
		cout << "another ooops" << endl;
	else preDot->print(nodeCnt);
	//symbol = symbolTable::findIdentifier(symbol, (symbolTable*)symboltable);

	/*if (symbol != nullptr)
		cout << symbol->getName() << " " << symbol->getLineNo() << " " << symbol->getColNo() << endl;
	else cout << "here there is id didn't start with symbol !!" << endl;

	for (int i = 0;i < dimensions.size();i++)
		cout << *((int*)((AutoConst*)dimensions[i])->getValue()) << " ";
	cout << endl;

	cout << sections.size() << endl;
	for (int i = 0;i < sections.size();i++) {
		cout << " wooow printing new thing !! "  << ((Identifier*)sections[i])->is_array << endl;
		if (((Identifier*)sections[i])->symbol != nullptr) {
			cout << ((Identifier*)sections[i])->symbol->getName() << endl;
		}
	}
	cout << endl;

	*/

	cout << endl;
	cout << "=============en Identifier=============" << endl;

	cout << endl;
	//fprintf(nodesFile, "{ id:%d, label:'%s', shape: 'box', color:'#fc0800'},", nodeCnt, this->symbol->getName().c_str());
	
	return nodeCnt;
}



void Identifier::setArrayDimensions(queue<Node*>dimensions) {
	
	this->is_array = true;

	while (!dimensions.empty())
		this->dimensions.push_back(dimensions.front()), dimensions.pop();
	return;
}

Identifier::~Identifier()
{
}
