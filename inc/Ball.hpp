#include <iostream>

class	Ball {
	private:
		/* position of the object */ 
		float	_speed;
		float	_pos_x;
		float	_pos_y;
		float	_dir_vect[2] = {1, 0};

		/* design of the object */
		const float	_radius = 10;

	public:
		Ball(const float &speed, const float &pos_x, const float pos_y);
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