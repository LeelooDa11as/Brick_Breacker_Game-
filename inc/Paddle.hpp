#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Paddle
{
	private:
		/* position of the object */ 
		//float		_pos_x;
		//const float	_pos_y;
		sf::RectangleShape	_paddle_sprite;
		float				_speed;
	
	public:
		Paddle(sf::RectangleShape paddle_sprite, const float &speed);
		~Paddle(void);

		const sf::RectangleShape&	getPaddleSprite(void) const;

		//void	updateBallPosX(Ball &ball, int x);
		//void	setPosX(const float &new_pos_x);

		//float	getPosX(void) const;
		//float	getPosY(void) const;

		// void	changeWidth(const std::string &extra);
};
