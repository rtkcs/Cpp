/*
 * testdeck.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: rtakacsux
 */

#include "deck.h"

#include <cstdlib>

int main(){
	try{
		std::srand(time(0));
		deck d;
		d.shuffle();
		std::cout << d;

	}catch (...){
		std::cerr << "An exception was caught in testdeck.cpp main()" << std::endl;
	}
	return 0;
}


