//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
  private:
    double montlySalary;
  public:
    Administrative();
    Administrative(double);
    Administrative(string, string, int, double);
    double getMontlySalary();
    void setMontlySalary(double);
    double salary();
    string toString();
};
double Administrative::salary(){
  //Falta
}

string Administrative::toString(){
  //Falta
}

#endif //LAB02_OOP_ADMINISTRATIVE_H
