#ifndef __DIV_OP__
#define __DIV_OP__

#include <string>
#include "base.hpp"

class Div: public Base {
    public:
        Div() { };

        virtual double evaluate() { return 100.5 / 5 ; }
        virtual std::string stringify() { return "100.5 / 5"; }
};

#endif //__DIV_OP__

