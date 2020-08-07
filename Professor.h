//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H

#include "Person.h"
#include<string>
using namespace std;

class Professor: public Person {
private:
double monthlySalary;
double commissionRate;

public:

Professor();
Professor(double , double);
//Professor(string , string, int, double, double);
virtual double getMonthySalary();
virtual void setMonthySalary(double);
virtual double getCommissionRate();
virtual void setCommissionRate(double);
double salary();
string toString();


};

#endif //LAB02_OOP_PROFESSOR_H
