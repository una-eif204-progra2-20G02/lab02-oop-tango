//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University 
{
  private:
  
  string name;
  Professor* professor;
  Administrative* administrative;
  vector<Professor>professorList;
  vector<Administrative>administrativeList;

  public:
  University();
  University(string, Professor*, Administrative*);
  string getName();
  void setName(string);
  Professor* getProfessor();
  void setProfessor(Professor*);
  Administrative* getAdministrative();
  void setAdministrative(Administrative*);
  

};


#endif //LAB02_OOP_UNIVERSITY_H
