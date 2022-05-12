#include "../include/game.hpp"

Game* game;

int main() {
    const int FPS = 120;
    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    game = new Game;

    game->init();

    while (game->is_running()) {
        frameStart = SDL_GetTicks();

        game->handle_event();
        game->update();
        game->render();
        

        frameTime = SDL_GetTicks() - frameStart;
        if (frameDelay > frameTime)
            SDL_Delay(frameDelay - frameTime);
    }
    
    game->close();
}