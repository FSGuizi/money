//  Dollar.h
#ifndef DOLLAR_H                                                                                              
#define DOLLAR_H                                                                                              
                                                                                                              
class Dollar                                                                                              
{
public:
    int amount;                                                                                   
	Dollar(int amount);
    void times(int multiplier);
	~Dollar();                                                                                           
};                                                                                                            
                                                                                                              
#endif         
