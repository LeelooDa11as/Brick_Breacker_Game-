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

void						Paddle::paddleMove(const float x, const float y, const float window_width) {
	sf::Vector2f	current_pos = _paddle_sprite.getPosition();
	float           move_x = x;
    
    if (x < 0) {
        if (current_pos.x + x < 0) {
            move_x = 0 - current_pos.x;
        }
    }
	else if (x > 0) {
		float	right_edge = window_width - _width;
		if (current_pos.x + x > right_edge) {
			move_x = right_edge - current_pos.x;
		}
	}
	_paddle_sprite.move({move_x, y});
}

//void	Paddle::updateBallPosX(Ball &ball, int x) { }