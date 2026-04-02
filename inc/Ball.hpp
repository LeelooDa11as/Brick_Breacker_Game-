#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class	Ball {
	private:	
		sf::Vector2f	_dir_vect;

		/* design of the object */
		sf::CircleShape	_ball_sprite;
		float			_speed;

	public:
		Ball(sf::CircleShape ball_sprite, const float &speed);
		~Ball(void);

		void	draw(sf::RenderWindow &window);
		void	update(void);
		//void	bounceX(void);
		//void	bounceY(void);
};