#include "Ball.hpp"
#include "Brick.hpp"
#include "Level.hpp"
#include "Paddle.hpp"

class Game
{
	private:
	Level	*level;
	Paddle	*paddle;
	Ball	*ball;

	public:
	Game(const int lvl);
	~Game(void);

	void	draw_ball();
	void	draw_paddle();
	void	draw_level();
};
