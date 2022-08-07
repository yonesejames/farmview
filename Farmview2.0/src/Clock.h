#ifndef CLOCK_H
#define CLOCK_H

#include <SDL.h>
#include <SDL_ttf.h>
#include <string>
#include <sstream>

class Clock
{
public:
    SDL_Renderer* renderer;
    TTF_Font* font;
    std::string text;
    SDL_Texture* textTexture = { nullptr };
    SDL_Rect textRectangle;
    SDL_Rect boxRectangle;

    bool visible = true;

    Clock();
    ~Clock();

    void setup(SDL_Renderer* renderer);
    void setText(std::string text);

    void draw();
};


#endif 

