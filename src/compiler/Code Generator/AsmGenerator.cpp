#include "AsmGenerator.h"
#include <string> 

void AsmGenerator::initializeFile()
{
	assembly_code_file.open("./AssemblyCode.asm");
	main_stream << ".text\n"
		<< ".globl main\n"
		<< "main:\n\n";
}

void AsmGenerator::writeAsmFile()
{
	AsmGenerator::systemCall(10);
	AsmGenerator::addInstruction("\n\n\n\n");
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

	AsmGenerator::addInstruction("\tsub $sp,$sp,4");
	string c="sw $";
	c+=source_register;
	c+=", 0($sp)";
	AsmGenerator::addInstruction("\t"+c);
}

void AsmGenerator::pop(string destination_register)
{
	string c = "lw $";
	c += destination_register;
	c += ", 0($sp)";
	AsmGenerator::addInstruction("\t"+c);
	AsmGenerator::addInstruction("\tadd $sp,$sp,4");
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

void AsmGenerator::printInt(int printed_int)
{
	AsmGenerator::li("a0",printed_int);
	AsmGenerator::systemCall(1);
}

void AsmGenerator::printReg(string reg)
{
	AsmGenerator::move("a0",reg);
	AsmGenerator::systemCall(1);
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

ofstream AsmGenerator::assembly_code_file;
stringstream AsmGenerator::main_stream;