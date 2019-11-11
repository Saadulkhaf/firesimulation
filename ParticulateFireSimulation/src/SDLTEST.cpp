//============================================================================
// Name        : SDLTEST.cpp
// Author      : Saadulkhaf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include <Math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"
using namespace std;
using namespace saadkhaf;


int main(int argc, char* argv[]) {

	srand(time(NULL));


	Screen screen;
	if(screen.init() == false){
		cout << "SDL couldn't be initialised" << endl;
	}


	Swarm swarm;


    while(true){

    	int elapsed = SDL_GetTicks();


    	swarm.update(elapsed);

		unsigned char green1 = (unsigned char) (1 + sin(elapsed * 0.0001) * 128);
		unsigned char red1 = (unsigned char) (1 + sin(elapsed * 0.0002) * 128);
		unsigned char blue1 = (unsigned char) (1 + sin(elapsed * 0.0003) * 128);

    	const Particle * const pParticles = swarm.getParticles();

    	for(int i=0; i < Swarm::NPARTICLES; i++){
    		Particle particle = pParticles[i];

    		int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
    		int y = particle.m_y * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;

    		screen.setPixel(x, y, red1, green1, blue1);
    	}
    	screen.boxBlur();

    	screen.update();

    	if (screen.processEvents() == false){
    		break;
    	}
    }

    screen.close();
    return 0;
}
