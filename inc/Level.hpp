#include <iostream>
#include <stdexcept>
#include <fstream>
#include <sstream>

class	Level {
	private:
		//int								_lvl;
		std::vector<std::vector<int>>	_brick_map;
		/* protecting just in case */
		//int _max_lvl = 3;

		void	print_map() const;

	public:
		Level(const int lvl);
		~Level(void);
		void	loadMap(const int lvl);

};