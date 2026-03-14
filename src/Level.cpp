#include "../inc/Level.hpp"

Level::Level(const int lvl) {
	/* if (lvl > this->_max_lvl) {
		throw (std::runtime_error("Level exceeds maximum allowed value"));
	} */ // for future checking from Game
	std::cout << "Level class constructor called" << std::endl;
	// depending of the level calls a specific brick map distribution from the file
	return;
}

Level::~Level(void) {
	std::cout << "Level class destructor called" << std::endl;
	return;
}
