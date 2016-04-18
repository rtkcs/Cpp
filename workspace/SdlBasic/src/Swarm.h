/*
 * Swarm.h
 *
 *  Created on: Apr 8, 2016
 *      Author: rtakacsux
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace std {

class Swarm {
private:
	Particle * m_pParticles;
public:
	const static int NPARTICLES = 5000;
	Swarm();
	virtual ~Swarm();
	const Particle * const getParticles(){ return m_pParticles; }
};

} /* namespace std */

#endif /* SWARM_H_ */
