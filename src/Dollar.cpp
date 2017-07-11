#include "Dollar.h"

Dollar::Dollar(int amount): Money(amount){
}
Dollar Dollar::times(int multiplier){
	return Dollar(amount * multiplier);                                                                             
}
Dollar::~Dollar(){
}
