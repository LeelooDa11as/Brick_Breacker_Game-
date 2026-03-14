#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

void    drawCircle(sf::RenderWindow& window)
{
    sf::CircleShape ballSprite(10.f);
    ballSprite.setFillColor(sf::Color::Yellow);
    ballSprite.setPosition({50.f, 100.f});
    window.draw(ballSprite);
    return;
}

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Brick Breaker SFML 3");
    window.setFramerateLimit(60);

    /*sf::Texture playerTexture;
    // for future, to put images :D
    if (!playerTexture.loadFromFile("player.png")) {
        return -1;
    }

    sf::Sprite playerSprite(playerTexture);*/
    sf::RectangleShape playerSprite(sf::Vector2f({100.f, 20.f}));
    playerSprite.setFillColor(sf::Color::Green);
    playerSprite.setPosition({350.f, 500.f});

    while (window.isOpen()) {
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
        drawCircle(window);
        window.display();
    }

    return 0;
}