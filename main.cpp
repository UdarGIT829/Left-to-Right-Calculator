//iostream for Terminal I/O
#include <iostream>

//string for converting function results for Terminal I/O
#include <string>

#include "IntegerOperators.hpp"

#include "DecimalOperators.hpp"

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
  //   //Initialize Calculators
  // IntegerCalculator myIntCalc = IntegerCalculator();
  // DecimalCalculator myDecCalc = DecimalCalculator();
  //   //Declare integer and decimal inputs
  // int myIntInput1 = 5;
  // int myIntInput2 = 13;

  // double myDecInput1 = 5.00001;
  // double myDecInput2 = 29.999998;

  // int myIntResult = myIntCalc.sumOfInts(myIntInput1, myIntInput2);
  // double myDecResult = myDecCalc.sumOfDecimals(myDecInput1, myDecInput2);

  // std::cout << "The int sum is: " << std::to_string(myIntResult) << std::endl;
  // std::cout << "The double sum is: " << std::to_string(myDecResult) << std::endl;

  // myIntResult = myIntCalc.differenceOfInts(myIntInput1, myIntInput2);
  // myDecResult = myDecCalc.differenceOfDecimals(myDecInput1, myDecInput2);

  // std::cout << "The int difference is: " << std::to_string(myIntResult) << std::endl;
  // std::cout << "The double difference is: " << std::to_string(myDecResult) << std::endl;

  // myIntResult = myIntCalc.productOfInts(myIntInput1, myIntInput2);
  // myDecResult = myDecCalc.productOfDecimals(myDecInput1, myDecInput2);

  // std::cout << "The int product is: " << std::to_string(myIntResult) << std::endl;
  // std::cout << "The double product is: " << std::to_string(myDecResult) << std::endl;
  //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
  // TESTING TYPE CHECKING
  // int myIntInput1 = 5;
  // double myDecInput1 = 5.00001;
  // std::cout << checkForDouble(myDecInput1) << std::endl;
  //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
  return 0;
}
