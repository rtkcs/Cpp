/*
 * deck.h
 *
 *  Created on: Feb 18, 2016
 *      Author: rtakacsux
 */

#ifndef DECK_H_
#define DECK_H_

#include "card_value.h"

#include <iostream>
#include <ostream>
#include <istream>

class deck{

public:
	deck();
	deck(std::istream &);
	~deck();
	void shuffle();
	card_value next();
	void top();
	void copy_from(deck const &);
	card_value get_card(int pos)const;
	static int const cards = 52;


private:
	deck(deck const &);
	deck & operator=(deck const &);
	int position;
	card_value pack[cards];
};


std::ostream & operator<<(std::ostream &, deck const &);

#endif /* DECK_H_ */
