//Header for basic decimal operations
#ifndef DECIMALOPERATORS_HPP
#define DECIMALOPERATORS_HPP
//Include Abstract Class for Calculator
#include "IntegerOperators.hpp"

class DecimalCalculator : public Calculator{

    public:
        void sum(std::string arg1, std::string arg2){
            double thisSum = std::stod(arg1) + std::stod(arg2);
            this->result = std::to_string(thisSum);
            }

        void difference(std::string arg1, std::string arg2){
            double thisDifference = std::stod(arg1) - std::stod(arg2);
            this->result = std::to_string(thisDifference);
        }
        
        void product(std::string arg1, std::string arg2){
            double thisProduct = std::stod(arg1) * std::stod(arg2);
            this->result = std::to_string(thisProduct);
        }
};
#endif