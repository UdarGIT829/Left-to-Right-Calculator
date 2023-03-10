//iostream for Terminal I/O
#include <iostream>

//string for converting function results for Terminal I/O
#include <string>

#include "IntegerOperators.hpp"

#include "DecimalOperators.hpp"

#include "Typechecking.hpp"


int main() {
  // TESTING SUM FUNCTIONS
  //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
    //Initialize Calculators
  IntegerCalculator myIntCalc;
  DecimalCalculator myDecCalc;
  Calculator* myCalculator;
    //Declare integer and decimal inputs
  std::string myIntInput1 = "5";
  std::string myIntInput2 = "13";

  std::string myDecInput1 = "5.00001";
  std::string myDecInput2 = "29.999998";

  myCalculator = &myIntCalc;
  myCalculator->sum(myIntInput1, myIntInput2);
  std::string myIntResult = myCalculator->result;

  myCalculator = &myDecCalc;
  myCalculator->sum(myDecInput1, myDecInput2);
  std::string myDecResult = myCalculator->result;

  std::cout << "The int sum is: " << myIntResult << std::endl;
  std::cout << "The double sum is: " << myDecResult << std::endl;

  std::cout << std::endl;

  myCalculator = &myIntCalc;
  myCalculator->difference(myIntInput1, myIntInput2);
  myIntResult = myCalculator->result;

  myCalculator = &myDecCalc;
  myCalculator->difference(myDecInput1, myDecInput2);
  myDecResult = myCalculator->result;

  std::cout << "The int difference is: " << myIntResult << std::endl;
  std::cout << "The double difference is: " << myDecResult << std::endl;

  std::cout << std::endl;

  myCalculator = &myIntCalc;
  myCalculator->product(myIntInput1, myIntInput2);
  myIntResult = myCalculator->result;

  myCalculator = &myDecCalc;
  myCalculator->product(myDecInput1, myDecInput2);
  myDecResult = myCalculator->result;

  std::cout << "The int product is: " << myIntResult << std::endl;
  std::cout << "The double product is: " << myDecResult << std::endl;
  //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
  return 0;
}
