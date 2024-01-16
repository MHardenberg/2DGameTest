#include <SDL2/SDL_surface.h>
#include "window.h"

using namespace std;


Window::~Window() {
            cout << "Shutting down..." << endl;
            SDL_DestroyWindow(window);
            SDL_FreeSurface(image_surface);
            SDL_Quit();
}


int Window::init(const char* name) {
    if(SDL_Init(SDL_INIT_VIDEO)){
            cout << "Err:" << SDL_GetError() << endl;
            return 1;};
    
    window = SDL_CreateWindow(name, SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED, Window::win_width, Window::win_height,
            SDL_WINDOW_SHOWN);

    if(window == nullptr){
            cout << "Err: " << SDL_GetError() << endl;
            return 1;}

    window_surface = SDL_GetWindowSurface(window);
    if(window_surface == nullptr){
            cout << "Err: " << SDL_GetError() << endl;
            return 1;}

    return 0;
}


int Window::draw() {
    image_surface = SDL_CreateRGBSurface(0, 
            Window::win_width, Window::win_height, 32, 0, 0, 0, 0);

    if(SDL_BlitSurface(image_surface, NULL, window_surface, NULL)){
        cout << "Err: " << SDL_GetError() << endl;
        return 1;}

    if(SDL_UpdateWindowSurface(window)){
        cout << "Err: " << SDL_GetError() << endl;
        return 1;}

    return 0;
}
