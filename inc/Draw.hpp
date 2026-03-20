#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Draw
{
	private:
	sf::RenderWindow& _window;
	public:
	Draw(sf::RenderWindow& window);
	~Draw(void);

	void	drawBackground(const float &height, const float &width);
	void	drawRectangle(const float &x, const float &y, const float &height, const float &width);
	void	drawCircle(const float &x, const float &y, const float &radius);
};
