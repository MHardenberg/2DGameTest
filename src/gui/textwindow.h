#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <iostream>
using namespace std;


#ifndef textwindow_H
class TextWindow {
public:
    string text = nullptr;
    TextWindow(string text, int x, int y, int w, int h, SDL_Color color);
    ~TextWindow();
private:
    TTF_Font* font;
    SDL_Window* window = nullptr;
    SDL_Surface* surface = nullptr;
    
    void fillSurface();
};

TextWindow::TextWindow(string text, int x, int y, int w, int h,
        SDL_Color color) {
    font = TTF_OpenFont("Roboto-Medium.ttf", 50);
    if (!font) {
        cout << "Err: Failed to load font." << endl;
    }
    window = SDL_CreateWindow(nullptr, x, y, w, h, nullptr);
    surface = TF_RenderUTF8_Blended(Font, text.data(), color);
    
    /*
        // Blit our text onto our window surface
    SDL_BlitSurface(
      TextSurface,
      nullptr,
      SDLWindowSurface,
      nullptr
    );

    SDL_UpdateWindowSurface(SDLWindow);*/ <---- left off here
}

TextWindow::~TextWindow() {
    SDL_DestroyWindow(window);
    SDL_FreeSurface(surface);
}

void TextWindow::fillSurface() {
    SDL_FillRect(surface, nullptr, SDL_MapRGB(surface->format, 0, 0, 0));
}

#endif // !textwindow_H
