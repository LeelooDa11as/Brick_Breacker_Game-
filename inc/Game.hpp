#include "Ball.hpp"
#include "Brick.hpp"
#include "Level.hpp"
#include "Paddle.hpp"
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Paddle;

class Game
{
	private:
	Level	*level;
	Paddle	*paddle;
	Ball	*ball;

	int		_width;
	int		_height;

	public:
	Game(const int lvl, const int width, const int height);
	~Game(void);
	Paddle*	createPaddle(const float paddle_width, const float paddle_height, float pos_x, float pos_y, const int speed);
	Ball*	createBall(const float radius, float pos_x, float pos_y, const int speed);
};
