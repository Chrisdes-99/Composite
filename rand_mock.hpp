#ifndef __RAND_OP__
#define __RAND_OP__

#include <string>
#include "base.hpp"
#include <stdlib.h>

class Rand: public Base {
    public:
        Rand() { };

        virtual double evaluate() { return rand() % 100; }
        virtual std::string stringify() { return "rand() % 100";}
};

#endif //__RAND_OP__

