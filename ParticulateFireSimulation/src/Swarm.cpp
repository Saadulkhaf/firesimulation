/*
 * Swarm.cpp
 *
 *  Created on: Nov 11, 2019
 *      Author: Saad Khaf
 */

#include "Swarm.h"

namespace saadkhaf {

Swarm::Swarm(): lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete [] m_pParticles;
}
void Swarm::update(int elapsed){
	int interval = lastTime - elapsed;

	for(int i=0; i < Swarm::NPARTICLES; i++){
		m_pParticles[i].update(interval);

	}
	lastTime = elapsed;

}
} /* namespace saadkhaf */
