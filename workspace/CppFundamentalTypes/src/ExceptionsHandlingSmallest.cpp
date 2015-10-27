//============================================================================
// Name        : ExceptionsHandling.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include <exception>
#include <iostream>

int main5(){

	try{
		int i(0);
		int biggest(0);
		int smallest(2147418112);

		do{
			std::cout << "Type in a positive integer ";
			std::cout << "(zero or negative integer ends the program): ";
			std::cin >> i;

			if(not std::cin) {
				std::cout << "The largest number input was " << biggest << "\n";
				std::cout << "The smallest number input was " << smallest << "\n";
				throw std::exception();
			}
			if(i < 1) break;
			if( biggest < i ) biggest = i;
			if( i < smallest ) smallest = i;

		}while(true);

		std::cout << "The largest number input was " << biggest << "\n";
		std::cout << "The smallest number input was " << smallest << "\n";
	}catch(...){
		std::cerr << "*** An exception was thrown. ***\n";
	}

	return 0;
}
