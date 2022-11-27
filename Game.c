#include <SDL.h>
#include "Game.h"

//Game::Game()
//{}
//Game::~Game()
//{}

//void init(const char* title, int xpos, int ypos, int width, int height, int fullscreen)
int init_instance(Game *instance)
{
	int flags = 0;
	/*
	if (fullscreen == 1)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}
	*/

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		printf("Subsystems Initialized!...");
		
		instance->window = SDL_CreateWindow("2D Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, xpos, ypos, SDL_WINDOW_RESIZABLE);
		if (window)
		{
			printf("Window created!");
		}

		renderer = SDL_CreateRenderer(instance->window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 0, 255, 0);
			printf("Renderer created!");
		}

		isRunning = TRUE;
	} else {
		isRunning = FALSE
			;
	}
}

int handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
		case SDL_QUIT:
			isRunning = FALSE;
			break;
		default:
			break;
	}
}

void update()
{}

void render(Game *instance)
{
	SDL_RenderClear(instance->renderer);
	//this is where we would add stuff to render
	SDL_RenderPresent(renderer);

}

void clean(Game *instance)
{
	SDL_DestroyWindow(instance->window);
	SDL_DestroyRenderer(instance->renderer);
	SDL_Quit();
	printf("Game Cleaned");
}
