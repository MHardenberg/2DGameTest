#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include "gui/window.h"

using namespace std;


#ifndef Game_H
#define Game_H

class Game{
    public:
        Game();
        const char* title = "Cavern Tales";
        Window window;
        int run();
};
#endif // !Game_H
