//============================================================================
// Name        : FloatingPointMoreMeans.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include <iostream>
#include <exception>
#include <cmath>

int mainFloating5(){


	try{

		double value(0.0);
		double total(0.0);
		double rootMeanSquare(0.0);
		double harmonicMean(0.0);
		int count(0);
		double top(0.0);

		std::cout << "Type in a number. ";
		std::cout << "A value greater than this value ends the program.)";
		std::cin >> top;

		if(not std::cin) throw std::exception();

		do{

			std::cout << "Type in a number. ";
			std::cout << "(A value greater than "<< top <<" ends the program.)";
			std::cin >> value;

			if(not std::cin) throw std::exception();
			if(top < value) break;
			++count;

			total += value;
			rootMeanSquare += value * value;
			harmonicMean += 1/value;

		}while(true);

		std::cout << "\nYou entered " << count << " numbers.\n\n";

		if(count>0){

			std::cout << "\n1. arithmetic mean\n";
			std::cout << "2. harmonic mean\n";
			std::cout << "3. root mean square\n";

			int mean(0);
			std::cin >> mean;
			if(not std::cin) throw std::exception();

			if(mean==1){

				std::cout << "\nThe arithmetic mean of the number input is " << total/count << "\n";

			}else if(mean==2){

				harmonicMean /= count;
				harmonicMean = 1 / harmonicMean;
				std::cout << "\nThe harmonic mean of the number input is " << harmonicMean << "\n";

			}else if(mean==3){

				rootMeanSquare /= count;
				rootMeanSquare = std::sqrt(rootMeanSquare);
				std::cout << "\nThe Root Mean Square of the number input is " << rootMeanSquare << "\n";
			}

		}else{
			std::cout << "\nYou are not entered any number, so the mean can not be computed.\n";
		}

	}catch(...){
		std::cerr << "****An Exception was thrown.***";
	}

	return 0;
}
