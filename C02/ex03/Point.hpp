#ifndef _POINT_H
# define _POINT_H

# include "Fixed.hpp"

class	Point{
	public:
	Point(void);
	Point(float a, float b);
	Point(Point const &a);
	~Point(void);

	Point &			operator=(Point const &a);
	float			area(Point const b1, Point const c1)const;

	private:
		Fixed	x;
		Fixed	y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
