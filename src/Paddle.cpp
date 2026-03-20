#include "../inc/Paddle.hpp"

Paddle::Paddle(sf::RectangleShape paddle_sprite, const float &speed) : _paddle_sprite(paddle_sprite), _speed(speed) {
	std::cout << "Paddle class constructor has been called" << std::endl;
	return;
}

Paddle::~Paddle(void) {
	std::cout << "Paddle class destructor has been called" << std::endl;
	return;
}

//void	Paddle::updateBallPosX(Ball &ball, int x) { }

void	Paddle::setPosX(const float &new_pos_x) {
	this->_pos_x = new_pos_x;
}

float	Paddle::getPosX(void) const {
	return (this->_pos_x);
}

float	Paddle::getPosY(void) const {
	return (this->_pos_y);
}