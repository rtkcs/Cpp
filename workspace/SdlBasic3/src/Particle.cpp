/*
 * Particle.cpp
 *
 *  Created on: Apr 8, 2016
 *      Author: rtakacsux
 */

#include "Particle.h"
#include "math.h"
#include <stdlib.h>

namespace std {

Particle::Particle(): m_x(0), m_y(0){

	//rand()/RAND_MAX --> (0,1)
	m_direction = (2.0 * M_PI * rand())/RAND_MAX; // 2 * PI -> 360°
	m_speed = (0.0001 * rand())/RAND_MAX;
}

Particle::~Particle() {


}

void Particle::update(int interval){
	double xspeed = m_speed * cos(m_direction);
	double yspeed = m_speed * sin(m_direction);

	m_x += xspeed * interval;
	m_y += yspeed * interval;
}

} /* namespace std */
