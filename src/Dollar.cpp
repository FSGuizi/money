#include "Dollar.h"                                                                                                               
Dollar::Dollar(int amount){
	this->amount = amount;
}
Dollar Dollar::times(int multiplier){
	return Dollar(amount * multiplier);                                                                             
}
Dollar::~Dollar(){
}
