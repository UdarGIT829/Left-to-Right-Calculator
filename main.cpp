//iostream for Terminal I/O
#include <iostream>

//string for converting function results for Terminal I/O
#include <string>

#include "DualCalculator.hpp"



int main() {
  // TESTING SUM FUNCTIONS
  //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
    //Initialize Calculator
  DualCalculator myDualCalc;
    //Declare integer and decimal inputs
  std::string myIntInput1 = "5";
  std::string myIntInput2 = "13";

  std::string myDecInput1 = "5.22222";
  std::string myDecInput2 = "29.999998";

  std::cout << myDualCalc.sum(myIntInput1, myIntInput2) << std::endl;
  std::cout << myDualCalc.sum(myDecInput1, myDecInput2) << std::endl;
  std::cout << std::endl;

  std::cout << myDualCalc.difference(myIntInput1, myIntInput2) << std::endl;
  std::cout << myDualCalc.difference(myDecInput1, myDecInput2) << std::endl;
  std::cout << std::endl;

  std::cout << myDualCalc.product(myIntInput1, myIntInput2) << std::endl;
  std::cout << myDualCalc.product(myDecInput1, myDecInput2) << std::endl;
  std::cout << std::endl;


  //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
  return 0;
}
