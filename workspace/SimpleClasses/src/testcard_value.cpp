/*
 * testcard.cpp
 *
 *  Created on: Dec 11, 2015
 *      Author: rtakacsux
 */

#include "card_value.h"
#include <iostream>

int main2(){
	try{
		card_value any;
		card_value specific(1);
		card_value another(specific);

		any.send_to(std::cout);
		std::cout << any;

		specific.send_to(std::cout);
		std::cout << specific;

		any = specific;
		any.send_to(std::cout);
		std::cout << any;

		std::cin >> any;
		std::cout << any;

		card_value yac(card_value::five, card_value::heart);

		//std::cout << any == specific;
		bool equals = any==specific;
		std::cout << "any==specific " << equals;

	}catch(...){
		std::cerr << "An exception was thrown.\n";
	}
	return 0;
}


