#include "../inc/Game.hpp"

Game::Game(const int lvl, const unsigned int width, const unsigned int height) : _width(width), _height(height) {
	// dimesntions of objects
		// paddle
	float	paddle_width = 100;
	float	paddle_height = 20;
	float	paddle_speed = 5;
	float	paddle_pos_x = 0;
	float	paddle_pos_y = _height/2 - 20;
		// ball
	float	ball_radius = 10;
	float	ball_pos_x = 0;
	float	ball_pos_y = paddle_pos_y - paddle_height/2 - ball_radius;
	float	ball_speed = 7;


	level = new Level(lvl, static_cast<float>(_width), static_cast<float>(_height));
	paddle = createPaddle(paddle_width, paddle_height,  paddle_pos_x, paddle_pos_y, paddle_speed);
	ball = createBall(ball_radius, ball_pos_x, ball_pos_y, ball_speed);
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

    paddleSprite.setOrigin({paddle_width/2, paddle_height/2});
    paddleSprite.setPosition({pos_x, pos_y});
	paddle = new Paddle(paddleSprite, speed);
	return paddle;
}

Ball*	Game::createBall(const float radius, float pos_x, float pos_y, const int speed) {
	sf::CircleShape	ballSprite(radius);
	ballSprite.setFillColor(sf::Color::Yellow);

	ballSprite.setOrigin({radius, radius});
	ballSprite.setPosition({pos_x, pos_y});
	ball = new Ball(ballSprite, speed);
	return ball;
}

/*const sf::CircleShape& 		Game::getBallSprite(void) const {
	return (this->ball->getBallSprite());
}

const sf::RectangleShape&	Game::getPaddleSprite(void) const {
	return (this->paddle->getPaddleSprite());
}*/

void						Game::movePaddle(const std::string &side) const {
	paddle->paddleMove(side, static_cast<float>(_width));
}

void						Game::drawGame(sf::RenderWindow &window) {
	paddle->draw(window);
	ball->draw(window);
	level->draw(window);
}

