// Expression.h

#ifndef EXPRESSION_H
#define EXPRESSION_H

class Money;

class Expression{
public:
	virtual Expression* operator+(const Money& addend);

	virtual ~Expression();	
};

#endif // EXPRESSION_H
