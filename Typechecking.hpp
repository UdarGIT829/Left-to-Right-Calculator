//Header for typechecking
#ifndef TYPECHECKING_H
#define TYPECHECKING_H

#include <string>

bool checkForInt (auto arg){
  std::string thisType = typeid(arg).name();
  if(thisType == "i"){
    return true;
  }
  return false;
}

bool checkForFloat (auto arg){
  std::string thisType = typeid(arg).name();
  if(thisType == "f"){
    return true;
  }
  return false;
}

bool checkForDouble (auto arg){
  std::string thisType = typeid(arg).name();
  if(thisType == "d"){
    return true;
  }
  return false;
}

#endif