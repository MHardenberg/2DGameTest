#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "window.h"

using namespace std;


int main() {
    Window window;
    window.init();

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
}

