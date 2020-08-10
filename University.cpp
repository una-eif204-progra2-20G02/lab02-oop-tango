//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"


//---------------Constructor sin parámetros---------------------------------------
University::University(){}


//---------------Constructor con parámetros---------------------------------------
University::University(string _name, Professor* _professor, Administrative* _administrative):name(_name),professor(_professor), administrative(_administrative){}
//----------------Métodos get------------------------------------------------------
  string University::getName(){ return name; }
  Professor * University::getProfessor(){ return professor; }
  Administrative* University::getAdministrative(){ return administrative; }

//----------------Métodos set------------------------------------------------------

  void University::setName(string name){ this-> name = name; }
  void University::setProfessor(Professor* prof){ this->professor = prof; }
  void University::setAdministrative(Administrative* admin){this->administrative = admin; }

  