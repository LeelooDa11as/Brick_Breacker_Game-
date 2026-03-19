#include "../inc/Level.hpp"

Level::Level(const int lvl) {
	if (lvl > this->_max_lvl) {
		throw (std::runtime_error("Level exceeds maximum allowed value"));
	}
	std::cout << "Level class constructor called" << std::endl;
	loadMap(lvl);	
	return;
}

Level::~Level(void) {
	std::cout << "Level class destructor called" << std::endl;
	return;
}

void	Level::print_map() const {
	for (size_t y = 0; y < _brick_map.size(); ++y) {
		for (size_t x = 0; x < _brick_map[y].size(); ++x) {
			std::cout << _brick_map[y][x] << " ";
		}
		std::cout << std::endl;
	}
}

void	Level::loadMap(const int lvl) {
	std::string	filename;
	
	switch (lvl) {
		case 1: filename = "../maps/Level_1.txt";
			break;
		case 2: filename = "../maps/Level_2.txt";
			break;
		case 3: filename = "../maps/Level_3.txt";
			break;
		default:
			throw std::runtime_error("Unknown level requested");
	}

	std::ifstream	file(filename);
	if (!file.is_open()) {
		throw std::runtime_error("File System Error: Could not open the file");
	}
	std::string	line;
	_brick_map.clear();

	while (std::getline(file, line)) {
		std::vector<int>	row;
		std::stringstream	ss(line);
		int					val;

		while (ss >> val) {
			row.push_back(val);
		}
		if (!row.empty()) {
			this->_brick_map.push_back(row);
		}
	}
	//print_map(); 
}
