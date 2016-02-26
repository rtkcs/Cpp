/*
 * DynamicInstances.cpp
 *
 *  Created on: Feb 26, 2016
 *      Author: rtakacsux
 */

#include <algorithm>
#include <iostream>

#include "card.h"
#include "card_value.h"


int main(){

	int const numOfCards(3);
	card * d[numOfCards] = {};	//array of pointers to card

	try{

		for(int i=0; i != numOfCards; i++){
			d[i] = new card(card_value(i));	//everytime you use "new", you must also use "delete"
		}

		std::random_shuffle(d, d + numOfCards);
		for(int i=0; i!=numOfCards; i++){
			d[i]->send_to(std::cout);	// -> points to, these 2 line are identical
			(*d[i]).send_to(std::cout);
			std::cout << std::endl;
		}

	} catch(...){
		std::cerr << "An exception occurred" << std::endl;
	}

	for(int i=0; i!= numOfCards; i++){
		delete d[i];
	}
}
