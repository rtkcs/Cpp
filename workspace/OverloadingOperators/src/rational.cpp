/*
 * rational.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: rtakacsux
 */
#include "rational.h"
#include <iostream>
#include <istream>

rational::rational():n(0), d(1){}
rational::rational(long numer, long denom):n(numer), d(denom){}
long rational::denominator()const{return d;}
long rational::numerator()const{return n;}

std::ostream & rational::send_to(std::ostream & out)const{
	out << n << "/" << d;
	return out;
}

std::istream & rational::get_from(std::istream & in){// e.g. input:1/2, 1/8, 2/5
	int n1, d1;
	in >> n1;
	if(in.get() != '/') throw rational::bad_data();
	in >> d1;
	if(not in) throw rational::bad_data();
	n = n1;
	d = d1;
	return in;
}

rational & rational::operator*=(rational const & r){
	n *= r.n;
	d *= r.d;
	return *this;
}


