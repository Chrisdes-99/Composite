#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {

    private:
        double val;
        double val2;
    public:
        Mult(double value,double value_2) : val(value),val2(value_2) { }
        virtual double evaluate() { return val * val2; }
        virtual std::string stringify() { return std::to_string(val) + "*" + std::to_string(val2); }
};

#endif //__MULT_HPP__
