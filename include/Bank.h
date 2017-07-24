// Bank.h

#ifndef BANK_H
#define BANK_H

#include "Money.h"

class Bank {
public:
	Bank();

	Money* reduce(const Expression& source,const std::string& to);

	~Bank();
};

#endif // BANK_H

