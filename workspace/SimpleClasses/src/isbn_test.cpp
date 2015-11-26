/*
 * isbn_test.cpp
 *
 *  Created on: Nov 26, 2015
 *      Author: rtakacsux
 */


#include "isbn10.h"


int main(){

	try{

		isbn10 book;
		isbn10 book1("0-470-84674-7");
		book.send_to();
		std::cout << '\n';
		book1.send_to(std::cout);
		std::cout << '\n';
		book1.send_to();
		std::cout << '\n';

		// std::boolalpha	- text output of bool
		// std::noboolaplha	- numerical output of bool
		std::cout << "book instance is " << std::boolalpha << book.is_valid() << '\n';
		std::cout << "book instance is " << std::noboolalpha << book.is_valid() << '\n';

		std::cout << "book and book1 are the same " << std::boolalpha << book.is_equal(book1) << ".\n";

		book = book1;
		std::cout << "book and book1 are the same " << std::boolalpha << book.is_equal(book1) << ".\n";

		book = isbn10("0-304-36686-2");

		std::cout << "Please type in an ISBN: ";
		book.get_from();
		book.send_to();
		std::cout << '\n';

		std::cout << book << "\n";
		std::cout << "Please type in an ISBN: ";
		std::cin >> book;
		std::cout << book << "\n";

	} catch(...){
		std::cerr << "Program terminated with an exception.\n";
		return 0;
	}
}



