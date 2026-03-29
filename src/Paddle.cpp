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

void Paddle::paddleMove(const std::string &side, float window_width) {
    float current_x = _paddle_sprite.getPosition().x;
    float half_p_width = _width / 2.f;
    float limit = window_width / 2.f;

    if (side == "left") {
        if (current_x - _speed - half_p_width < -limit) {
            // Snap to the wall: Wall position + half the paddle's width
            _paddle_sprite.setPosition({-limit + half_p_width, _paddle_sprite.getPosition().y});
        } else {
            _paddle_sprite.move({-_speed, 0});
        }
    } 
    else if (side == "right") { // Moving Right
        // If (current position + move) is past the right limit (400)
        if (current_x + _speed + half_p_width > limit) {
            // Snap to the wall: Wall position - half the paddle's width
            _paddle_sprite.setPosition({limit - half_p_width, _paddle_sprite.getPosition().y});
        } else {
            _paddle_sprite.move({_speed, 0});
        }
    }
}

void    Paddle::draw(sf::RenderWindow &window) {
    window.draw(_paddle_sprite);
}

//void	Paddle::updateBallPosX(Ball &ball, int x) { }