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
double monthSalary;
double commission;

public:

Professor();
Professor(double , double);
Professor(string const firsname, string const lastname, int documentid, double monthSalary, double commission);
virtual void ~Professor();
virtual double getMonthySalary();
virtual void setMonthySalary(double monthSalary);
virtual double getCommissionRate();
virtual void setCommissionRate(double commission);
double salary();

string toString();


};

#endif //LAB02_OOP_PROFESSOR_H
