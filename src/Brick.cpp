#include "../inc/Brick.hpp"

Brick::Brick(const int level, const float &pos_x, const float &pos_y) : _level(level), _pos_x(pos_x), _pos_y(pos_y) {
	std::cout << "Brick class constructor has been called" << std::endl;
	return;
}

Brick::~Brick() {
	std::cout << "Brick class destructor has been called" << std::endl;
	return;
}