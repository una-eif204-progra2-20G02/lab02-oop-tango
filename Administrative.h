 //
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_ADMINISTRATIVE_H
#define LAB02_OOP_ADMINISTRATIVE_H
#include "Person.h"

class Administrative: public Person {
  private:
    double monthlySalary;
  public:
  //Constructores
    Administrative();
    Administrative(string, string, int, double);

    //Metodos 
    double getMonthlySalary();
    void setMonthlySalary(double);
    double salary();
    string toString();
};

#endif //LAB02_OOP_ADMINISTRATIVE_H
