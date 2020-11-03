#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "rand.hpp"
#include "mult.hpp"
#include "div.hpp"


TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpString){
    Op* test = new Op(10);
    EXPECT_EQ("10.000000",test->stringify());
}

TEST(OpTest,RandomValue){
    Rand* randtest = new Rand();
    EXPECT_NEAR(83,randtest->evaluate(),0);
}

TEST(OpTest,MultAnswer){
    Mult* answer = new Mult(3.2,5);
    EXPECT_EQ(answer->evaluate(),16);
}

TEST(OpTest,MultString){
    Mult* answer = new Mult(10.4,3.4);
    EXPECT_EQ("10.400000*3.400000",answer->stringify());
}

TEST(OpTest, DivAnswer){
    Div* answer = new Div(40.4,4);
    EXPECT_EQ(answer->evaluate(),10.1);
}

TEST(OpTest, DivString){
    Div* answer = new Div(99.99,33.33);
    EXPECT_EQ("99.990000/33.330000",answer->stringify());
}


#endif //__OP_TEST_HPP__
