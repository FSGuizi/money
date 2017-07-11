#include "Dollar.h"

Dollar::Dollar(const int &amount): Money(amount){
}
Dollar Dollar::times(const int &multiplier){
	return Dollar(amount * multiplier);                                                                             
}
Dollar::~Dollar(){
}
