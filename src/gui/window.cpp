#include "window.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <iostream>
using namespace std;


Window::Window() {
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow(title.data(), SDL_WINDOWPOS_CENTERED,
                SDL_WINDOWPOS_CENTERED, win_width, win_height,
                SDL_WINDOW_SHOWN);
    window_surface = SDL_GetWindowSurface(window);

    if(SDL_FillRect(window_surface, nullptr, SDL_MapRGB(window_surface->format,
                    0, 0, 0))) {
        cout << "Err: could not fill window_surface." << endl;
    }
}

Window::~Window() {
    SDL_DestroyWindow(window);
    SDL_FreeSurface(window_surface);
    SDL_Quit();
}

int Window::renderFrame() {
    if(SDL_UpdateWindowSurface(window)) {
        cout << "Err: Could not update frame." << endl;
    };
    return 0;
}
