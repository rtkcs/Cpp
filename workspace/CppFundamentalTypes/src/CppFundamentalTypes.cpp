//============================================================================
// Name        : CppFundamentalTypes.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include <iostream>
using namespace std;

int main2() {
	int count(0);
	double total(0.0);

	while(true){
		std::cout << "Next value please: ";
		double value;
		std::cin >> value;
		if(value > 9999.0) break;
		++count;
		total += value;
	}

	std::cout << "\nYou input " << count << " values. \n";
	std::cout << "Their total is " << total << "\n";
	std::cout << "The arithmetic mean (average) of those value is " << total / count << ".\n";

	return 0;
}
