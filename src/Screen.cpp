#include "../inc/Screen.hpp"

Screen::Screen(const unsigned int height, const unsigned int width) : height(static_cast<float>(height)), width(static_cast<float>(width)){
    game = new Game(lvl, width, height);
    return;
}

Screen::~Screen() {
    // free all
    return;
};

void    Screen::runGame(void) {
    sf::RenderWindow window(sf::VideoMode({static_cast<unsigned int>(width), static_cast<unsigned int>(height)}), "Brick Breaker");
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
			game->movePaddle(-5.f, 0.f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
            game->movePaddle(5.f, 0.f);
        }
        window.clear();
        window.draw(game->getBallSprite());
        window.draw(game->getPaddleSprite());
        window.display();
    }
}