#include "../inc/Paddle.hpp"

Paddle::Paddle(const float &pos_x, const float &pos_y, const float &speed) : _pos_x(pos_x), _pos_y(pos_y), _speed(speed) {
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