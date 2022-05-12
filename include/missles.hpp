#include "library.hpp"

struct Missles {
    SDL_Texture* texture;
    int current_frame = 0;
    int x;
    int y;
    int w;
    int h;
    int id;

    int frame_size = 0;

    Missles();
    ~Missles();

    void update();
    void render();
};