//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"


Person::Person()
{
string firstname = "Sin Definir";
string lastname  = "Sin Definir";
int documentid   =             0;


}
Person::Person(string firstname, string lastname, int documentid)
{
this->firstname  =  firstname;
this->lastname   =   lastname;
this->documentid = documentid;
}




void Person::setFirstname(string firstname){ this->firstname  =  firstname;  }
void Person::setLastname(string lastname)  { this ->lastname   =  lastname;  }
void Person::setDocumentid(int documentid) {documentid=documentid;           }






Person::~Person(){}

