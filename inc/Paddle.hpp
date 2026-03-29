#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Paddle
{
	private:
		sf::RectangleShape	_paddle_sprite;
		float				_width;
		float				_speed;
	
	public:
		Paddle(sf::RectangleShape paddle_sprite, const float &speed);
		~Paddle(void);

		void						paddleMove(const std::string &side, const float window_width);
		void						draw(sf::RenderWindow &window);

		// void	changeWidth(const std::string &extra);
};
