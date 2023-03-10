//Header for dual calculator

#ifndef DUALCALCULATOR_HPP
#define DUALCALCULATOR_HPP

#include "IntegerOperators.hpp"

#include "DecimalOperators.hpp"

#include "Typechecking.hpp"

class DualCalculator {
//  Eventually inherit from IntegerCalculator and DecimalCalculator
//  for Interface Segregation Principle
    protected:
        IntegerCalculator myIntCalc;
        DecimalCalculator myDecCalc;
        Calculator* myCalculator;
        void useIntegerCalculator(){
            myCalculator = &myIntCalc;
        }
        void useDecimalCalculator(){
            myCalculator = &myDecCalc;
        }
    public:
        
        std::string sum(auto arg1, auto arg2){
            useDecimalCalculator();
            
            if(checkForNumber(arg1) && checkForNumber(arg2)){
            }
            else{
                throw std::invalid_argument( "received non-number value" );
            }
            if(checkForInt(arg1) && checkForInt(arg2)){
                useIntegerCalculator();
            }
            std::string result = "";
            myCalculator->sum(arg1, arg2);
            result = myCalculator->result;
            return result;
        }
        std::string difference(auto arg1, auto arg2){
            if(checkForNumber(arg1) && checkForNumber(arg2)){
            }
            else{
                throw std::invalid_argument( "received non-number value" );
            }
            if(checkForInt(arg1) && checkForInt(arg2)){
                useDecimalCalculator();
            }
            std::string result;
            myCalculator->difference(arg1, arg2);
            result = myCalculator->result;
            return result;
        }
        std::string product(auto arg1, auto arg2){
            if(checkForNumber(arg1) && checkForNumber(arg2)){
            }
            else{
                throw std::invalid_argument( "received non-number value" );
            }
            if(checkForInt(arg1) && checkForInt(arg2)){
                useDecimalCalculator();
            }
            std::string result;
            myCalculator->product(arg1, arg2);
            result = myCalculator->result;
            return result;
        }
};


#endif