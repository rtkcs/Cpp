/*
 * pack.cpp
 *
 *  Created on: Mar 3, 2016
 *      Author: rtakacsux
 */

#include "pack.h"

#include <algorithm>

#include "card.h"

int const pack::cards;	//define static member

void pack::top(){
	position = 0;
}

void pack::shuffle(){
	std::random_shuffle(pack_, pack_ + cards);
}

pack::pack():position(0), pack_(){	// pack_() - initializes the array to null pointers
	try{
		for(int i(0); i != cards; i++){
			pack_[i] = new card(card_value(i));
		}
	} catch(...){
		std::cerr << "An exception occured." << std::endl;
		for(int i(0); i != cards; i++)
			delete pack_[i];

		throw;
	}
	std::clog << "Pack of cards created." << std::endl;
}

pack::pack(std::istream & in):position(0), pack_(){
	try{
		for(int i(0); i != cards; i++){
			card_value const val(fgw::read<card_value>(in));
			pack_[i] = new card(val);
		}
	} catch(...){
		std::cerr << "An exception occurred." << std::endl;
		for(int i(0); i != cards; i++)
			delete pack_[i];
		throw;
	}
	std::clog << "Pack of cards created from input." << std::endl;
}

pack::~pack(){
	for(int i(0); i != cards; i++) delete pack_[i];
	std::clog << "Pack of cards destroyed." << std::endl;
}
