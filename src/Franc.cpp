#include "Franc.h"                                                                                                               

Franc::Franc(const int &amount, const string &Currency)
	: Money(amount, Currency)
{
}

/*string Franc::currency() {
	return Currency; 
}

Money* Franc::times(const int &multiplier){
	return new Money(amount * multiplier, Currency);                                                                             
}*/

Franc::~Franc(){
}
