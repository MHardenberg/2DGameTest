#include "gamemap.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int GameMap::fromFile(string fileName){
    string line;

    ifstream file;
    file.open(fileName);

    if (file.is_open()){
        // loop over lines in file and push_back lines as vectors to 
        // GameMap::map 

        while(getline(file, line)){
            vector<char> v;
            for (const char c: line) {
                v.push_back(c);
            }
            GameMap::map.push_back(v);
        }

        file.close();
        return 0;
    }

    return 1;
}


void GameMap::debugPrint() {
    for (vector<char> v: GameMap::map) {
        for (char c: v) {
            cout << c;
        }
        cout << endl;
    }
}
