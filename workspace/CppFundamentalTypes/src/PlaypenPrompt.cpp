//============================================================================
// Name        : Playpen.cpp
// Author      : rtakacs
// Version     :
// Copyright   : Some Rights Reserved
// Description :
//============================================================================

#include "playpen.h"
#include "colournames.h"
#include <iostream>
#include <exception>

int mainPlaypen3(){

	try{

		fgw::playpen paper(fgw::red7);
		int scale(0);
		int x(0);
		int y(0);
		int color(0);

		while(true){
			std::cout << "Scale: ";
			std::cin >> scale;
			if(not std::cin){
				throw std::exception();
			}
			paper.scale(scale);

			std::cout << "X: ";
			std::cin >> x;
			if(not std::cin){
				throw std::exception();
			}
			std::cout << "Y: ";
			std::cin >> y;
			if(not std::cin){
				throw std::exception();
			}
			paper.origin(x, y);

			std::cout << "Color: ";
			std::cin >> color;
			if(not std::cin){
				throw std::exception();
			}
			paper.plot( 0, 0, color);



			paper.display();
			std::cout << "-----------------------------\n";
		}


	}catch(...){
		std::cerr << "*** An exception was thrown.***\n";
	}
	std::cin.get();
	return 0;
}
