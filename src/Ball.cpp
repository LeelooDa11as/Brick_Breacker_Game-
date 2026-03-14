#include <Ball.hpp>

Ball::Ball(const float &speed, const float &pos_x, const float pos_y) : _speed(speed), _pos_x(pos_x), _pos_y(pos_y) {
	std::cout << "Ball class constructor has been called" << std::endl;
    return;
}

Ball::~Ball() {
    std::cout << "Ball class destructor has been called" << std::endl;
    return;
}

float	Ball::getPosX(void) const {
	return (this->_pos_x);
}

float	Ball::getPoxY(void) const {
	return (this->_pos_y);
}

void	Ball::setPosX(const float &x) {
	this->_pos_x = x;
}

void	Ball::setPosY(const float &y) {
	this->_pos_y = y;
}