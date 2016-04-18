/*
 * main.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: rtakacsux
 */

#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"
#include <stdlib.h>
#include <time.h>
#include "Swarm.h"
#include "Particle.h"
using namespace std;

int main(){

	srand(time(NULL));

	Screen screen;
	if(screen.init() == false){
		cout << "Error initialising SDL." << endl;
	}

	Swarm swarm;

	while(true){

		int elapsed = SDL_GetTicks();
		screen.clear();
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

		screen.update();

		if(screen.processEvents() == false){
			break;
		}
	}



	screen.close();
	return 0;

}


