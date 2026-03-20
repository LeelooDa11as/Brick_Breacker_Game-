#include "../inc/Screen.hpp"

Screen::Screen(const unsigned int height, const unsigned int width) : height(static_cast<float>(height)), width(static_cast<float>(width)){
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

void    Screen::runGame(void) {

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        //if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
        //    playerSprite.move({-5.f, 0.f});
        //}
        //if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
        //    playerSprite.move({5.f, 0.f});
        //}

        //window.clear();
        //window.draw(playerSprite);
        //window.display();
    }
}