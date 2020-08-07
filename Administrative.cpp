  //
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative(){

}
Administrative::Administrative(double _montlySalary):montlySalary(_montlySalary) {
  
}


Administrative::Administrative(string _firsName, string _lastName, int _documentid, double _montlySalary): Person(_firsName, _lastName, _documentid), montlySalary(_montlySalary){
  
}


double Administrative::getMontlySalary(){
  return montlySalary;
}

void Administrative::setMontlySalary(double montlySalary){
  this->montlySalary = montlySalary;
}

double Administrative::salary(){
  //Falta
}

string Administrative::toString(){
  //Falta
}