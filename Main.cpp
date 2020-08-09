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

  cout<<p1->toString();

Administrative *a1= new Administrative("Rolando", "Mena", 45879642, 400000);

  cout<<a1->toString();


  return 0;
}