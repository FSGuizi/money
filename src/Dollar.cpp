#include "Dollar.h"                                                                                                               
Dollar::Dollar(int amount){
	this->amount= amount;
}
void Dollar::times(int multiplier){
	this->amount *= multiplier;                                                                             
}
Dollar::~Dollar(){
}
