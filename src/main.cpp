#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "game.h"
#include "gamemap.h"
using namespace std;


int main() {
    
    GameMap map;
    map.fromFile("map/test.map");
    map.debugPrint();


    Game game;
    game.run();
    return 0;

}

