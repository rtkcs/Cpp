/*
 * Particle.h
 *
 *  Created on: Apr 8, 2016
 *      Author: rtakacsux
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace std {

//members of struct are public by default
//in class by default private
struct Particle {

	double m_x;
	double m_y;
	double m_xspeed;
	double m_yspeed;

	Particle();
	virtual ~Particle();
	void update();
};

} /* namespace std */

#endif /* PARTICLE_H_ */
