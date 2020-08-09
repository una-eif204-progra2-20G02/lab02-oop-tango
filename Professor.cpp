//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"


////////////Constructor sin parametros/////////////////////////////
Professor::Professor():Person()
{
  monthlySalary= 0;
  commissionRate= 0;
}


////////////Constructor con parametros //////////
Professor::Professor(string firstname,string lastname, int documentid, double _monthlySalary, double _commissionRate): Person(firstname, lastname, documentid), monthlySalary(_monthlySalary), commissionRate(_commissionRate){
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
double Professor::salary(){
  return monthlySalary;
  }


//-----String toString()----------------------------------------------
string Professor::toString()
{
stringstream s;
s<<"Professor Information: "<< firstname <<"\t"<< lastname << endl;
s<<"ID: "<< documentid << endl;
s<<"Monthly Salary: " << monthlySalary << endl;
return s.str();

}