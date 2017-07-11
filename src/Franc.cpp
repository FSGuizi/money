#include "Franc.h"                                                                                                               
Franc::Franc(const int &amount) : Money(amount){
}
Franc Franc::times(const int &multiplier){
	return Franc(amount * multiplier);                                                                             
}
Franc::~Franc(){
}
