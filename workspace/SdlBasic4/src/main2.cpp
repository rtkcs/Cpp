/*
 * main.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: rtakacsux
 */

#include <math.h>
#include <stdlib.h>
#include <SDL_timer.h>
#include <iostream>

#include "Screen.h"

using namespace std;

int main2(){

	srand(time(NULL));

	Screen screen;
	if(screen.init() == false){
		cout << "Error initialising SDL." << endl;
	}

	while(true){
		// draw

		//draw particles
		int elapsed = SDL_GetTicks();
		unsigned char red = (1 + sin(elapsed * 0.0001)) * 128;
		unsigned char green = (1 + sin(elapsed * 0.0002)) * 128;
		unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

		//cout << green << endl;

		for(int y=0; y < Screen::SCREEN_HEIGHT; y++){
			for(int x=0; x < Screen::SCREEN_WIDTH; x++){
				screen.setPixel(x, y, red, green, blue);
			}
		}

		//draw the screen
/*		for(int yy=0; yy<100;yy++){
			screen.setPixel(sin(yy)*100, cos(yy)*100, 255, 255, 255);
		}*/
		screen.setPixel(400, 300, 255, 255, 255);
		screen.update();


		if(screen.processEvents() == false){
			break;
		}
	}



	screen.close();
	return 0;

}


