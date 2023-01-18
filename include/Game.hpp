#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Game {
public:
    Game();

    ~Game();

    void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen);

    void handleEvents();

    void update();

    void render();

    void clean();

    bool running() const;

    static SDL_Renderer* renderer;
    static SDL_Event event;

private:
    bool isRunning;
    SDL_Window *window;
};
