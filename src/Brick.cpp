#include "../inc/Brick.hpp"

Brick::Brick(const int level, const float &pos_x, const float &pos_y, const float &width, const float &height) :_level(level) {
	std::cout << "Brick class constructor has been called" << std::endl;
	_brick_sprite.setSize({width, height});
	_brick_sprite.setOrigin({width/2, height/2});
	_brick_sprite.setPosition({pos_x, pos_y});

	if (_level == 1)
		_brick_sprite.setFillColor(sf::Color::Green);
	else if (level == 2)
		_brick_sprite.setFillColor(sf::Color::Blue);
	else if (level == 3)
		_brick_sprite.setFillColor(sf::Color::Red);
	
	_brick_sprite.setOutlineThickness(-1.f);
	_brick_sprite.setOutlineColor(sf::Color::Black);

	return;
}

Brick::~Brick() {
	std::cout << "Brick class destructor has been called" << std::endl;
	return;
}

void	Brick::draw(sf::RenderWindow &window) {
	window.draw(_brick_sprite);
}

/*bool	Brick::isDestroted(void) const {
	if (_level != 0)
		return false;
	retuen true;
} */