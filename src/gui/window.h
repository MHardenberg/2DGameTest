#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#include <string>
using namespace std;
#ifndef window_H


class Window {
    public:
        string title = "Cavern Tales";
        int win_width = 640;
        int win_height = 480;

        SDL_Window* window =  nullptr;
        SDL_Surface* window_surface = nullptr;
        
        Window();
        ~Window();

        int renderFrame();
};


#endif // !window_H
