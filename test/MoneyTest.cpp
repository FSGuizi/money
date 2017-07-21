//#include <iostream>
//#include <sstream>

#include <gtest/gtest.h>

#include "Money.h"
//#include "Dollar.h"
//#include "Franc.h"
#include "Bank.h"


TEST(MoneyTest, testDollarMultiplication){
	
	Money* five = Money::dollar(5);
	ASSERT_EQ(*Money::dollar(10), *five->times(2));
	ASSERT_EQ(*Money::dollar(15), *five->times(3));
	delete five;
}

TEST(MoneyTest, testFrancMultiplication){
	
	Money* five = Money::franc(5);
	ASSERT_EQ(*Money::franc(10), *five->times(2));
	ASSERT_EQ(*Money::franc(15), *five->times(3));
	delete five;

}

TEST(MoneyTest, testEquality){
	
	ASSERT_TRUE(*Money::dollar(5) == *Money::dollar(5));
	ASSERT_FALSE(*Money::dollar(5) == *Money::dollar(6));
	ASSERT_FALSE(*Money::franc(5) == *Money::dollar(5));
}

TEST(MoneyTest, testCurrency){

	EXPECT_STREQ("USD", Money::dollar(1)->currency().c_str());
	EXPECT_STREQ("CHF", Money::franc(1)->currency().c_str());

}

/*TEST(testMoney, testDifferentClassEquality){
	
	ASSERT_TRUE(Money(10, "CHF") == Franc(10, "CHF"));
}*/

TEST(MoneyTest, testSimpleAddition){
	
	Money* five = Money::dollar(5);
//	Money* ten = *five+*five;
//	std::cout << ten->toString() << std::endl;
//	ASSERT_EQ(*Money::dollar(10), *ten);
	Expression* sum = *five+*five; 	
	Bank* bank = new Bank();
	Money* reduced = bank->reduce(*sum, "USD");
	ASSERT_EQ(*Money::dollar(10),*reduced);
	
	
	delete five;
//	delete ten;
	delete sum;
	delete bank;
	delete reduced;
}
