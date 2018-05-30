#include "AsmGenerator.h"
#include <string> 
#include "../Symbol Table/symbolTable.h"
#include "../Symbol Table/Method.h"

int AsmGenerator::labelCounter = 0;
int AsmGenerator::stringCounter = 0;
map<string, string> AsmGenerator::strings;

void AsmGenerator::preInitFile() {
	assembly_code_file.open("./AssemblyCode.asm");
	main_stream << ".data\n"
		<< "buffer: .space 20\n";
}

void AsmGenerator::initializeFile()
{

	main_stream << ".text\n"
		<< ".globl "<< symbolTable::mainPath  <<"\n"
		<< "add $fp, $sp, 0\n"
		<< "add $sp, $sp,"
		<< -1 * ((Method*)symbolTable::mainRef)->stackFrameSize
		<< "\n"
		<< "jal "<< symbolTable::mainPath  <<"\n";
}

void AsmGenerator::writeAsmFile()
{
	AsmGenerator::systemCall(10);
	AsmGenerator::addInstruction("\n\n\n\n");
	AsmGenerator::addLabel(((Procedure*)((Method*)symbolTable::mainRef)->astPosition->getParent())->getFullPath() + "." + symbolTable::mainRef->getFullPath() + "_exit");
	assembly_code_file << main_stream.str();
	assembly_code_file.close();
}

void AsmGenerator::li(string reg, int value, bool isChar)
{		
	AsmGenerator::addInstruction("li $" + reg + ", " + to_string(value));
}

void AsmGenerator::operation(Operator op, string const &dest_reg, string const &reg1, string const &reg2)
{
	switch (op)
	{
	case Plus:
		AsmGenerator::addInstruction("add $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case Minus:
		AsmGenerator::addInstruction("sub $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case star:
		AsmGenerator::addInstruction("mul $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case slash:
		AsmGenerator::addInstruction("div $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case percent:
		AsmGenerator::addInstruction("rem $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case andand:
		AsmGenerator::addInstruction("and $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case oror:
		AsmGenerator::addInstruction("or $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case smaller:
		AsmGenerator::addInstruction("slt $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case Operator::leq:
		AsmGenerator::addInstruction("sle $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case Operator::Greater:
		AsmGenerator::addInstruction("sgt $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case Operator::geq:
		AsmGenerator::addInstruction("sge $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case Operator::eqeq:
		AsmGenerator::addInstruction("seq $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		AsmGenerator::printReg(reg1);AsmGenerator::printReg(reg2);
		break;
	case Operator::noteq:
		AsmGenerator::addInstruction("sne $" + dest_reg + ", $" + reg1 + ", $" + reg2);
		break;
	case::Operator::post_plusplus:
		AsmGenerator::addInstruction("addi $" + dest_reg + ", $" + reg1 + ", 1");
		break;
	case::Operator::pre_plusplus:
		AsmGenerator::addInstruction("addi $" + dest_reg + ", $" + reg1 + ", 1");
		break;
	default:
		cout << "operation NOT Support!" << endl;
		return;
	}
}
void AsmGenerator::addLabel (string label_name)
{
	AsmGenerator::addInstruction(label_name+":");
}

void AsmGenerator::push(string source_register)
{
	AsmGenerator::addInstruction("\tsw $" + source_register + ", 0($sp)");
	AsmGenerator::addInstruction("\tsub $sp,$sp,4");
}

void AsmGenerator::pop(string destination_register)
{
	AsmGenerator::addInstruction("\tadd $sp,$sp,4");

	AsmGenerator::addInstruction("\tlw $" + destination_register + ", 0($sp)");
}

void AsmGenerator::addInstruction(string instruction)
{
	instruction += "\n";
	main_stream << instruction;	
}

void AsmGenerator::comment(string comment_message)
{
	stringstream cmt(comment_message);
	string line;
	while (getline(cmt, line))
	{
		string c = "#-----------";
		c+= line;
		AsmGenerator::addInstruction(c);
	}
}

void AsmGenerator::systemCall(int systemCall_code)
{
	AsmGenerator::li("v0",systemCall_code);
	main_stream << "syscall\n";
}

void AsmGenerator::printString(string reg_string_address)
{
	AsmGenerator::move("a0",reg_string_address);
	AsmGenerator::systemCall(4);
}

void AsmGenerator::printStr(string str) {
	
	AsmGenerator::addString("a0", str);
	AsmGenerator::systemCall(4);
}

void AsmGenerator::printInt(int printed_int)
{
	AsmGenerator::li("a0",printed_int);
	AsmGenerator::systemCall(1);
}

void AsmGenerator::printReg(string reg)
{
	AsmGenerator::move("a0",reg);
	AsmGenerator::systemCall(1);
	AsmGenerator::printNewLine();
}

void AsmGenerator::printNewLine() {
	AsmGenerator::addInstruction("addi $a0, $0, 0xA");
	AsmGenerator::systemCall(11);
}

void AsmGenerator::f_print_reg(string reg)
{
	AsmGenerator::f_move("f12",reg);
	AsmGenerator::systemCall(2);
}

void AsmGenerator::move(string dest_reg,string source_reg)
{
	string c = "move $";
	c+=dest_reg;
	c+=",$";
	c+=source_reg;
	AsmGenerator::addInstruction(c);
}

void AsmGenerator::f_move(string dest_reg,string source_reg)
{
	string c = "mov.s $";
	c+=dest_reg;
	c+=",$";
	c+=source_reg;
	AsmGenerator::addInstruction(c);
}

void AsmGenerator::lw(string destination_register, string reference, int offset) 
{
	string c = "lw $";
	c += destination_register;
	c += ", "+ to_string(offset) +"($"+reference+")";
	AsmGenerator::addInstruction(c);
}

void AsmGenerator::sw(string source_register, string reference, int offset) {
	string c = "sw $";
	c += source_register;
	c += ", " + to_string(offset) + "($" + reference + ")";
	AsmGenerator::addInstruction(c);
}

void AsmGenerator::allocate(string dest_reg, int bytes) {

	AsmGenerator::addInstruction("li $a0, " + to_string(bytes));
	AsmGenerator::addInstruction("li $v0, 9");
	AsmGenerator::addInstruction("syscall");

	AsmGenerator::addInstruction("move $"+ dest_reg +", $v0");
}

void AsmGenerator::allocate(string dest_reg, string source_reg) {

	AsmGenerator::addInstruction("move $a0, $" + source_reg);
	AsmGenerator::addInstruction("li $v0, 9");
	AsmGenerator::addInstruction("syscall");

	AsmGenerator::addInstruction("move $" + dest_reg + ", $v0");
}

void AsmGenerator::addString(string dest_reg, string value) {
	auto result = AsmGenerator::strings.find(value);
	if (result != strings.end()) {
		AsmGenerator::addInstruction("la $" + dest_reg + ", " + result->second);
	}
	else {
		AsmGenerator::strings[value] = "string" + to_string(stringCounter);
		AsmGenerator::addInstruction(".data\n\tstring" + to_string(stringCounter) + ": .asciiz \"" + value + "\"\n.text\n");
		AsmGenerator::addInstruction("la $" + dest_reg + ", string" + to_string(stringCounter++));
	}
}

ofstream AsmGenerator::assembly_code_file;
stringstream AsmGenerator::main_stream;