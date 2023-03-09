//Header for abstract class for calculators
#ifndef ABSTRACTCALCULATOR_H
#define ABSTRACTCALCULATOR_H
#include <string>
class Calculator{
    public:
        std::string arg1;
        std::string arg2;
        std::string result;
        // Calculator();
        // virtual ~Calculator(){}
        virtual void sum(std::string arg1, std::string arg2) = 0;
        virtual void difference(std::string arg1, std::string arg2) = 0;
        virtual void product(std::string arg1, std::string arg2) = 0;
};
#endif