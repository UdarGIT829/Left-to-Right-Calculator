#include <iostream>
#include <string>
using namespace std;

int sumOfInts(int arg1, int arg2){
  int thisSum = arg1 + arg2;
  return thisSum;
}

double sumOfDecimals(double arg1, double arg2){
  double thisSum = arg1 + arg2;
  return thisSum;
}

int main() {
  int myIntInput1 = 5;
  int myIntInput2 = 13;
  int myIntResult = sumOfInts(myIntInput1, myIntInput2);

  double myDecInput1 = 5.00001;
  double myDecInput2 = 29.999998;
  double myDecResult = sumOfDecimals(myDecInput1, myDecInput2);

  cout << "The int result is: " << to_string(myIntResult) << endl;
  cout << "The double result is: " << to_string(myDecResult) << endl;
  return 0;
}
