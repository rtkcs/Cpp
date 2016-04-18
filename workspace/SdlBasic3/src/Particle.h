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
	double m_speed;
	double m_direction;

	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace std */

#endif /* PARTICLE_H_ */
