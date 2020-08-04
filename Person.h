//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
#include <sstream>
using namespace std;
/**
 * Abstract Class of Person
 */

class Person 
{

protected:

string firstname;
string lastname;
int documentid;

public:

//Constructores
Person();
Person(string,string,int);

//Métodos get
string getFirstname();
string getLastname();
int getDocumentid();


//Métodos set
void setFirstname(string);
void setLastname(string);
void setDocumentid(int);

//Métodos virtuales puros
virtual double salary() = 0;
virtual string toString()=0;

//Destructor
virtual ~Person();

};


#endif //LAB02_OOP_PERSON_H
