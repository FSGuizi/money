#include "Dollar.h"

Dollar::Dollar(const int &amount, const string &Currency)
	: Money(amount, Currency)
{
}

/*string Dollar::currency(){
	return Currency;
}

Money* Dollar::times(const int& multiplier){
	return new Money(amount * multiplier, Currency);                                                                         
}*/

Dollar::~Dollar(){
}
