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

int mainPlaypen2(){

	try{

		//fgw::playpen paper();
		//fgw::playpen paper(224);
		//fgw::playpen paper(fgw::red1 + fgw::red2 + fgw::red4);
		fgw::playpen paper(fgw::red7);

		paper.scale(1);
		for(int i=0; i<550;i+=50){
			for(int y=0; y<550; y+=1){
				paper.origin(i, y);
				paper.plot(0,0,7);

			}
		}

		for(int i=50; i<100;i+=10){
			for(int y=0; y<550; y+=1){
				paper.origin(i, y);
				paper.plot(0,0,7);

			}
		}

		for(int i=0;i<71;i++){
			paper.scale(i);
			paper.origin(i, 100 + i/2);
			paper.plot( 0, 0, i);
		}


		paper.display();
		std::cout << "Press ENTER to end the program.\n";
		std::cin.get();

	}catch(...){
		std::cerr << "*** An exception was thrown.***\n";
	}

	return 0;
}
