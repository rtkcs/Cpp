/*
 * card.h
 *
 *  Created on: Feb 12, 2016
 *      Author: rtakacsux
 */

#ifndef CARD_H_
#define CARD_H_

#include <iostream>
#include "card_value.h"



class card{
public:
	explicit card(card_value);
	explicit card(std::istream &);
	explicit card(card_value::denomination, card_value::suit);
	~card();
	std::ostream & send_to(std::ostream &)const;
	bool is_same(card const &)const;
	card_value get_value()const;

private:
	card(card const &);				//disable copy constructor
	void operator=(card const &);	//disable assigment
	card_value const value_;
};


inline std::ostream & operator<<(std::ostream & out, card const & c){
	return c.send_to(out);
}

#endif /* CARD_H_ */
