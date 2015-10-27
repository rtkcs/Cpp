//============================================================================
// Name        : ExceptionsHandling.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include <exception>
#include <iostream>

int main4(){

	try{
		int i(0);
		int biggest(0);

		do{
			std::cout << "Type in a positive integer ";
			std::cout << "(zero or negative integer ends the program): ";
			std::cin >> i;

			if(not std::cin) {
				std::cout << "The largest number input was " << biggest << "\n";
				throw std::exception();
			}
			if(i < 1) break;
			if( biggest < i ) biggest = i;

		}while(true);

		std::cout << "The largest number input was " << biggest << "\n";
	}catch(...){
		std::cerr << "*** An exception was thrown. ***\n";
	}

	return 0;
}
