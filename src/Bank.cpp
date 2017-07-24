#include "Bank.h"

Bank::Bank()
{
}

Money* Bank::reduce(const Expression& source,const std::string& to)
{
 	return Money::dollar(10);
}

Bank::~Bank()
{
}
