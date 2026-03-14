#include <iostream>
#include <stdexcept>

class	Level {
	private:
		int	_lvl;
		//map of bricks depending on the level

		/* protecting just in case */
		int _max_lvl = 3;

	public:
		Level(const int lvl);
		~Level(void);

};