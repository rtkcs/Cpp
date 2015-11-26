/*
 * isbn10.cpp
 *
 *  Created on: Nov 26, 2015
 *      Author: rtakacsux
 */

#include "isbn10.h"

isbn10::isbn10():isbn_("0-00-00000-0"){
	std::cout << "Default isbn10 instance constructed.\n";
}

isbn10::isbn10(std::string const & isbn):isbn_(isbn){
	std::cout << "isbn10 instance constructed and initialized with " << isbn_ << ".\n";
}

isbn10::~isbn10(){
	std::cout << "isbn10 instance with value " << isbn_ << " destroyed.\n";
}

bool isbn10::is_valid()const{
	if( isbn_.size() < 10 ) {
		return false;
	}

	std::string compressed("");
	int count(0);
	for(unsigned int i(0); i != isbn_.size(); ++i){

		if( std::isdigit(isbn_[i]) ){
			compressed += isbn_[i];
			++count;
		} else if( (count == 9) and (isbn_[i] == 'X') ){
			compressed += isbn_[i];
			++count;
		}
	}

	if( count != 10 ){
		return false;
	}

	int total(0);
	for( int i(0); i != 9; ++i ){
		total += (i + 1) * (compressed[i] - '0');
	}
	total %= 11;
	char check('X');
	if( total < 10 ) {
		check = '0' + total;
	}
	return (check == compressed[9]);
}

void isbn10::send_to(std::ostream & out)const{
	out << isbn_;
}

void isbn10::get_from(std::istream & in){
	in >> isbn_;
}

bool isbn10::is_equal(isbn10 const & rhs)const{
	return (isbn_ == rhs.isbn_);
}


















