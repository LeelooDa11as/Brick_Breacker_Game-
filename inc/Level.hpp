#include <iostream>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include "Brick.hpp"


class	Level {
	private:
		//int								_lvl;
		std::vector<std::vector<int>>	_brick_map;
		std::vector<Brick> 				_bricks;
		/* protecting just in case */
		//int _max_lvl = 3;
		void	print_map() const;

	public:
		Level(const int lvl, const float &window_width, const float &window_height);
		~Level(void);
		void	loadMap(const int lvl);
		void	createBricks(const float &window_width, const float &window_height);
		void	draw(sf::RenderWindow &window);
};