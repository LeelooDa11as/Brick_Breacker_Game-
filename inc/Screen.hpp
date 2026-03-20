#include <iostream>
#include "Game.hpp"
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>


class Screen
{
	private:
	Game	*game;
	int		lvl = 1;
	float	height;
	float	width;

	public:
	Screen(const unsigned int height, const unsigned  int width);
	~Screen(void);

	void	runGame(void);
};
