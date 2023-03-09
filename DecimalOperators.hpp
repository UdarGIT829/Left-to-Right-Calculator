//Header for basic decimal operations
#ifndef DECIMALOPERATORS_H
#define DECIMALOPERATORS_H
//Include Abstract Class for Calculator
#include "IntegerOperators.hpp"

class DecimalCalculator : public Calculator{

    public:
        double sum(double arg1, double arg2){
            double thisSum = arg1 + arg2;
            return thisSum;
            }

        // double difference(double arg1, double arg2){
        //     double thisDifference = arg1 - arg2;
        //     return thisDifference;
        //     }
        
        // double product(double arg1, double arg2){
        //     double thisProduct = arg1 * arg2;
        //     return thisProduct;
        //     }
};
#endif