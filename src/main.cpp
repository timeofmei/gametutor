#include <SDL2/SDL.h>
#include "Game.hpp"
#define main main

int main(int argc, char *argv[]) {

    const int FPS = 60;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    Uint32 frameTime;

    Game *game{new Game};

    game->init("BirchEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, false);

    while (game->running()) {
        frameStart = SDL_GetTicks();

        game->handleEvents();
        game->update();
        game->render();

        frameTime = SDL_GetTicks() - frameStart;

        if (frameTime < frameDelay)
            SDL_Delay(frameDelay - frameTime);
    }

    game->clean();
    return 0;
}
