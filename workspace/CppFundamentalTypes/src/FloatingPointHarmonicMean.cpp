//============================================================================
// Name        : FloatingPointHarmonicMean.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include <iostream>
#include <exception>

int mainFloating2(){


	try{
		double total(0.0);
		double value(0.0);
		double harmonicMean(0.0);
		int count(0);

		do{

			std::cout << "Type in a number. ";
			std::cout << "(A value greater than 9999 ends the program.)";
			std::cin >> value;

			if(not std::cin) throw std::exception();
			if(9999 < value) break;
			++count;
			total += value;

			harmonicMean += 1/value;

		}while(true);

		if(count>0){

			harmonicMean /= count;
			harmonicMean = 1 / harmonicMean;

			std::cout << "\nThe harmonic mean of the number input is " << harmonicMean << "\n";
		}else{
			std::cout << "\nYou are not entered any number, so the mean can not be computed.\n";
		}

	}catch(...){
		std::cerr << "****An Exception was thrown.***";
	}

	return 0;
}
