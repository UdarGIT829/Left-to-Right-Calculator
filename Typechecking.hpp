//Header for typechecking
#ifndef TYPECHECKING_HPP
#define TYPECHECKING_HPP

#include <iostream>
#include <string>

bool checkForNumber (auto arg){
    return std::isdigit(arg[0]);
}

bool checkForInt (auto arg){
  if(checkForNumber(arg)){
    return std::stoi(arg) == std::stod(arg);
  }
  return false;
}

bool checkForFloat (auto arg){
  if(checkForNumber(arg)){
    return std::stoi(arg) != std::stod(arg);
  }
  return false;
}

bool checkForDouble (auto arg){
  if(checkForNumber(arg)){
    return std::stoi(arg) != std::stod(arg);
  }
  return false;
}

#endif