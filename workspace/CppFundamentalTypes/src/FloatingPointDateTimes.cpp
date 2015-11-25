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

int mainFloatinPoint(){


	try{

		int hour1(0);
		int minute1(0);
		int second1(0);

		int hour2(0);
		int minute2(0);
		int second2(0);

		int seconds1(0);
		int seconds2(0);
		int secondsDiff(0);

		int hourDiff(0);
		int minuteDiff(0);
		int secondDiff(0);

		std::cout << "First time: \n";
		std::cout << "Type in an hour ";
		std::cin >> hour1;
		if(not std::cin) throw std::exception();

		std::cout << "\nType in an minute ";
		std::cin >> minute1;
		if(not std::cin) throw std::exception();

		std::cout << "\nType in an second ";
		std::cin >> second1;
		if(not std::cin) throw std::exception();

		std::cout << "\n\nSecond time: \n";
		std::cout << "\nType in an hour ";
		std::cin >> hour2;
		if(not std::cin) throw std::exception();

		std::cout << "\nType in an minute ";
		std::cin >> minute2;
		if(not std::cin) throw std::exception();

		std::cout << "\nType in an second ";
		std::cin >> second2;
		if(not std::cin) throw std::exception();


		seconds1 = second1 + minute1*60 + hour1*3600;
		seconds2 = second2 + minute2*60 + hour2*3600;

		secondsDiff = seconds2 - seconds1;

		hourDiff = secondsDiff / 3600;
		minuteDiff = secondsDiff % 3600;
		secondDiff = minuteDiff % 60;
		minuteDiff = minuteDiff / 60;

		std::cout << "The difference between these two times ";
		std::cout << hour1 << ":" << minute1 << ":" << second1 << " - ";
		std::cout << hour2 << ":" << minute2 << ":" << second2;
		std::cout << " is:" << hourDiff << ":" << minuteDiff << ":" << secondDiff;



	}catch(...){
		std::cerr << "****An Exception was thrown.***";
	}

	return 0;
}
