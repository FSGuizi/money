#include "gtest/gtest.h"

#include "Money.h"
#include "Dollar.h"
#include "Franc.h"

TEST(MoneyTest, Equality){

    ASSERT_TRUE(Dollar(5) == Dollar(5));
    ASSERT_FALSE(Dollar(5) == Dollar(6));
    ASSERT_TRUE(Franc(5) == Franc(5));
    ASSERT_FALSE(Franc(5) == Franc(6));

}

