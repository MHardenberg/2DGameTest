#include <SDL2/SDL_timer.h>
#include <iostream>
#include "map/gamemap.h"
#include "game.h"
using namespace std;


int main() {
    GameMap map;
    if(map.fromFile("../map/test.map")) {
        cout << "Err: Could not generate map from file." << endl;
    }
    map.debugPrint();
    
    Game game;
    game.run();
    return 0;

}

