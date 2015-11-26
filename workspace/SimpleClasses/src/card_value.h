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

class card_value{

public:
	card_value();
	explicit card_value(int);
	card_value(card_value const &);
	~card_value();
	card_value & operator=(card_value const &);
	std::ostream & send_to(std::ostream &)const;
private:
	int data;

};

int main(){
	try{
		card_value any;
		card_value specific(1);
		card_value another(specific);

		any.send_to(std::cout);
		specific.send_to(std::cout);
		another.send_to(std::cout);

		any = specific;
		any.send_to(std::cout);

	} catch(...){
		std::cerr << "An exception was thrown.\n";
	}
}


#endif /* CARD_VALUE_H_ */
