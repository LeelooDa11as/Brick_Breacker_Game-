#include <Ball.hpp>

Ball::Ball(sf::CircleShape ball_sprite, const float &speed) : _ball_sprite(ball_sprite), _speed(speed) {
	std::cout << "Ball class constructor has been called" << std::endl;
	std::cout << "Ball has speed: " << _speed << std::endl;
    return;
}

Ball::~Ball() {
    std::cout << "Ball class destructor has been called" << std::endl;
    return;
}

const sf::CircleShape&	Ball::getBallSprite(void) const {
    return (this->_ball_sprite);
}