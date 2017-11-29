#include "Attribute.h"
#include<vector>

set<string > Attribute::classModifiers = set<string>({ "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "INTERNAL","NEW","SEALED","ABSTRACT" });
set<string > Attribute::methodModifiers = set<string>({ "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "INTERNAL","NEW","SEALED","VIRTUAL","OVERRIDE","EXTERN","ABSTRACT" });
set<string > Attribute::virableModifiers = set<string>({ "PUBLIC", "PRIVATE", "PROTECTED", "STATIC", "INTERNAL","NEW","SEALED","READONLY","CONST","VOLATILE" });


Attribute::Attribute(string type)
{
    typeKeyword = type ;
    errorDuplicate = false ;
    errorAccess = false ;
    oneAccess = false;
    errorAbstract = false ;
    errorStaticSealed  = false;
    errorPrivate = false ;
    errorConst = false;
}
bool Attribute::add(string nameAtt)
{
    int number = whatHave.size() ;
    if(typeKeyword=="class")
    {
        set<string>::iterator it = classModifiers.find(nameAtt);
        if(it != classModifiers.end()) // inside type
        {
          set<string>::iterator it1 = whatHave.find(nameAtt);
          if(it1==whatHave.end() || whatHave.size()==0) // not Duplicate
          {
              if((nameAtt=="PUBLIC" || nameAtt=="PRIVATE" || nameAtt=="PROTECTED"))// not more Access
              {
                  if((oneAccess)&&(!errorAccess)){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                     return false ;
                  }
                 oneAccess = true ;
              }
              else if(nameAtt=="INTERNAL"){ // no more Access
                 set<string>::iterator it3 = whatHave.find("PRIVATE");
                 set<string>::iterator it4 = whatHave.find("PUBLIC");
                 if((it3!=whatHave.end() || it4!=whatHave.end())&&!errorAccess){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                     return false ;
                 }
              }
              else if(nameAtt=="ABSTRACT"){ // no sealed or STATIC
                 set<string>::iterator it5 = whatHave.find("SEALED");
                 set<string>::iterator it6 = whatHave.find("STATIC");
                 if((it5!=whatHave.end() || it6!=whatHave.end())&& ! errorAbstract){
                     cout <<"error : an abstract class cannot be sealed or static"<<endl;
                     errorAbstract = true ;
                     return false ;
                 }
              }
              else if(nameAtt=="STATIC"){ // no sealed or STATIC
                 set<string>::iterator it7 = whatHave.find("ABSTRACT");
                 if(it7!=whatHave.end()&& !errorAbstract){
                     cout <<"error : an abstract class cannot be sealed or static"<<endl;
                     errorAbstract = true ;
                     return false ;
                 }
                 set<string>::iterator it8 = whatHave.find("SEALED");
                 if(it8!=whatHave.end()&& !errorStaticSealed){
                     cout <<"error : a class cannot be both static and sealed"<<endl;
                     errorStaticSealed = true ;
                     return false ;
                 }
              }
              else if(nameAtt=="SEALED"){ // no sealed or static
                 set<string>::iterator it9 = whatHave.find("ABSTRACT");
                 if(it9!=whatHave.end()&& !errorAbstract){
                     cout <<"error : an abstract class cannot be sealed or static"<<endl;
                     errorAbstract = true ;
                     return false ;
                 }
                 set<string>::iterator it10 = whatHave.find("static");
                 if(it10!=whatHave.end()&& !errorStaticSealed){
                     cout <<"error : a class cannot be both static and sealed"<<endl;
                     errorStaticSealed = true ;
                     return false ;
                 }

              }

          }
          else if(!errorDuplicate)
          {
              errorDuplicate = true ;
              cout << "error : Duplicate '"<<nameAtt<<"' modifier" <<endl ;
              return false ;
          }
        }
        else
        {
          cout << "error : The modifier '"<<nameAtt<<"' is not valid for this item"<<endl;
          return false ;
        }
    }

    else if(typeKeyword=="method"){
             set<string>::iterator it = methodModifiers.find(nameAtt);
        if(it != methodModifiers.end()) // inside type
        {
          set<string>::iterator it1 = whatHave.find(nameAtt);
          if(it1==whatHave.end() || whatHave.size()==0) // not Duplicate
          {
              if((nameAtt=="PUBLIC" || nameAtt=="PRIVATE" || nameAtt=="PROTECTED"))// not more Access
              {
                  if((oneAccess)&&(!errorAccess)){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                     return false ;
                  }
                  else if(nameAtt=="PRIVATE") {
                    set<string>::iterator iti = whatHave.find("VIRTUAL");
                    set<string>::iterator iti1 = whatHave.find("ABSTRACT");
                   set<string>::iterator iti2 = whatHave.find("OVERRIDE");
                   if((iti!=whatHave.end() || iti1!=whatHave.end()|| iti2!=whatHave.end())&&(!errorPrivate)){
                     cout <<"error : virtual or abstract members cannot be private"<<endl;
                     errorPrivate = true ;
                     return false ;
                   }
                  }
                 oneAccess = true ;
              }
              else if(nameAtt=="INTERNAL"){ // no more Access
                 set<string>::iterator it3 = whatHave.find("PRIVATE");
                 set<string>::iterator it4 = whatHave.find("PUBLIC");
                 if((it3!=whatHave.end() || it4!=whatHave.end())&&!errorAccess){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                     return false ;
                 }
              }
              else if(nameAtt=="VIRTUAL")
                {
                  set<string>::iterator it5 = whatHave.find("PRIVATE");
                 if(it5!=whatHave.end()){
                     cout <<"error : virtual or abstract members cannot be private"<<endl;
                     return false ;
                 }
                 set<string>::iterator it6 = whatHave.find("STATIC");
                 if(it6!=whatHave.end()){
                     cout <<"error : STATIC member cannot be marked as override, virtual, or abstract"<<endl;
                     return false ;
                 }
                 set<string>::iterator it7 = whatHave.find("ABSTRACT");
                 if(it7!=whatHave.end()){
                     cout <<"error : The abstract method cannot be marked virtual"<<endl;
                     return false ;
                 }
                 set<string>::iterator it8 = whatHave.find("OVERRIDE");
                 if(it8!=whatHave.end()){
                     cout <<"error : member marked as override cannot be marked as new or virtual"<<endl;
                     return false ;
                 }

              }
              else if(nameAtt=="STATIC"){ // no sealed or STATIC
                     set<string>::iterator iti = whatHave.find("VIRTUAL");
                     set<string>::iterator iti1 = whatHave.find("ABSTRACT");
                     set<string>::iterator iti2 = whatHave.find("OVERRIDE");
                   if(iti!=whatHave.end() || iti1!=whatHave.end()|| iti2!=whatHave.end()){
                     cout <<"error : STATIC member cannot be marked as override, virtual, or abstract"<<endl;
                     return false ;
                   }

              }
              else if(nameAtt=="SEALED"){
                  set<string>::iterator iti = whatHave.find("OVERRIDE");
                  if(iti == whatHave.end() ){
                     cout <<"error : cannot be sealed because it is not an override"<<endl;
                     return false ;
                   }
              }
              else if(nameAtt=="OVERRIDE"){
                  set<string>::iterator itr1 = whatHave.find("PUBLIC");
                  set<string>::iterator itr2 = whatHave.find("PROTECTED");
                  set<string>::iterator itr3 = whatHave.find("INTERNAL");
                  if(itr1 != whatHave.end() ||itr2 != whatHave.end()||itr3 != whatHave.end() ){
                       set<string>::iterator ite1 = whatHave.find("NEW");
                       set<string>::iterator ite2 = whatHave.find("VIRTUAL");
                      if(ite1!=whatHave.end() || ite2!=whatHave.end()){
                      cout <<"error : member marked as override cannot be marked as new or virtual"<<endl;
                      return false ;
                      }
                      else {
                        set<string>::iterator ite4 = whatHave.find("STATIC");
                      if(ite4!=whatHave.end()){
                      cout <<"error : STATIC member cannot be marked as override, virtual, or abstract"<<endl;
                      return false ;
                       }

                      }

                   }
              else if(!errorPrivate){
                cout <<"error : virtual or abstract members cannot be PRIVATE"<<endl;
                errorPrivate = true ;
                return false ;
              }

              }
              else if(nameAtt=="NEW"){
                    set<string>::iterator ite32 = whatHave.find("OVERRIDE");
                      if(ite32!=whatHave.end()){
                      cout <<"error : member marked as override cannot be marked as NEW or virtual"<<endl;
                      return false ;
                      }

              }

              else if(nameAtt=="ABSTRACT"){

                  set<string>::iterator itr1 = whatHave.find("PUBLIC");
                  set<string>::iterator itr2 = whatHave.find("PROTECTED");
                  set<string>::iterator itr3 = whatHave.find("INTERNAL");
                  if(itr1 != whatHave.end() ||itr2 != whatHave.end()||itr3 != whatHave.end() ){
                       set<string>::iterator ite2 = whatHave.find("VIRTUAL");
                      if(ite2!=whatHave.end()){
                       cout <<"error : The abstract method cannot be marked virtual"<<endl;
                       return false ;
                      }
                      else {
                          set<string>::iterator ite34 = whatHave.find("SEALED");
                         if(ite34!=whatHave.end()){
                         cout <<"error : cannot be both abstract and sealed"<<endl;
                         return false ;
                         }
                         else {
                            set<string>::iterator ite324 = whatHave.find("EXTERN");
                         if(ite324!=whatHave.end()){
                         cout <<"error : cannot be both abstract and extern"<<endl;
                         return false ;
                         }
                         }
                      }
                    }
               else {
                cout <<"error : cannot be sealed because it is not an override"<<endl;
                return false ;
              }

              }
              else if(nameAtt=="EXTERN"){
                           set<string>::iterator ite324 = whatHave.find("ABSTRACT");
                         if(ite324!=whatHave.end()){
                         cout <<"error : cannot be both abstract and extern"<<endl;
                         return false ;
                         }

              }

          }
          else if(!errorDuplicate)
          {
              errorDuplicate = true ;
              cout << "error : Duplicate '"<<nameAtt<<"' modifier" <<endl ;
              return false ;
          }
        }
        else
        {
          cout << "error : The modifier '"<<nameAtt<<"' is not valid for this item"<<endl;
          return false ;
        }

    }
    else if(typeKeyword=="dataMember" || typeKeyword=="localVar"){
                set<string>::iterator it = virableModifiers.find(nameAtt);
        if(it != classModifiers.end()) // inside type
        {
          set<string>::iterator it1 = whatHave.find(nameAtt);
          if(it1==whatHave.end() || whatHave.size()==0) // not Duplicate
          {
              if((nameAtt=="PUBLIC" || nameAtt=="PRIVATE" || nameAtt=="PROTECTED"))// not more Access
              {
                  if((oneAccess)&&(!errorAccess)){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                     return false ;
                  }
                 oneAccess = true ;
              }
              else if(nameAtt=="INTERNAL"){ // no more Access
                 set<string>::iterator it3 = whatHave.find("PRIVATE");
                 set<string>::iterator it4 = whatHave.find("PUBLIC");
                 if((it3!=whatHave.end() || it4!=whatHave.end())&&!errorAccess){
                     cout <<"error : More than one protection modifier"<<endl;
                     errorAccess = true ;
                     return false ;
                 }
              }
              else if(nameAtt=="CONST"){ // no more Access
                 set<string>::iterator it4 = whatHave.find("STATIC");
                 if(it4!=whatHave.end()){
                     cout <<"error : The constant  cannot be marked static"<<endl;
                     return false ;
                 }
                 else {
                    set<string>::iterator it41 = whatHave.find("READONLY");
                    if(( it41!=whatHave.end())&& !errorConst){
                     cout <<"error : The modifier 'readonly' is not valid for this item"<<endl;
                                         errorConst = true  ;
                                         return false ;

                    }
                    else {
                          set<string>::iterator it42 = whatHave.find("VOLATILE");
                          if(it42!=whatHave.end()){
                            cout <<"error : The modifier 'volatile' is not valid for this item"<<endl;
                            return false ;
                          }

                    }
                 }

              }
              else if(nameAtt=="STATIC"){
                  set<string>::iterator it4 = whatHave.find("CONST");
                 if(it4!=whatHave.end()){
                     cout <<"error : const field requires a value to be provided"<<endl;
                     return false ;
                 }

              }
              else if(nameAtt=="READONLY"){
                  set<string>::iterator it4 = whatHave.find("CONST");
                  if(it4!=whatHave.end()){
                     cout <<"error : const field requires a value to be provided"<<endl;
                     return false ;
                 }
                 else {
                   set<string>::iterator it45 = whatHave.find("VOLATILE");
                  if(it45!=whatHave.end()){
                     cout <<"error : field cannot be both volatile and readonly"<<endl;
                     return false ;
                 }


                 }
              }
              else if(nameAtt=="VOLATILE"){
                   set<string>::iterator it45 = whatHave.find("READONLY");
                  if(it45!=whatHave.end()){
                     cout <<"error : field cannot be both volatile and readonly"<<endl;
                     return false ;
                 }
                 else {
                    set<string>::iterator it42 = whatHave.find("CONST");
                  if(it42!=whatHave.end()){
                     cout <<"error : const field requires a value to be provided"<<endl;
                     return false ;
                 }
                 }
              }



          }
          else if(!errorDuplicate)
          {
              errorDuplicate = true ;
              cout << "error : Duplicate '"<<nameAtt<<"' modifier" <<endl ;
              return false ;
          }
        }
        else
        {
          cout << "error : The modifier '"<<nameAtt<<"' is not valid for this item"<<endl;
          return false ;
        }


    }
      whatHave.insert(nameAtt);
      return true ;
}
Attribute::~Attribute()
{
    //dtor
}
