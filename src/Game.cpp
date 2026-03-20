#include "../inc/Game.hpp"

Game::Game(const int lvl, const int width, const int height) : _width(width), _height(height) {
	level = new Level(lvl);
	ball = new Ball(40.f, 300.f, 60.f, spriteBall);
	paddle = createPaddle(100, 20,  0, 0, 45);
	return;
}

Game::~Game(void) {
	delete level;
	delete ball;
	delete paddle;
	return;
}

&Paddle Game::createPaddle(const float paddle_width, const float paddle_height, float pos_x, float pos_y, const int speed){
	sf::RectangleShape paddleSprite(sf::Vector2f({paddle_width, paddle_height}));
    paddleSprite.setFillColor(sf::Color::Green);

	pos_x = _width/2 + pos_x;
    pos_y = _height*0.9 - pos_y;
    paddleSprite.setPosition({pos_x, pos_y});
	paddle = new Paddle(paddleSprite, speed);
	return paddle;
}