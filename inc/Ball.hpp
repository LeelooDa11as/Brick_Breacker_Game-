#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class	Ball {
	private:
		/* position of the object */ 
		float	_speed;
		float	_pos_x;
		float	_pos_y;
		float	_dir_vect[2] = {1, 0};

		/* design of the object */
		const float		_radius = 10;
		sf::CircleShape	_ball_sprite;

	public:
		Ball(sf::CircleShape ball_sprite, const float &speed);
		~Ball(void);

		float	getPosX(void) const;
		float	getPoxY(void) const;

		void	setPosX(const float &x);
		void	setPosY(const float &y);

		// vertical bounce
		// horizontal bounce
		// brick bounce
		// paddle bounce

};