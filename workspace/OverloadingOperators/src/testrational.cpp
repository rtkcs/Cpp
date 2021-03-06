/*
 * rational.cpp

 *
 *  Created on: Oct 20, 2015
 *      Author: rtakacsux
 */
#include <stdio.h>
#include <stddef.h>
#include <iostream>
#include <istream>
#include "rational.h"

int mainRational(){

	try{
		rational r;
		std::cout << r.numerator() << "/" << r.denominator() << '\n';

		r = 2;
		std::cout << r.numerator() << "/" << r.denominator() << '\n';

		r = rational(r.numerator(), 2);
		std::cout << r.numerator() << "/" << r.denominator() << '\n';
		r.send_to(std::cout);
		std::cout << '\n';

		r.send_to(std::cout);
		std::cout << '\n';
		std::cout << r << '\n';

		std::cin >> r;
		std::cout << r << '\n';
		r.send_to(std::cout);
		std::cout << '\n';

		//multiplication
		rational r2(2,3);
		int i = 10;
		std::cout << r  << " times " << r2 << " is " << r * r2 << '\n';
		std::cout << r2 << " times " << r  << " is " << r * r2 << '\n';
		std::cout << r  << " times " << i  << " is " << r * i  << '\n';
		std::cout << i  << " times " << r  << " is " << i * r  << '\n';


	}catch( rational::exception const &r){
		std::cerr << "Exception from rational caught.\n";
	}
}



