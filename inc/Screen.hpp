#include <iostream>
#include "Game.hpp"
#include "Draw.hpp"


class Screen
{
	private:
	Game	*game;
	Draw	*draw;
	int		lvl = 1;

	public:
	Screen(const int height, const int width);
	~Screen(void);
	runGame
};
