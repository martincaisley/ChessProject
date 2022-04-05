#include <iostream>
#include "SDL.h"


int Initialise()
{
	try {
		if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
		{
			std::cout << "ERROR: " << SDL_GetError() << std::endl;
			exit(-1);
		}
	}
	catch (std::exception& e) {
		std::cout << "exception: " << e.what() << std::endl;
	}
	return 0;

}

int main(int args, char *argv[])
{
	if (Initialise() != 0)
		exit(-1);
	
	SDL_Window* window = SDL_CreateWindow("Martin Chess", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1024, 768, SDL_WINDOW_OPENGL);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);
	while(true)
	SDL_RenderPresent(renderer);

	

	return 0;
}