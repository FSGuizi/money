#include "Money.h"

Money::Money(const int &amount, const std::string& Currency)
: amount(amount), Currency(Currency)
{
}

std::string Money::currency()
{
	return Currency;
}

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

Expression* Money::operator+(const Money& addend) 
{
        return new Money(amount + addend.amount, Currency);
}

Money::~Money()
{
}
