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

void Swarm::update() {
	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_pParticles[i].update();
	}
}

} /* namespace std */
