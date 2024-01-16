#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include "game.h"
#include <iostream>
#include <fstream>
using namespace std;


int main() {
    
    string line;
    ifstream file;
    file.open("map/test.map");
    if (file.is_open()){
        while(getline(file, line)){
            cout << line << endl;
        }
            file.close();
    }

    Game game;
    game.run();
    return 0;

}

