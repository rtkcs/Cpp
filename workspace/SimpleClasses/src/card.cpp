/*
 * card.cpp
 *
 *  Created on: Feb 17, 2016
 *      Author: rtakacsux
 */
#include <iostream>
#include "card.h"
#include "card_value.h"

card::card(card_value cv):value_(cv){
	std::clog << "Card instance created from " << cv << ".\n";
}
card::~card(){
	std::clog << "The Card " << value_ << " card destroyed.\n";
}
std::ostream & card::send_to(std::ostream & out)const{
	out << value_;
	return out;
}
bool card::is_same(card const & c)const{
	return this == &c;
}
card_value card::get_value()const{
	return value_;
}
card_value get_it(std::istream & in){
	card_value temp;
	in >> temp;
	return temp;
}
card::card(std::istream & in):value_(get_it(in)){
	std::clog << "Card instance created from " << value_ << " supplied from input.\n";
}

card::card(card_value::denomination d, card_value::suit s):value_(d,s){
	std::clog << "Card instance created from demonination " << d << " suid " << s << std::endl;
}



