#include "Attribute.h"

Attribute::Attribute(string type)
{
    typeKeyword = type ;
    errorDuplicate = false ;
    errorAccess = false ;
    oneAccess = false;
    errorAbstract = false ;
    errorStaticSealed  = false;
    classModifiers.insert("public");
    classModifiers.insert("private");
    classModifiers.insert("protected");
    classModifiers.insert("static");
    classModifiers.insert("internal");
    classModifiers.insert("new");
    classModifiers.insert("sealed");
    classModifiers.insert("abstract");

    methodModifiers.insert("public");
    methodModifiers.insert("private");
    methodModifiers.insert("protected");
    methodModifiers.insert("static");
    methodModifiers.insert("internal");
    methodModifiers.insert("new");
    methodModifiers.insert("sealed");
    methodModifiers.insert("virtual");
    methodModifiers.insert("override");
    methodModifiers.insert("extern");

    virableModifiers.insert("public");
    virableModifiers.insert("private");
    virableModifiers.insert("protected");
    virableModifiers.insert("static");
    virableModifiers.insert("internal");
    virableModifiers.insert("new");
    virableModifiers.insert("sealed");
    virableModifiers.insert("readonly");
    virableModifiers.insert("const");
    virableModifiers.insert("volatile");



}
void Attribute::addAttribute(string nameAtt)
{
    int number = whatHave.size() ;
    if(typeKeyword=="Class")
    {
        set<string>::iterator it = classModifiers.find(nameAtt);
        if(it != classModifiers.end()) // inside type
        {
          set<string>::iterator it1 = whatHave.find(nameAtt);
          if(it1==whatHave.end() || whatHave.size()==0) // not Duplicate
          {
              if((nameAtt=="public" || nameAtt=="private" || nameAtt=="protected"))// not more Access
              {
                  if((oneAccess)&&(!errorAccess)){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                  }
                 oneAccess = true ;
              }
              else if(nameAtt=="internal"){ // no more Access
                 set<string>::iterator it3 = whatHave.find("private");
                 set<string>::iterator it4 = whatHave.find("public");
                 if((it3!=whatHave.end() || it4!=whatHave.end())&&!errorAccess){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                 }
              }
              else if(nameAtt=="abstract"){ // no sealed or static
                 set<string>::iterator it5 = whatHave.find("sealed");
                 set<string>::iterator it6 = whatHave.find("static");
                 if((it5!=whatHave.end() || it6!=whatHave.end())&& ! errorAbstract){
                     cout <<"error : an abstract class cannot be sealed or static"<<endl;
                     errorAbstract = true ;
                 }
              }
              else if(nameAtt=="static"){ // no sealed or static
                 set<string>::iterator it7 = whatHave.find("abstract");
                 if(it7!=whatHave.end()&& !errorAbstract){
                     cout <<"error : an abstract class cannot be sealed or static"<<endl;
                     errorAbstract = true ;
                 }
                 set<string>::iterator it8 = whatHave.find("sealed");
                 if(it8!=whatHave.end()&& !errorStaticSealed){
                     cout <<"error : a class cannot be both static and sealed"<<endl;
                     errorStaticSealed = true ;
                 }
              }
              else if(nameAtt=="sealed"){ // no sealed or static
                 set<string>::iterator it9 = whatHave.find("abstract");
                 if(it9!=whatHave.end()&& !errorAbstract){
                     cout <<"error : an abstract class cannot be sealed or static"<<endl;
                     errorAbstract = true ;
                 }
                 set<string>::iterator it10 = whatHave.find("static");
                 if(it10!=whatHave.end()&& !errorStaticSealed){
                     cout <<"error : a class cannot be both static and sealed"<<endl;
                     errorStaticSealed = true ;
                 }

              }

          }
          else if(!errorDuplicate)
          {
              errorDuplicate = true ;
              cout << "error : Duplicate '"<<nameAtt<<"' modifier" <<endl ;
          }
        }
        else
        {
          cout << "error : The modifier '"<<nameAtt<<"' is not valid for this item"<<endl;
        }
    }

    else if(typeKeyword=="Method"){
             set<string>::iterator it = methodModifiers.find(nameAtt);
        if(it != methodModifiers.end()) // inside type
        {
          set<string>::iterator it1 = whatHave.find(nameAtt);
          if(it1==whatHave.end() || whatHave.size()==0) // not Duplicate
          {
              if((nameAtt=="public" || nameAtt=="private" || nameAtt=="protected"))// not more Access
              {
                  if((oneAccess)&&(!errorAccess)){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                  }
                 oneAccess = true ;
              }
              else if(nameAtt=="internal"){ // no more Access
                 set<string>::iterator it3 = whatHave.find("private");
                 set<string>::iterator it4 = whatHave.find("public");
                 if((it3!=whatHave.end() || it4!=whatHave.end())&&!errorAccess){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                 }
              }
              else if(nameAtt=="static"){ // no sealed or static
                 set<string>::iterator it7 = whatHave.find("abstract");
                 if(it7!=whatHave.end()&& !errorAbstract){
                     cout <<"error : an abstract class cannot be sealed or static"<<endl;
                     errorAbstract = true ;
                 }
                 set<string>::iterator it8 = whatHave.find("sealed");
                 if(it8!=whatHave.end()&& !errorStaticSealed){
                     cout <<"error : a class cannot be both static and sealed"<<endl;
                     errorStaticSealed = true ;
                 }
              }
              else if(nameAtt=="sealed"){ // no sealed or static
                 set<string>::iterator it9 = whatHave.find("abstract");
                 if(it9!=whatHave.end()&& !errorAbstract){
                     cout <<"error : an abstract class cannot be sealed or static"<<endl;
                     errorAbstract = true ;
                 }
                 set<string>::iterator it10 = whatHave.find("static");
                 if(it10!=whatHave.end()&& !errorStaticSealed){
                     cout <<"error : a class cannot be both static and sealed"<<endl;
                     errorStaticSealed = true ;
                 }

              }

          }
          else if(!errorDuplicate)
          {
              errorDuplicate = true ;
              cout << "error : Duplicate '"<<nameAtt<<"' modifier" <<endl ;
          }
        }
        else
        {
          cout << "error : The modifier '"<<nameAtt<<"' is not valid for this item"<<endl;
        }

    }
    else if(typeKeyword=="Data Member" || typeKeyword=="VarLocal"){

    }
      whatHave.insert(nameAtt);
}
Attribute::~Attribute()
{
    //dtor
}
