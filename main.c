#include <SDL.h>
#include "Game.h"

Game *game = NULL;

int main(int argc, char *argv[])
{
	/**
	while (game is running)
	{
		handle any user input
		update all object eg. positions etc.
		render changes to the display
	}
	*/

	//game = new Game();

	while ("game is running")
	{
		if (handleEvents() == 1)
			break;

		update();
		render();
	}

	clean();

	return 0;
}