#include "../inc/Draw.hpp"

Draw::Draw(void) {
	return;
}

Draw::~Draw(void) {
	return;
}

void	Draw::drawBackground(const float &height, const float &width) { 
	return;
}

void	Draw::drawRectangle(const float &x, const float &y, const float &height, const float &width) {
 	sf::RectangleShape rec(sf::Vector2f({width, height}));
    rec.setFillColor(sf::Color::Green);
    rec.setPosition({x, y});
}

void	Draw::drawCircle(const float &x, const float &y, const float &radius) {
	sf::CircleShape ballSprite(radius);
    ballSprite.setFillColor(sf::Color::Yellow);
    ballSprite.setPosition({x, y});
}