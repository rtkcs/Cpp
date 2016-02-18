/*
 * card_value.h
 *
 *  Created on: Nov 26, 2015
 *      Author: rtakacsux
 */

#ifndef CARD_VALUE_H_
#define CARD_VALUE_H_


#include <iostream>
#include <ostream>
#include <istream>

class card_value{

public:
	card_value();
	explicit card_value(int);
	card_value(card_value const &);
	~card_value();
	card_value & operator=(card_value const &);
	std::ostream & send_to(std::ostream &)const;
	bool get_from();
	std::istream & get_from(std::istream &);

	enum suit{ club, diamond, heart, spade };
	enum denomination{ ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };
	card_value(denomination, suit);

	bool operator==(card_value const &)const;

private:
	int data;
	static char const * suit_names[4];
	static char const * denomination_names[13];

};

inline std::ostream & operator<<(std::ostream & out, card_value const & c){
	return c.send_to(out);
}

inline std::istream & operator>>(std::istream & in, card_value & c){
	if( &in == &std::cin ){
		c.get_from();
	} else {
		c.get_from(in);
	}
	return in;
}

#endif /* CARD_VALUE_H_ */
