#include "game.h"


Game::Game() {
}

Game::~Game() {
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
        }
    }
    return 0;
}

