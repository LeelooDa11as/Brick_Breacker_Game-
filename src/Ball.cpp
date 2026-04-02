#include <Ball.hpp>

Ball::Ball(sf::CircleShape ball_sprite, const float &speed) : _ball_sprite(ball_sprite), _speed(speed) {
	std::cout << "Ball class constructor has been called" << std::endl;
	_dir_vect = {0, -(_speed)};
    return;
}

Ball::~Ball() {
    std::cout << "Ball class destructor has been called" << std::endl;
    return;
}

void	Ball::draw(sf::RenderWindow &window) {
    window.draw(_ball_sprite);
}

void	Ball::update(void) {
    _ball_sprite.move(_dir_vect);
    //sf::Vector2f	pos = _ball_sprite.getPosition();
}

/*void	Ball::bounceX(void) {

}

void	Ball::bounceY(void) {

}
*/