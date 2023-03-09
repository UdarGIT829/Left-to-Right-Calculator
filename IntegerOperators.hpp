//Header for basic integer operations
#ifndef INTEGEROPERATORS_H
#define INTEGEROPERATORS_H
//Include Abstract Class for Calculator
#include "AbstractionCalculator.hpp"

class IntegerCalculator: public Calculator{

    public:
        void sum(std::string arg1, std::string arg2){
            
            int thisSum = std::stoi(arg1) + std::stoi(arg2);
            this->result = std::to_string(thisSum);
        }

        void difference(std::string arg1, std::string arg2){
            
            int thisDifference = std::stoi(arg1) - std::stoi(arg2);
            this->result = std::to_string(thisDifference);
        }

        void product(std::string arg1, std::string arg2){
            
            int thisProduct = std::stoi(arg1) * std::stoi(arg2);
            this->result = std::to_string(thisProduct);
        }

        // int product(int arg1, int arg2){
        //     int thisProduct = arg1 * arg2;
        //     return thisProduct;
        // }
};
#endif