//  Dollar.h

#ifndef DOLLAR_H                                                                                              
#define DOLLAR_H                                                                                              

#include "Money.h"                                                                                                              
class Dollar : public Money                                                                                              
{
public:
	Dollar(const int &amount, const string &Current);

//	virtual string currency();

//	Money* times(const int &multiplier);

	~Dollar();                                                                                           
};                                                                                                            
                                                                                                              
#endif         
