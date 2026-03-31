#include "Ball.hpp"
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
	Game(const int lvl, const unsigned int width, const unsigned int height);
	~Game(void);
	Paddle*	createPaddle(const float paddle_width, const float paddle_height, float pos_x, float pos_y, const int speed);
	Ball*	createBall(const float radius, float pos_x, float pos_y, const int speed);

	//const sf::CircleShape&		getBallSprite(void) const;
	//const sf::RectangleShape&	getPaddleSprite(void) const;

	void						movePaddle(const std::string &side) const;
	void						drawGame(sf::RenderWindow &window);
};
