#include "game.h"
#include "window.h"

Game::Game() {
    Game::window.init(Game::title);
};

int Game::run() {
    // event loop
    bool quit = false;
    SDL_Event event;

    while (!quit) {
        // handle event queue
        while (SDL_PollEvent(&event)) {
            if( event.type == SDL_QUIT ) {
                        quit = true;
            }
        }

        window.draw();

    }
    return 0;
}
