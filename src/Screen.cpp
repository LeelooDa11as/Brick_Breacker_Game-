#include "../inc/Screen.hpp"

Screen::Screen(const int height, const int width) {
    sf::RenderWindow window(sf::VideoMode({height, width}), "Brick Breaker");
    window.setFramerateLimit(60);
    draw = new Draw(&window);
    game = new Game(lvl);
    return;
}

Screen::~Screen() {
    // free all
    return;
};