/*
 * main.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: rtakacsux
 */

#include <iostream>
#include <SDL.h>
#include "Screen.h"
using namespace std;

int main(){

	Screen screen;
	if(screen.init() == false){
		cout << "Error initialising SDL." << endl;
	}

	while(true){
		// draw

		//draw particles
		for(int y=0; y < Screen::SCREEN_HEIGHT; y++){
			for(int x=0; x < Screen::SCREEN_WIDTH; x++){
				screen.setPixel(x, y, 128, 0, 255);
			}
		}

		//draw the screen
//		for(int yy=0; yy<100;yy++){
//			screen.setPixel(sin(yy)*100, cos(yy)*100, 255, 255, 255);
//		}
		screen.setPixel(400, 300, 255, 255, 255);
		screen.update();


		if(screen.processEvents() == false){
			break;
		}
	}



	screen.close();
	return 0;

}


