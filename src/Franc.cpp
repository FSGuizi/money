#include "Franc.h"                                                                                                               
Franc::Franc(int amount) : Money(amount){
}
Franc Franc::times(int multiplier){
	return Franc(amount * multiplier);                                                                             
}
Franc::~Franc(){
}
