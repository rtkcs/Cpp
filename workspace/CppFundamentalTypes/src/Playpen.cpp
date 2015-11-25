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

int main(){

	try{

		//fgw::playpen paper();
		//fgw::playpen paper(224);
		//fgw::playpen paper(fgw::red1 + fgw::red2 + fgw::red4);
		fgw::playpen paper(fgw::red7);
		paper.scale(25);
		for(int i=0;i<550;i+=20){
			paper.origin(i, 100);
			paper.plot( 0, 0, 7);
		}

		for(int i=0;i<550;i+=20){
			paper.origin(75, i);
			paper.plot( 0, 0, 7);
		}

		paper.display();
		std::cout << "Press ENTER to end the program.\n";
		std::cin.get();

	}catch(...){
		std::cerr << "*** An exception was thrown.***\n";
	}

	return 0;
}
