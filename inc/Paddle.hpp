#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Paddle
{
	private:
		/* position of the object */ 
		//float		_pos_x;
		//const float	_pos_y;
		float				_speed;
		sf::RectangleShape	_paddle_sprite;

		/* design of the object */
		const float	_height = 20;
		float		_width = 50;
	
	public:
		Paddle(sf::RectangleShape paddle_sprite, const float &speed);
		~Paddle(void);

		//void	updateBallPosX(Ball &ball, int x);
		void	setPosX(const float &new_pos_x);

		float	getPosX(void) const;
		float	getPosY(void) const;

		// void	changeWidth(const std::string &extra);
};
