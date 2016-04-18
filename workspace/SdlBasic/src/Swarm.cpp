/*
 * Swarm.cpp
 *
 *  Created on: Apr 8, 2016
 *      Author: rtakacsux
 */

#include "Swarm.h"

namespace std {

Swarm::Swarm() {
 m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

} /* namespace std */
