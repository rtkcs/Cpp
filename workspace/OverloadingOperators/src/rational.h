/*
 * rational.h
 *
 *  Created on: Oct 20, 2015
 *      Author: rtakacsux
 */
#include <stdio.h>
#include <stddef.h>
#include <iostream>
#include <istream>
#include <ostream>

#ifndef RATIONAL_H_
#define RATIONAL_H_



class rational{

public:
	rational();
	rational(long numerator, long denominator = 1);
	//compiler-generated copy constructor, copy assignment and destructor OK
	long numerator()const;
	long denominator()const;
	//other functions to be added
	struct exception{};
	struct divide_by_zero: exception{};
	struct bad_data: exception{};

	std::ostream & send_to(std::ostream &)const;
	std::istream & get_from(std::istream &);

	rational & operator*=(rational const &);

private:
	long d;
	long n;
};

inline std::ostream & operator<<(std::ostream & out, const rational & r){
	return r.send_to(out);
}

inline std::istream & operator>>(std::istream & in, rational & r){
	return r.get_from(in);
}

inline rational operator*(rational lhs, rational const & rhs){
	return lhs *= rhs;
}

inline rational operator/(rational lhs, rational const & rhs){


}

#endif /* RATIONAL_H_ */
