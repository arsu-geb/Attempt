#ifndef GAME_h
#define GAME_h

#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include "global.h"

typedef struct Game {

	SDL_Window* window;
	SDL_Renderer* renderer;
	
	

} Game;

extern const int map[ROWS][COLS];

extern int isRunning;
extern SDL_Window* window;
extern SDL_Renderer* renderer;

struct Player
{
	float x;
	float y;
	float width;
	float height;
	int turnDirection;
	int walkDirection;
	float rotationAngle;
	float walkSpeed;
	float turnSpeed;
};

extern struct Player p;

struct Ray {
	float rayAngle;
	float wallHitX;
	float wallHitY;
	float distance;
	int wasHitVertical;
	int isRayFacingUp;
	int isRayFacingDown;
	int isRayFacingRight;
	int isRayFacingLeft;
	int wallHitContent;
} rays[NUM_RAYS];

extern struct Ray rays[NUM_RAYS];
extern int ticksLastFrame;
extern Uint32* colorBuffer;
extern SDL_Texture* colorBufferTexture;
extern Uint32* wallTexture;
extern Uint32* textures[NUM_TEXTURES];

//void init(const char* title, int xpos, int ypos, int width, int height, int fullscreen);
int init_instance(Game* instance);
int handleEvents();
void update();
void render(Game *instance);
void clean();

//int running();

void close(Game instance);
int init_instance(Game*);
int poll_events(void);
void renderMap(Game instance);
void setupPlayer(Game instance);
void renderPlayer(Game instance);
void movePlayer(float deltaTime);
int mapHasWallAt(float x, float y);
void update(void);
void castAllRays(void);
void castRay(float rayAngle, int strIpld);
float normalizeAngle(float angle);
float distanceBetweenPoints(float x1, float y1, float x2, float y2);
void renderRays(Game instance);
void clearColorBuffer(Uint32 color);
void renderColorBuffer(Game instance);
void generate3DProjection(void);


#endif /* Game_h */
