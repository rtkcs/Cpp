/*
 * card_value.cpp
 *
 *  Created on: Dec 11, 2015
 *      Author: rtakacsux
 */


#include "card_value.h"
#include <iostream>
#include <exception>

card_value::card_value():data(0){
	std::clog << "Default card_value constructed.\n";
}

card_value::card_value(int i):data(i){
	std::clog << "card_value constructed from " << i << ".\n";
}

card_value::card_value(card_value const & c):data(c.data){
	std::clog << "card_valued constructed by copying.\n";
}

card_value::~card_value(){
	//std::clog << "card_value with value " << data << " destroyed.\n";
	std::clog << "card_value " << denomination_names[data%13] << " of " << suit_names[data/13] << " destroyed.\n";
}

card_value & card_value::operator =(card_value const & c){
	//std::clog << "card_value " << data << " replaced by " << c.data << ".\n";
	std::clog << "card_value " << *this << " replaced by " << c << ".\n";
	data = c.data;
	return *this;
}

bool card_value::operator==(card_value const & c)const{
	return data == c.data;
}

std::ostream & card_value::send_to(std::ostream & out) const{
	out << "card_value = " << denomination_names[data%13] << " of " << suit_names[data/13] << "\n";
	return out;
}

std::istream & card_value::get_from(std::istream & in){
	unsigned int temp;
	in >> temp;
	if(not in) throw std::exception();
	data = temp % 52;
	return in;
}

bool card_value::get_from(){
	std::cout << "Please input a value for card (an integer in the range 0-51 inclusive): ";
	try{
		get_from(std::cin);
	} catch(...){
		return false;
	}
	return true;
}


card_value::card_value(denomination d, suit s):data(s*13 + d){
	std::clog << "card_value constructed from attributes: " << denomination_names[data % 13] << " of " << suit_names[data / 13] << "s.\n";
}

char const * card_value::suit_names[4] = { "club", "diamond", "heart", "spade" };
char const * card_value::denomination_names[13] = { "ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king" };
