#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_ttf.h>
#include "window.h"
using namespace std;


SDL_Color White = {255, 255, 255};
//TTF_Font* font = TTF_OpenFont("Sans.ttf", 18);


Window::Window() {
    
}


Window::~Window() {
            cout << "Shutting down..." << endl;
            SDL_DestroyWindow(window);
            SDL_FreeSurface(image_surface);
            SDL_Quit();
            //TTF_Quit();
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


void Window::debugMsg(string debugString) {
/*
    SDL_Rect messageRect;
    messageRect.x = 0; messageRect.y = 0;
    messageRect.w = 100; messageRect.y = 100; // thios might need to be 
                                              // dependent on message size

    SDL_Surface* messageSurf = TTF_RenderText_Solid(font, &debugString, White);
    SDL_Texture* messageText = SDL_createTextureFromSurface(Window::renderer, 
            messageSurf);
    SDL_RenderCopy(Window::renderer, messageText, nullptr, &messageRect);*/
}
