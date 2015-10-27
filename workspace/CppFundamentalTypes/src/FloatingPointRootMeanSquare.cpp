//============================================================================
// Name        : FloatingPointHarmonicMean.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include <iostream>
#include <exception>
#include <cmath>

int mainFloatin4(){


	try{

		double value(0.0);
		double rootMeanSquare(0.0);
		int count(0);

		do{

			std::cout << "Type in a number. ";
			std::cout << "(A value greater than 9999 ends the program.)";
			std::cin >> value;

			if(not std::cin) throw std::exception();
			if(9999 < value) break;
			++count;

			rootMeanSquare += value * value;

		}while(true);

		if(count>0){

			rootMeanSquare /= count;
			rootMeanSquare = std::sqrt(rootMeanSquare);

			std::cout << "\nThe Root Mean Square of the number input is " << rootMeanSquare << "\n";
		}else{
			std::cout << "\nYou are not entered any number, so the mean can not be computed.\n";
		}

	}catch(...){
		std::cerr << "****An Exception was thrown.***";
	}

	return 0;
}
