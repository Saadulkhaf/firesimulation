/*
 * Particle.h
 *
 *  Created on: Nov 11, 2019
 *      Author: Saad Khaf
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_
#include <iostream>

using namespace std;

namespace saadkhaf {

struct Particle {
	double m_x;
	double m_y;

	double m_speed;
	double m_direction;
	void init();
public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace saadkhaf */

#endif /* PARTICLE_H_ */
