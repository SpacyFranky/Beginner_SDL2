#include <SDL2/SDL.h>
#include "header.h"

/**
* draw_stuff - draws a line
* @instance: sdl instance
*/
void draw_stuff(SDL_Instance instance)
{
	SDL_SetRenderDrawColor(instance.renderer, 0xFF, 0xFF, 0xFF, 0xFF);
	SDL_RenderDrawLine(instance.renderer, 10, 10, 100, 100);
}
