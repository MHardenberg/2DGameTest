#include <SDL2/SDL_events.h>
#ifndef game_H
#include "gui/window.h"


class Game {
public:
    Window window;
    SDL_Event eventCurrent;

    int run();
    Game();
    ~Game();

private:
    bool quit = false;
};
#endif // !game_H
#define game_H
