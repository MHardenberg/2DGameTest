#include <string>
#include <vector>
using namespace std;


#ifndef GameMap_H
#define GameMap_H

class GameMap {
public:
    vector<vector<char>> map;
    int fromFile(string fileName);

    void debugPrint();
};
#endif 
