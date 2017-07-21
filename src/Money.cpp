//#include <iostream>
//#include <sstream>
#include "Money.h"
//#include "Dollar.h"
//#include "Franc.h"

Money::Money(const int &amount, const string &Currency)
: amount(amount), Currency(Currency)
{
}

string Money::currency()
{
	return Currency;
}

/*string Money::toString()
{
	stringstream aux;
	aux << amount;
	return  aux.str() + " " + Currency;
}*/

Money* Money::times(const int& multiplier)
{
	return new Money(amount * multiplier, Currency);
}

Money* Money::dollar(const int& amount)
{
	return new Money(amount, "USD");
}

Money* Money::franc(const int& amount)
{
	return new Money(amount, "CHF");
}

bool Money::operator==(const Money& money) const
{
	return (amount == money.amount) && Currency == money.Currency;
}

/*Money* Money::operator+(const Money& addend) const
{
	return new Money(amount + addend.amount, Currency);
}*/

Expression* Money::operator+(const Money& addend) 
{
        return new Money(amount + addend.amount, Currency);
}

Money::~Money()
{
}
