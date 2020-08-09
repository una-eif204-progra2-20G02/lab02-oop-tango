  //
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative():Person(){}

Administrative::Administrative(string _firstName, string _lastName, int _documentid, double _monthlySalary): Person(_firstName, _lastName, _documentid), monthlySalary(_monthlySalary){}

double Administrative::getMonthlySalary(){
  return monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary){
  this->monthlySalary = monthlySalary;
}

double Administrative::salary(){
  return monthlySalary;
}

string Administrative::toString()
{
  stringstream x;

  x <<"Administrative information: "<<this->firstname<<endl;  
  x <<"Doc Id: "<<this->documentid<<endl;
  x<<"Montly Salary: "<<this->monthlySalary<<endl;

  return x.str();
  
}