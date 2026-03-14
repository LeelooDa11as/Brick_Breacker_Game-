#include <iostream>

class Brick
{
	private:
		/* position of the object */
		float		_pos_x;
		float		_pos_y;

		/* design of the object */
		int			_level;
		float		_height;
		float		_width;
		
	public:
		Brick(const int level, const float &pos_x, const float &pos_y);
		~Brick(void);
		//void brickHit(void);
};