#include "../inc/Screen.hpp"

Screen::Screen(const int height, const int width) : height(static_cast<float> height), width(static_cast<float> width){
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
    sf::RectangleShape playerSprite(sf::Vector2f({100.f, 20.f}));
    playerSprite.setFillColor(sf::Color::Green);
    playerSprite.setPosition({350.f, 500.f});

    while (window.isOpen()) {
        drawAll();
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
            playerSprite.move({-5.f, 0.f});
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
            playerSprite.move({5.f, 0.f});
        }

        window.clear();
        window.draw(playerSprite);
        window.display();
    }
}

void    Screen::drawBall() {
    float   x = game->getBallX();
    float   y = game->getBallY();
    float   radius = game->getBallRadius();
    
    x = width/2 + x;
    y = height*0.9 - y;
    draw->drawCircle(x, y, radius);
}

void    Screen::drawAll() {
    window.clear();
    drawBall();
	drawPaddle();
	drawLevel();
}