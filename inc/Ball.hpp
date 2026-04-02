#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class	Ball {
	private:	
		sf::CircleShape	_ball_sprite;
		sf::Vector2f	_dir_vect;
		float			_speed;
		float			_radius;
		float			_window_width;
		float			_window_height;

	public:
		Ball(sf::CircleShape ball_sprite, const float &speed, const float &window_width, const float &window_height);
		~Ball(void);

		void	draw(sf::RenderWindow &window);
		void	update(void);
		void	bounceX(void);
		void	bounceY(void);
};