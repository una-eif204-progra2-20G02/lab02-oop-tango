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
  //------------Constructores-------------------------------------------------------
  University();
  University(string, Professor*, Administrative*);

 //------------Métodos get----------------------------------------------------------
  string getName();
  Professor* getProfessor();
  Administrative* getAdministrative();

  //-----------Métodos set----------------------------------------------------------
  void setAdministrative(Administrative*);
  void setName(string);
  void setProfessor(Professor*);

//----------------Métodos-----------------------------------------------------------
  void addProfessor(professor); 




};


#endif //LAB02_OOP_UNIVERSITY_H
