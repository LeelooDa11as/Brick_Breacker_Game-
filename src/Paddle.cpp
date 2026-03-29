#include "../inc/Paddle.hpp"

Paddle::Paddle(sf::RectangleShape paddle_sprite, const float &speed) : _paddle_sprite(paddle_sprite), _speed(speed) {
	std::cout << "Paddle class constructor has been called" << std::endl;
	std::cout << "Paddle has speed: " << _speed << std::endl;
	_width = _paddle_sprite.getSize().x;
	return;
}

Paddle::~Paddle(void) {
	std::cout << "Paddle class destructor has been called" << std::endl;
	return;
}

const sf::RectangleShape&	Paddle::getPaddleSprite(void) const {
	return (this->_paddle_sprite);
}

void Paddle::paddleMove(float x, float y, float window_width) {
    float current_x = _paddle_sprite.getPosition().x;
    float half_p_width = _width / 2.f;
    float limit = window_width / 2.f;

    if (x < 0) { // Moving Left
        // If (current position + move) is past the left limit (-400)
        if (current_x + x - half_p_width < -limit) {
            // Snap to the wall: Wall position + half the paddle's width
            _paddle_sprite.setPosition({-limit + half_p_width, _paddle_sprite.getPosition().y});
        } else {
            _paddle_sprite.move({x, y});
        }
    } 
    else if (x > 0) { // Moving Right
        // If (current position + move) is past the right limit (400)
        if (current_x + x + half_p_width > limit) {
            // Snap to the wall: Wall position - half the paddle's width
            _paddle_sprite.setPosition({limit - half_p_width, _paddle_sprite.getPosition().y});
        } else {
            _paddle_sprite.move({x, y});
        }
    }
}
//void	Paddle::updateBallPosX(Ball &ball, int x) { }