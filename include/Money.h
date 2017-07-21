// Money.h

#ifndef MONEY_H
#define MONEY_H

#include <string>
#include "Expression.h"

using namespace std;

class Money : public Expression{
protected:
	int amount;
	string Currency;
public:
	Money(const int &amount, const string &Currency);

	virtual string currency();

//	string toString();

	virtual Money* times(const int& multiplier);

	static Money* dollar(const int& amount);

    	static Money* franc(const int& amount);

	bool operator ==(const Money& money) const;
	
//	Money* operator+(const Money& addend) const;

 	Expression* operator+(const Money& addend);	
	
	virtual ~Money();
};

#endif // MONEY_H
