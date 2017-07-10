#include <iostream>
#include <stdlib.h>
#include "Dollar.h"

int main(int argc, char** argv) {
	
	if(argc < 3){
		std::cout << "Use: ./runDollar <amount> <multiplier>" << std::endl;
		return (EXIT_FAILURE);
	}	
	Dollar dollar(atoi(argv[1]));
	Dollar dollarM = dollar.times(atoi(argv[2]));	
	std::cout << atoi(argv[1]) << " * " << atoi(argv[2]) << " = " <<  dollarM.amount << std::endl;
	return 0;
}

