#include <iostream>
#include <stdlib.h>
#include "Dollar.h"

int main(int argc, char** argv) {
	
	if(argc < 3){
		std::cout << "Use: ./runDollar <amount> <multiplier>" << std::endl;
		return (EXIT_FAILURE);
	}	
	return 0;
}

