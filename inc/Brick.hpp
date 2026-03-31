#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Brick
{
	private:
		sf::RectangleShape	_brick_sprite;
		int					_level;
		
	public:
		Brick(const int level, const float &pos_x, const float &pos_y, const float &width, const float &height);
		~Brick(void);
		void	draw(sf::RenderWindow &window);
		//bool isDestroyed(void) const;
};