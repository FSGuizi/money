//  Franc.h

#ifndef FRANC_H                                                                                              
#define FRANC_H                                                                                              
    
#include "Money.h"                                                                                                          
class Franc : public Money                                                                                             
{
public:
	Franc(int amount);
	Franc times(int multiplier);
	~Franc();                                                                                           
};                                                                                                            
                                                                                                              
#endif         
