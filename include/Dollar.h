//  Dollar.h

#ifndef DOLLAR_H                                                                                              
#define DOLLAR_H                                                                                              

#include "Money.h"                                                                                                              
class Dollar : public Money                                                                                              
{
public:
	Dollar(int amount);
	Dollar times(int multiplier);
	~Dollar();                                                                                           
};                                                                                                            
                                                                                                              
#endif         
