#include "Money.h"

Money::Money(const int &amount){
	this-> amount = amount;
}
bool Money::operator ==(const Money &money) const{
	return amount == money.amount;
}
Money::~Money(){
}
