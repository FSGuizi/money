#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../src/Dollar.cpp"

using namespace testing;

TEST(DollarTest, Multiplication){
	
	Dollar* five = new Dollar(5);
	five->times(2);
	ASSERT_EQ(10, five->amount);

}

