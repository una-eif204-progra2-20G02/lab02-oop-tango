//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

using namespace std;

int main() 
{

cout<<"Hola";


Professor *p1= new Professor("Marta","Rosales", 2098745,50000,700);

  //cout<<p1->toString();

cout<<endl<<endl;

Administrative *a1= new Administrative("Rolando", "Mena", 45879642, 400000);

  //cout<<a1->toString();

University* U1 = new University("UNA", p1,a1);
U1->addProfessor(p1);
cout<<U1->getListProfessor();



  return 0;
}