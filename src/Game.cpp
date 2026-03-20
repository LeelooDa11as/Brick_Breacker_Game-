#include "../inc/Game.hpp"

Game::Game(const int lvl, const unsigned int width, const unsigned int height) : _width(width), _height(height) {
	level = new Level(lvl);
	paddle = createPaddle(100, 20,  0, 0, 45);
	ball = createBall(10,  0, 0, 45);	
	return;
}

Game::~Game(void) {
	delete level;
	delete ball;
	delete paddle;
	return;
}

Paddle* Game::createPaddle(const float paddle_width, const float paddle_height, float pos_x, float pos_y, const int speed){
	sf::RectangleShape paddleSprite(sf::Vector2f({paddle_width, paddle_height}));
    paddleSprite.setFillColor(sf::Color::Green);

	pos_x = _width/2 + pos_x;
    pos_y = _height*0.9f - pos_y;
    paddleSprite.setPosition({pos_x, pos_y});
	paddle = new Paddle(paddleSprite, speed);
	return paddle;
}

Ball*	Game::createBall(const float radius, float pos_x, float pos_y, const int speed) {
	sf::CircleShape	ballSprite(radius);
	ballSprite.setFillColor(sf::Color::Yellow);

	pos_x = _width/2 + pos_x;
	pos_y = _height*0.9f - pos_y;
	std::cout << pos_x << pos_y << std::endl; // delete later
	ballSprite.setOrigin({radius, radius});
	ballSprite.setPosition({100, 100});
	ball = new Ball(ballSprite, speed);
	return ball;
}

sf::CircleShape Game::getBallSprite(void) {
	return (this->ball->getBallSprite());
}