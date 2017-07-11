//  Franc.h

#ifndef FRANC_H                                                                                              
#define FRANC_H                                                                                              
    
#include "Money.h"                                                                                                          
class Franc : public Money                                                                                             
{
public:
	Franc(const int &amount);
	Franc times(const int &multiplier);
	~Franc();                                                                                           
};                                                                                                            
                                                                                                              
#endif         
