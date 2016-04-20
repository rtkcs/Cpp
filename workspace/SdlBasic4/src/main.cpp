/*
 * main.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: rtakacsux
 */

#include <math.h>
#include <stdlib.h>
#include <SDL_timer.h>
#include <ctime>
#include <iostream>

#include "Particle.h"
#include "Screen.h"
#include "Swarm.h"

using namespace std;

int main(){
	Screen screen;

	try{
		srand(time(NULL));


		if(screen.init() == false){
			cout << "Error initialising SDL." << endl;
		}

		Swarm swarm;

		while(true){

			int elapsed = SDL_GetTicks();
			swarm.update(elapsed);

			unsigned char red = (1 + sin(elapsed * 0.0001)) * 128;
			unsigned char green = (1 + sin(elapsed * 0.0002)) * 128;
			unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

			const Particle * const pParticles = swarm.getParticles();
			for(int i=0; i<Swarm::NPARTICLES; i++){
				Particle particle = pParticles[i];
				int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
				int y = particle.m_y  * Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT / 2;
				screen.setPixel(x, y, red, green, blue);
			}

			screen.boxBlur();

			//draw the screen
			screen.update();

			if(screen.processEvents() == false){
				break;
			}
		}

	} catch(...){
		cout << "exception occured";
	}

	screen.close();
	return 0;

}


