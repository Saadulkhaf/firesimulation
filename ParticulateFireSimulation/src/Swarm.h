/*
 * Swarm.h
 *
 *  Created on: Nov 11, 2019
 *      Author: Saad Khaf
 */

#ifndef SWARM_H_
#define SWARM_H_
#include "Particle.h"

namespace saadkhaf {

class Swarm {
public:
	const static int NPARTICLES = 4000;
private:
	Particle *m_pParticles;
	int lastTime;
public:
	Swarm();
	virtual ~Swarm();

	const Particle * const getParticles() { return m_pParticles ; }
	void update(int elapsed);
};

} /* namespace saadkhaf */

#endif /* SWARM_H_ */
