#include "game.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_ttf.h>


Game::Game() {
    SDL_Init(SDL_INIT_EVERYTHING);
    TTF_Init();
}

Game::~Game() {
    SDL_Quit();
    TTF_Quit();
}

int Game::run() {
    while (!quit) {
        if(window.renderFrame()) {
            break;
        };

        while (SDL_PollEvent(&eventCurrent)) {
            if (eventCurrent.type == SDL_QUIT) {
                quit = true;
            }
        
        SDL_Delay(1000 / 60);
        }
    }
    return 0;
}

