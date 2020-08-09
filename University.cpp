//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(){}

University::University(string _name, Professor* _professor, Administrative* _administrative):name(_name),professor(_professor), administrative(_administrative){}

  string University::getName(){ return name; }

  void University::setName(string name){this-> name = name; }

  Professor * University::getProfessor(){return professor; }

  void University::setProfessor(Professor* prof){ this->professor = prof; }

  Administrative* University::getAdministrative(){ return administrative; }

  void University::setAdministrative(Administrative* admin){this->administrative = admin; }