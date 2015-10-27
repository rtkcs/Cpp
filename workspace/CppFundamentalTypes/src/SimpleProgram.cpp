//============================================================================
// Name        : SimpleProgram.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================
#include <iostream>

int main3(){

	int i(0);
	int biggest(0);

	do{
		std::cout << "Type in a positive number ";
		std::cout << " (zero or a negative number ends the program): ";
		std::cin >> i;
		if(i < 1) break;
		if( biggest < i ) biggest = i;

	}while(true);

	std::cout << "The largest number input was " << biggest << "\n";
	return 0;
}
