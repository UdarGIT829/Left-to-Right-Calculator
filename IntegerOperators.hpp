//Header for basic integer operations
#ifndef INTEGEROPERATORS_H
#define INTEGEROPERATORS_H
//Include Abstract Class for Calculator
#include "AbstractionCalculator.hpp"

class IntegerCalculator: public Calculator{

    public:
        int sum(int arg1, int arg2){
            int thisSum = arg1 + arg2;
            return thisSum;
        }

        // int difference(int arg1, int arg2){
        //     int thisDifference = arg1 - arg2;
        //     return thisDifference;
        // }

        // int product(int arg1, int arg2){
        //     int thisProduct = arg1 * arg2;
        //     return thisProduct;
        // }
};
#endif