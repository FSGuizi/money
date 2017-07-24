// Money.h

#ifndef MONEY_H
#define MONEY_H

#include <string>
#include "Expression.h"

class Money : public Expression{
protected:
	int amount;
	std::string Currency;
public:
	Money(const int &amount, const std::string& Currency);

	virtual std::string currency();

	virtual Money* times(const int& multiplier);

	static Money* dollar(const int& amount);

    	static Money* franc(const int& amount);

	bool operator ==(const Money& money) const;
	
 	Expression* operator+(const Money& addend);	
	
	virtual ~Money();
};

#endif // MONEY_H
