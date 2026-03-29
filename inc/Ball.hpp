#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class	Ball {
	private:	
		//float	_dir_vect[2] = {1, 0};

		/* design of the object */
		sf::CircleShape	_ball_sprite;
		float			_speed;

	public:
		Ball(sf::CircleShape ball_sprite, const float &speed);
		~Ball(void);

		void	draw(sf::RenderWindow &window);
};