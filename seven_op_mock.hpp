#ifndef __MOCK_OP__
#define __MOCK_OP__

#include <string>
#include "base.hpp"

class SevenOpMock: public Base {
    public:
        SevenOpMock() { };

        virtual double evaluate() { return 7.5; }
        virtual std::string stringify() { return "7.5"; }
};

#endif //__MOCK_OP__

