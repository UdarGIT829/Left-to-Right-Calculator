//iostream for Terminal I/O
#include <iostream>

//string for converting function results for Terminal I/O
#include <string>

#include "IntegerOperators.hpp"

// #include "DecimalOperators.hpp"

bool checkForInt (auto arg){
  std::string thisType = typeid(arg).name();
  if(thisType == "i"){
    return true;
  }
  std::cout << "The type is ";
  std::cout << typeid(arg).name() << std::endl;
  return false;
}

bool checkForFloat (auto arg){
  std::string thisType = typeid(arg).name();
  if(thisType == "f"){
    return true;
  }
  std::cout << "The type is ";
  std::cout << typeid(arg).name() << std::endl;
  return false;
}

bool checkForDouble (auto arg){
  std::string thisType = typeid(arg).name();
  if(thisType == "d"){
    return true;
  }
  std::cout << "The type is ";
  std::cout << typeid(arg).name() << std::endl;
  return false;
}


int main() {
  // TESTING SUM FUNCTIONS
  //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
    //Initialize Calculators
  IntegerCalculator myIntCalc;
  // DecimalCalculator myDecCalc;
  Calculator* myCalculator;
    //Declare integer and decimal inputs
  int myIntInput1 = 5;
  int myIntInput2 = 13;

  double myDecInput1 = 5.00001;
  double myDecInput2 = 29.999998;

  myCalculator = &myIntCalc;
  int myIntResult = myCalculator->sum(myIntInput1, myIntInput2);
  // myCalculator = &myDecCalc;
  // double myDecResult = myCalculator->sum(myDecInput1, myDecInput2);

  std::cout << "The int sum is: " << std::to_string(myIntResult) << std::endl;
  // std::cout << "The double sum is: " << std::to_string(myDecResult) << std::endl;

  // myCalculator = &myIntCalc;
  // myIntResult = myCalculator->difference(myIntInput1, myIntInput2);
  // myCalculator = &myDecCalc;
  // myDecResult = myCalculator->difference(myDecInput1, myDecInput2);

  // std::cout << "The int difference is: " << std::to_string(myIntResult) << std::endl;
  // std::cout << "The double difference is: " << std::to_string(myDecResult) << std::endl;

  // myCalculator = &myIntCalc;
  // myIntResult = myCalculator->product(myIntInput1, myIntInput2);
  // myCalculator = &myDecCalc;
  // myDecResult = myCalculator->product(myDecInput1, myDecInput2);

  // std::cout << "The int product is: " << std::to_string(myIntResult) << std::endl;
  // std::cout << "The double product is: " << std::to_string(myDecResult) << std::endl;
  //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
  return 0;
}
