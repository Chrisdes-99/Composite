#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"
#include <string>


class Div : public Base {
    private:
        double number;
        double number_2;
    public:
        Div(double value_1,double value_2) : number(value_1),number_2(value_2) { }
        virtual double evaluate() { return number / number_2; }
        virtual std::string stringify() { return std::to_string(number) + "/" + std::to_string(number_2); }
};

#endif //__DIV_HPP__
