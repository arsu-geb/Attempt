#include <SDL.h>
#include "Game.h"
#include "global.h"

/**
 * clearColorBuffer - clears the color buffer
 * @color: the color
 * Return: nothing
 */
void clearColorBuffer(Uint32 color)
{
    for (int x = 0; x < xpos; x++)
    {
        for (int y = 0; y < ypos; y++)
            colorBuffer[(xpos * y) + x] = color;
    }
}

/**
 * renderColorBuffer - renders the color buffer
 * Return: nothing
 */
void renderColorBuffer(Game instance)
{
    SDL_UpdateTexture(
        colorBufferTexture,
        NULL,
        colorBuffer,
        (int)((Uint32)xpos * sizeof(Uint32))
    );
    SDL_RenderCopy(instance.renderer, colorBufferTexture, NULL, NULL);
}