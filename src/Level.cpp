#include "../inc/Level.hpp"

Level::Level(const int lvl, const float &window_width, const float &window_height) {
	//if (lvl > this->_max_lvl) {
	//	throw (std::runtime_error("Level exceeds maximum allowed value"));
	//}
	std::cout << "Level class constructor called" << std::endl;
	loadMap(lvl);
	createBricks(window_width, window_height);
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
		case 1: filename = "./maps/Level_1.txt";
			break;
		case 2: filename = "./maps/Level_2.txt";
			break;
		case 3: filename = "./maps/Level_3.txt";
			break;
		//default:
		//	throw std::runtime_error("Unknown level requested");
	}

	std::ifstream	file(filename);
	if (!file.is_open()) {
		std::cout << "NO HA ENCONTRADO LA RUTA" << std::endl;
	}
	//	throw std::runtime_error("File System Error: Could not open the file");
	//}
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
	print_map(); 
}

void	Level::createBricks(const float &window_width, const float &window_height) {
	if (_brick_map.empty()) {
			std::cout << "!!!!!! LOSER !!!!!!!!" << std::endl;
			return;
	}
	std::cout << "!!!!!! I WAS HERE !!!!!!!!" << std::endl;
	float	rows = _brick_map.size();
	float	columns = _brick_map[0].size();

	float	brick_w = window_width / columns;
	float	brick_h = 30.f;

	float	start_x = -(window_width / 2);
	float	start_y = -(window_height / 2) + 50.f;


	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			int	val = _brick_map[i][j];
			if (val > 0){
				float	x = start_x + (j * brick_w) + (brick_w / 2);
				float	y = start_y + (i * brick_h) + (brick_h / 2);
				_bricks.push_back(Brick(val, x, y, brick_w, brick_h));
			}
		}
	}
}

void	Level::draw(sf::RenderWindow &window) {
	//std::cout << "!!!!!! I WAS HERE !!!!!!!!" << std::endl;
	for (auto& brick : _bricks) {
		brick.draw(window);
		//std::cout << "!!!!!! I WAS HERE !!!!!!!!" << std::endl;
	}
}
