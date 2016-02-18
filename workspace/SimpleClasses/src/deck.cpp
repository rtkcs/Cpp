/*
 * deck.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: rtakacsux
 */

#include "algorithm"

#include "card.h"
#include "card_value.h"
#include "deck.h"

int const deck::cards;

void deck::copy_from(deck const & source){
	for(int i(0); i != cards; ++i){
		pack[i] = source.pack[i];
		position = source.position;
	}
}

deck::deck():position(0){
	for(int i(0); i != cards; ++i){
		pack[i] = card_value(i);
	}
}

deck::deck(std::istream & in):position(0){
	for(int i(0); i != cards; ++i) in >> pack[i];
}

deck::~deck(){
	std::clog << "Desk is destroyed." << std::endl;
}

card_value deck::next(){
	card_value value(pack[position]);
	++position;
	if(position == cards) position = 0;
	return value;
}

void deck::top(){
	position = 0;
}

void deck::shuffle(){
	std::random_shuffle(pack, pack+cards);
}

card_value deck::get_card(int pos)const{
	if( pos < 0 or pos > (cards - 1) ){
		throw std::range_error("No such position in deck");
	}
	return pack[pos];
}

std::ostream & operator<<(std::ostream & out, deck const & d){

	out << "********** DECK START **********" << std::endl;
	for(int i(0); i != deck::cards; ++i){
		out << d.get_card(i) << std::endl;
	}
	out << "********** DECK END **********" << std::endl;
	return out;
}

