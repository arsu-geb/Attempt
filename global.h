#ifndef GLOBAL_h
#define GLOBAL_h

#define FALSE 0
#define TRUE 1

#define PI 3.14159265
#define TWO_PI 6.28318530

#define SIZE 64
#define ROWS 19
#define COLS 19
#define NUM_TEXTURES 8

#define MINIMAP_SCALE_FACTOR 0.20

#define xpos (COLS * SIZE)
#define ypos (ROWS * SIZE)

#define TEXTURE_WIDTH 64
#define TEXTURE_HEIGHT 64

#define NUM_RAYS xpos

#define FOV_ANGLE (60 * (PI / 180))

#define FPS 30
#define FRAME_TIME_LENGTH (1000 / FPS)

#endif // !GLOBAL_h

