#include <SDL2/SDL_events.h>
#include <iostream>
#include <SDL2/SDL.h>


struct Window {
    Window(){
        SDL_Init(SDL_INIT_VIDEO);
        SDLWindow = SDL_CreateWindow("Hello Window", 0, 0, 500, 300, 0
    );

    SDLWindowSurface = SDL_GetWindowSurface(SDLWindow);

    SDL_FillRect(SDLWindowSurface, nullptr,
            SDL_MapRGB(SDLWindowSurface->format, 40, 40, 40)
    );
  }

  void RenderFrame() {
    SDL_UpdateWindowSurface(SDLWindow);
  }

private:
  SDL_Window* SDLWindow { nullptr };
  SDL_Surface* SDLWindowSurface { nullptr };
};


int main(){
    Window window;
    SDL_Event event;

    while (true) {
        SDL_PollEvent(&event);
        window.RenderFrame();
    }

    return 0;
}
