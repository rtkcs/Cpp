//============================================================================
// Name        : ExceptionsHandling.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include <exception>
#include <iostream>

int main8(){

	try{
		int i(0);
		int biggest(-2147483647);
		int smallest(2147483647);
		int count(0);
		int total(0);

		do{
			std::cout << "Type in a positive or negative integer ";
			std::cout << "(zero ends the program): ";
			std::cin >> i;

			if(not std::cin) {
				std::cout << "Number of inputs was " << count << "\n";

				if(count != 0){
					std::cout << "The largest number input was " << biggest << "\n";
					std::cout << "The smallest number input was " << smallest << "\n";
					std::cout << "The arithmetic mean of inputs is "<< total <<"/"<< count << " ~ " << total / count << "\n";
				}

				throw std::exception();
			}
			if(i == 0) break;
			if( biggest < i ) biggest = i;
			if( i < smallest ) smallest = i;
			++count;
			total += i;
		}while(true);

		std::cout << "Number of inputs was " << count << "\n";

		if(count != 0){
			std::cout << "The largest number input was " << biggest << "\n";
			std::cout << "The smallest number input was " << smallest << "\n";
			std::cout << "The arithmetic mean of inputs is "<< total <<"/"<< count << " ~ " << total / count << "\n";
		}


	}catch(...){
		std::cerr << "*** An exception was thrown. ***\n";
	}

	return 0;
}
