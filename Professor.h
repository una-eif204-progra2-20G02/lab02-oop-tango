//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H

#include "Person.h"
#include<iostream>
#include<sstream>
using namespace std;

class Professor: public Person {
private:
double monthlySalary;
double commissionRate;

public:

///Constructores/////
Professor();
Professor(string , string, int, double, double);
///Metodos Get/////
virtual double getMonthySalary();
virtual double getCommissionRate();
///Metodos set/////
virtual void setMonthySalary(double);
virtual void setCommissionRate(double);
// otros Metodos ///
double salary();
string toString();
double commission();

};

#endif //LAB02_OOP_PROFESSOR_H
