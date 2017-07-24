//  Dollar.h

#ifndef DOLLAR_H                                                                                              
#define DOLLAR_H                                                                                              

#include "Money.h"                                                                                                              
class Dollar : public Money                                                                                              
{
public:
	Dollar(const int &amount, const std::string& Current);

	~Dollar();                                                                                           
};                                                                                                            
                                                                                                              
#endif // DOLLAR_H
