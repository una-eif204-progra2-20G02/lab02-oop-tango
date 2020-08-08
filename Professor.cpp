//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"


////////////Constructor sin parametros/////////////////////////////
Professor::Professor(){}


////////////Constructor con parametros //////////
Professor::Professor(string firstname,string lastname, int documentid, double _mounthlySalary, double _commissionRate): Person(firsName, lastName, documentid), montlySalary(_monthlySalary), commissionRate(_commissionRate){
}


///////////metodos Get////////////////////////////////////
double Professor::getMonthySalary(){ return monthlySalary; }

double Professor::getCommissionRate(){ return commissionRate; }


///////////metodos set////////////////////////////////////
void Professor::setCommissionRate(double commissionRate)
{ this->commissionRate=commissionRate; }

void Professor::setMonthySalary(double monthlySalary)  {
  this->monthlySalary=monthlySalary; 
  }

///////////Otros metodos////////////////////////////////////
double Professor::salary(){return 0;}

string Professor::toString(){

}