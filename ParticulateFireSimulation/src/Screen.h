/*
 * Screen.h
 *
 *  Created on: Nov 11, 2019
 *      Author: Saad Khaf
 */

#ifndef SCREEN_H_
#define SCREEN_H_
#include <SDL.h>

namespace saadkhaf {

class Screen {
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;
private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer;
	Uint32 *m_buffer1;
public:
	Screen();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
	void boxBlur();

};

} /* namespace saadkhaf */

#endif /* SCREEN_H_ */
