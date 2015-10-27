//============================================================================
// Name        : Text.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include <exception>
#include <iostream>

int mainText(){

	try{
		char c(0);
		int count(0);
		std::cout << "Please type in a line of text.\n";

		do{

			c = std::cin.get();
			//std::cin >> c; // this type of expression does not read white space characters
			if(not std::cin) throw std::exception();
			if(c == '\n') break;
			++count;
			std::cout << c;
		}while(true);

		std::cout << "\nYou typed in " << count << " characters.\n";

	}catch(...){
		std::cerr << "***An exception was thrown***\n";
	}
	return 0;
}


