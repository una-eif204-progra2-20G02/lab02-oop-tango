//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor(){}

Professor::Professor(double mounthlySalary , double commissionRate){}
/*
Professor::Professor(string firstname,string lastname, int documentId, double mounthlySalary, double commissionRate){
}
*/

double Professor::getMonthySalary(){ return monthlySalary; }

void Professor::setMonthySalary(double monthlySalary)  {this->monthlySalary=monthlySalary;}

double Professor::getCommissionRate(){ return commissionRate; }

void Professor::setCommissionRate(double commissionRate)
{ this->commissionRate=commissionRate; }

double Professor::salary(){return 0;}

string Professor::toString()
{

}