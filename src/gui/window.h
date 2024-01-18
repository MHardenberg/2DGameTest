#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2/SDL_ttf.h>
using namespace std;


#ifndef window_H
#define window_H

class Window {
    int win_width = 640;
    int win_height = 480;
    SDL_Renderer* renderer;
    SDL_Window* window = nullptr;
    SDL_Surface* window_surface = nullptr;
    SDL_Surface* image_surface = nullptr;

    public:
        string name;
        Window();
        ~Window();
        int init(const char* name);
        int draw();
        void debugMsg(string debugString);
};
#endif
