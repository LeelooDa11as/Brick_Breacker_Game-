#include "../inc/Paddle.hpp"

Paddle::Paddle(sf::RectangleShape paddle_sprite, const float &speed) : _paddle_sprite(paddle_sprite), _speed(speed) {
	std::cout << "Paddle class constructor has been called" << std::endl;
	std::cout << "Paddle has speed: " << _speed << std::endl;

	return;
}

Paddle::~Paddle(void) {
	std::cout << "Paddle class destructor has been called" << std::endl;
	return;
}

//void	Paddle::updateBallPosX(Ball &ball, int x) { }