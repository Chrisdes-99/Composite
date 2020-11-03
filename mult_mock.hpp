#ifndef __MULT_OP__
#define __MULT_OP__

#include <string>
#include "base.hpp"

class Mult: public Base {
    public:
        Mult() { };

        virtual double evaluate() { return 10.3 * 5.2; }
        virtual std::string stringify() { return "10.3 * 5.2"; }
};

#endif //__MULT_OP__

