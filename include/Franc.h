//  Franc.h

#ifndef FRANC_H                                                                                              
#define FRANC_H                                                                                              
    
#include "Money.h"                                                                                                          
class Franc : public Money                                                                                             

{
public:
	Franc(const int &amount, const string &Currency);
	
//	virtual string currency();
	
//	virtual Money* times(const int &multiplier);
	
	~Franc();                                                                                           
};                                                                                                            
                                                                                                              
#endif
