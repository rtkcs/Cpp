/*
 * testcard.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: rtakacsux
 */


#include <iostream>
#include "card_value.h"
#include "card.h"

int main4(){
	try{
		card c1(card_value(12));

		card_value cv21(21);
		card c2(cv21);

		bool isSame = c1.is_same(c2);
		std::cout << "c1 si_same c2 " << std::boolalpha << isSame  << "\n";

		card cIn(std::cin);

		std::cout << c1.get_value();
		c1.send_to(std::cout);

		std::cout << "std::cout << " << c1;
		std::cout << "std::cout << " << c2;

		card c3(card_value::four, card_value::spade);


	} catch(...){
		std::cerr << "An exception has been thrown.\n";
	}

	return 0;
}
