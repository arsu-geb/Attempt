build:
		gcc -Wall -Werror -Wextra -pedantic *.c -o Game -lm -ldl `sdl2-config --cflags` `sdl2-config --libs`;

run:
		./maze;

clean:
		rm maze;
