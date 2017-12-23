#include "Attribute.h"
#include "../Error Handler/error_handler.h"
#include<vector>

set<string > Attribute::classModifiers = set<string>({ "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "INTERNAL","NEW","SEALED","ABSTRACT" });
set<string > Attribute::methodModifiers = set<string>({ "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "INTERNAL","NEW","SEALED","VIRTUAL","OVERRIDE","EXTERN","ABSTRACT" });
set<string > Attribute::fieldModifiers = set<string>({ "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "INTERNAL","NEW","READONLY","CONST","VOLATILE" });
set<string > Attribute::interfaceModifiers = set<string>({ "PUBLIC", "PRIVATE", "PROTECTED", "INTERNAL" });
extern errorHandler error_handler;

Attribute::Attribute(string type)
{
	typeKeyword = type;
	errorDuplicate = false;
	errorAccess = false;
	oneAccess = false;
	errorAbstract = false;
	errorStaticSealed = false;
	errorPrivate = false;
	errorConst = false;
}
Attribute::Attribute(string type, string return_type)
{
	typeKeyword = type;
	errorDuplicate = false;
	errorAccess = false;
	oneAccess = false;
	errorAbstract = false;
	errorStaticSealed = false;
	errorPrivate = false;
	errorConst = false;
	this->return_type = return_type;
}
bool Attribute::add(string nameAtt)
{
	int number = whatHave.size();
	if (typeKeyword == "class")
	{
		set<string>::iterator it = classModifiers.find(nameAtt);
		if (it != classModifiers.end()) // inside type
		{
			set<string>::iterator it1 = whatHave.find(nameAtt);
			if (it1 == whatHave.end() || whatHave.size() == 0) // not Duplicate
			{
				if ((nameAtt == "PUBLIC" || nameAtt == "PRIVATE" || nameAtt == "PROTECTED"))// not more Access
				{
					if ((oneAccess) && (!errorAccess)) {
						error_handler.add(error(line_no, col_no, "attributes error, More than one protection modifier"));
						errorAccess = true;
						return false;
					}
					oneAccess = true;
				}
				else if (nameAtt == "INTERNAL") { // no more Access
					set<string>::iterator it3 = whatHave.find("PRIVATE");
					set<string>::iterator it4 = whatHave.find("PUBLIC");
					if ((it3 != whatHave.end() || it4 != whatHave.end()) && !errorAccess) {
						error_handler.add(error(line_no, col_no, "attribute error, more than one protection modifier"));
						errorAccess = true;
						return false;
					}
				}
				else if (nameAtt == "ABSTRACT") { // no sealed or STATIC
					set<string>::iterator it5 = whatHave.find("SEALED");
					set<string>::iterator it6 = whatHave.find("STATIC");
					if ((it5 != whatHave.end() || it6 != whatHave.end()) && !errorAbstract) {
						error_handler.add(error(line_no, col_no, "attribute error, an abstract class cannot be sealed or static"));
						errorAbstract = true;
						return false;
					}
				}
				else if (nameAtt == "STATIC") { // no sealed or STATIC
					set<string>::iterator it7 = whatHave.find("ABSTRACT");
					if (it7 != whatHave.end() && !errorAbstract) {
						error_handler.add(error(line_no, col_no, "attribute error, an abstract class cannot be sealed or static"));
						errorAbstract = true;
						return false;
					}
					set<string>::iterator it8 = whatHave.find("SEALED");
					if (it8 != whatHave.end() && !errorStaticSealed) {
						error_handler.add(error(line_no, col_no, "attribute error, a class cannot be both static and sealed"));
						errorStaticSealed = true;
						return false;
					}
				}
				else if (nameAtt == "SEALED") { // no sealed or static
					set<string>::iterator it9 = whatHave.find("ABSTRACT");
					if (it9 != whatHave.end() && !errorAbstract) {
						error_handler.add(error(line_no, col_no, "attribute error, an abstract class cannot be sealed or static"));
						errorAbstract = true;
						return false;
					}
					set<string>::iterator it10 = whatHave.find("static");
					if (it10 != whatHave.end() && !errorStaticSealed) {
						error_handler.add(error(line_no, col_no, "attribute error, a class cannot be both static and sealed"));
						errorStaticSealed = true;
						return false;
					}

				}

			}
			else if (!errorDuplicate)
			{
				errorDuplicate = true;
				string m = "attribute error, duplicate '" + nameAtt + "' modifier";
				error_handler.add(error(line_no, col_no, m.c_str()));
				return false;
			}
		}
		else
		{
			string m = "attribute error, the modifier '" + nameAtt + "' is not valid for this item";
			error_handler.add(error(line_no, col_no, m.c_str()));
			return false;
		}
	}
	else if (typeKeyword == "interface") {
		set<string>::iterator it = interfaceModifiers.find(nameAtt);
		if (it != classModifiers.end()) // inside type
		{
			set<string>::iterator it1 = whatHave.find(nameAtt);
			if (it1 == whatHave.end() || whatHave.size() == 0) // not Duplicate
			{
				if ((nameAtt == "PUBLIC" || nameAtt == "PRIVATE" || nameAtt == "PROTECTED"))// not more Access
				{
					if ((oneAccess) && (!errorAccess)) {
						error_handler.add(error(line_no, col_no, "attribute error, More than one protection modifier"));
						errorAccess = true;
						return false;
					}
					oneAccess = true;
				}
				else if (nameAtt == "INTERNAL") { // no more Access
					set<string>::iterator it3 = whatHave.find("PRIVATE");
					set<string>::iterator it4 = whatHave.find("PUBLIC");
					if ((it3 != whatHave.end() || it4 != whatHave.end()) && !errorAccess) {
						error_handler.add(error(line_no, col_no, "attribute error, More than one protection modifier"));
						errorAccess = true;
						return false;
					}
				}

			}
			else if (!errorDuplicate)
			{
				errorDuplicate = true;
				string m = "attribute error, Duplicate '" + nameAtt + "' modifier";
				error_handler.add(error(line_no, col_no, m.c_str()));
				return false;
			}
		}
		else
		{
			string m = "attribute error, The modifier '" + nameAtt + "' is not valid for this item";
			error_handler.add(error(line_no, col_no, m.c_str()));
			return false;
		}
	}
	else if (typeKeyword == "method") {
		set<string>::iterator it = methodModifiers.find(nameAtt);

		if (it != methodModifiers.end() && (return_type != "" || (return_type == "") && (nameAtt != "NEW" && nameAtt != "SEALED" &&  nameAtt != "VIRTUAL" && nameAtt != "OVERRIDE" &&  nameAtt != "EXTERN" &&  nameAtt != "ABSTRACT"))) // inside type
		{
			set<string>::iterator it1 = whatHave.find(nameAtt);
			if (it1 == whatHave.end() || whatHave.size() == 0) // not Duplicate
			{
				if ((nameAtt == "PUBLIC" || nameAtt == "PRIVATE" || nameAtt == "PROTECTED"))// not more Access
				{
					if ((oneAccess) && (!errorAccess)) {
						error_handler.add(error(line_no, col_no, "attribute error, More than one protection modifier"));
						errorAccess = true;
						return false;
					}
					else if (nameAtt == "PRIVATE") {
						set<string>::iterator iti = whatHave.find("VIRTUAL");
						set<string>::iterator iti1 = whatHave.find("ABSTRACT");
						set<string>::iterator iti2 = whatHave.find("OVERRIDE");
						if ((iti != whatHave.end() || iti1 != whatHave.end() || iti2 != whatHave.end()) && (!errorPrivate)) {
							error_handler.add(error(line_no, col_no, "attribute error, virtual or abstract members cannot be private"));
							errorPrivate = true;
							return false;
						}
					}
					oneAccess = true;
				}
				else if (nameAtt == "INTERNAL") { // no more Access
					set<string>::iterator it3 = whatHave.find("PRIVATE");
					set<string>::iterator it4 = whatHave.find("PUBLIC");
					if ((it3 != whatHave.end() || it4 != whatHave.end()) && !errorAccess) {
						error_handler.add(error(line_no, col_no, "attribute error, More than one protection modifier"));
						errorAccess = true;
						return false;
					}
				}
				else if (nameAtt == "VIRTUAL")
				{
					set<string>::iterator it5 = whatHave.find("PRIVATE");
					if (it5 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, virtual or abstract members cannot be private"));
						return false;
					}
					set<string>::iterator it6 = whatHave.find("STATIC");
					if (it6 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, STATIC member cannot be marked as override, virtual, or abstract"));
						return false;
					}
					set<string>::iterator it7 = whatHave.find("ABSTRACT");
					if (it7 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, The abstract method cannot be marked virtual"));
						return false;
					}
					set<string>::iterator it8 = whatHave.find("OVERRIDE");
					if (it8 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, member marked as override cannot be marked as new or virtual"));
						return false;
					}

				}
				else if (nameAtt == "STATIC") { // no sealed or STATIC
					set<string>::iterator iti = whatHave.find("VIRTUAL");
					set<string>::iterator iti1 = whatHave.find("ABSTRACT");
					set<string>::iterator iti2 = whatHave.find("OVERRIDE");
					if (iti != whatHave.end() || iti1 != whatHave.end() || iti2 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, STATIC member cannot be marked as override, virtual, or abstract"));
						return false;
					}

				}
				else if (nameAtt == "SEALED") {
					set<string>::iterator iti = whatHave.find("OVERRIDE");
					if (iti == whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, cannot be sealed because it is not an override"));
						return false;
					}
				}
				else if (nameAtt == "OVERRIDE") {
					set<string>::iterator itr1 = whatHave.find("PUBLIC");
					set<string>::iterator itr2 = whatHave.find("PROTECTED");
					set<string>::iterator itr3 = whatHave.find("INTERNAL");
					if (itr1 != whatHave.end() || itr2 != whatHave.end() || itr3 != whatHave.end()) {
						set<string>::iterator ite1 = whatHave.find("NEW");
						set<string>::iterator ite2 = whatHave.find("VIRTUAL");
						if (ite1 != whatHave.end() || ite2 != whatHave.end()) {
							error_handler.add(error(line_no, col_no, "attribute error, member marked as override cannot be marked as new or virtual"));
							return false;
						}
						else {
							set<string>::iterator ite4 = whatHave.find("STATIC");
							if (ite4 != whatHave.end()) {
								error_handler.add(error(line_no, col_no, "attribute error, STATIC member cannot be marked as override, virtual, or abstract"));
								return false;
							}
						}

					}
					else if (!errorPrivate) {
						error_handler.add(error(line_no, col_no, "attribute error, virtual or abstract members cannot be PRIVATE"));
						errorPrivate = true;
						return false;
					}

				}
				else if (nameAtt == "NEW") {
					set<string>::iterator ite32 = whatHave.find("OVERRIDE");
					if (ite32 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, member marked as override cannot be marked as NEW or virtual"));
						return false;
					}

				}

				else if (nameAtt == "ABSTRACT") {

					set<string>::iterator itr1 = whatHave.find("PUBLIC");
					set<string>::iterator itr2 = whatHave.find("PROTECTED");
					set<string>::iterator itr3 = whatHave.find("INTERNAL");
					if (itr1 != whatHave.end() || itr2 != whatHave.end() || itr3 != whatHave.end()) {
						set<string>::iterator ite2 = whatHave.find("VIRTUAL");
						if (ite2 != whatHave.end()) {
							error_handler.add(error(line_no, col_no, "attribute error, The abstract method cannot be marked virtual"));
							return false;
						}
						else {
							set<string>::iterator ite34 = whatHave.find("SEALED");
							if (ite34 != whatHave.end()) {
								error_handler.add(error(line_no, col_no, "attribute error, cannot be both abstract and sealed"));
								return false;
							}
							else {
								set<string>::iterator ite324 = whatHave.find("EXTERN");
								if (ite324 != whatHave.end()) {
									error_handler.add(error(line_no, col_no, "attribute error, cannot be both abstract and extern"));
									return false;
								}
							}
						}
					}
					else {
						error_handler.add(error(line_no, col_no, "attribute error, cannot be sealed because it is not an override"));
						return false;
					}

				}
				else if (nameAtt == "EXTERN") {
					set<string>::iterator ite324 = whatHave.find("ABSTRACT");
					if (ite324 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, cannot be both abstract and extern"));
						return false;
					}
				}
			}
			else if (!errorDuplicate)
			{
				errorDuplicate = true;
				string m = "attribute error, Duplicate '" + nameAtt + "' modifier";
				error_handler.add(error(line_no, col_no, m.c_str()));
				return false;
			}
		}
		else
		{
			string m = "attribute error, The modifier '" + nameAtt +"' is not valid for this item";
			error_handler.add(error(line_no, col_no, m.c_str()));
			return false;
		}

	}
	else if (typeKeyword == "field") {
		set<string>::iterator it = fieldModifiers.find(nameAtt);

		if (it != fieldModifiers.end()) // inside type
		{
			set<string>::iterator it1 = whatHave.find(nameAtt);
			if (it1 == whatHave.end() || whatHave.size() == 0) // not Duplicate
			{
				if ((nameAtt == "PUBLIC" || nameAtt == "PRIVATE" || nameAtt == "PROTECTED"))// not more Access
				{
					if ((oneAccess) && (!errorAccess)) {
						error_handler.add(error(line_no, col_no, "attribute error, More than one protection modifier"));
						errorAccess = true;
						return false;
					}
					oneAccess = true;
				}
				else if (nameAtt == "INTERNAL") { // no more Access
					set<string>::iterator it3 = whatHave.find("PRIVATE");
					set<string>::iterator it4 = whatHave.find("PUBLIC");
					if ((it3 != whatHave.end() || it4 != whatHave.end()) && !errorAccess) {
						error_handler.add(error(line_no, col_no, "attribute error, More than one protection modifier"));
						errorAccess = true;
						return false;
					}
				}
				else if (nameAtt == "CONST") { // no more Access
					set<string>::iterator it4 = whatHave.find("STATIC");
					if (it4 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, The constant  cannot be marked static"));
						return false;
					}
					else {
						set<string>::iterator it41 = whatHave.find("READONLY");
						if ((it41 != whatHave.end()) && !errorConst) {
							error_handler.add(error(line_no, col_no, "attribute error, The modifier 'readonly' is not valid for this item"));
							errorConst = true;
							return false;
						}
						else {
							set<string>::iterator it42 = whatHave.find("VOLATILE");
							if (it42 != whatHave.end()) {
								error_handler.add(error(line_no, col_no, "attribute error, The modifier 'volatile' is not valid for this item"));
								return false;
							}
						}
					}
				}
				else if (nameAtt == "STATIC") {
					set<string>::iterator it4 = whatHave.find("CONST");
					if (it4 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, const field requires a value to be provided"));
						return false;
					}
				}
				else if (nameAtt == "READONLY") {
					set<string>::iterator it4 = whatHave.find("CONST");
					if (it4 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, const field requires a value to be provided"));
						return false;
					}
					else {
						set<string>::iterator it45 = whatHave.find("VOLATILE");
						if (it45 != whatHave.end()) {
							error_handler.add(error(line_no, col_no, "attribute error, field cannot be both volatile and readonly"));
							return false;
						}


					}
				}
				else if (nameAtt == "VOLATILE") {
					set<string>::iterator it45 = whatHave.find("READONLY");
					if (it45 != whatHave.end()) {
						error_handler.add(error(line_no, col_no, "attribute error, field cannot be both volatile and readonly"));
						return false;
					}
					else {
						set<string>::iterator it42 = whatHave.find("CONST");
						if (it42 != whatHave.end()) {
							error_handler.add(error(line_no, col_no, "attribute error, const field requires a value to be provided"));
							return false;
						}
					}
				}



			}
			else if (!errorDuplicate)
			{
				errorDuplicate = true;
				string m =  "attribute error, Duplicate '"+ nameAtt + "' modifier";
				error_handler.add(error(line_no, col_no, m.c_str()));
				return false;
			}
		}
		else
		{
			string m = "attribute error, The modifier '" + nameAtt + "' is not valid for this item";
			error_handler.add(error(line_no, col_no, m.c_str()));
			return false;
		}


	}
	whatHave.insert(nameAtt);
	return true;
}
Attribute::~Attribute()
{
	//dtor
}
