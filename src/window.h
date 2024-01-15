#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

#ifndef window_H
#define window_H

class Window {
    int win_width = 640;
    int win_height = 480;

    SDL_Window* window = nullptr;
    SDL_Surface* window_surface = nullptr;
    SDL_Surface* image_surface = nullptr;

    public:
        int init();
        int draw();
        ~Window();
};
#endif
