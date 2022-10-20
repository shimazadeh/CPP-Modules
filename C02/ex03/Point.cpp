#include "Point.hpp"
#include "Fixed.hpp"

Point::Point()
{
	this->x = 0;
    this->y = 0;
	return ;
}

Point::~Point()
{
	return ;
}

Point::Point(Point const &a)
{
	*this = a;
}

Point::Point(float a, float b)
{
    this->x = a;
    this->y = b;
    return ;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float   area1;
    float   area2;
    float   area3;
    float   area0;

    area0 = area(a, b, c);
    area1 = area(point, a, b);
    area2 = area(point, b, c);
    area3 = area(point, a, c);

    return (area0 == area1 + area2 + area3);
}

float   area(Point const a, Point const b, Point const c)
{
    float   res;

    res = (a.x(b.y - c.y) + b.x(c.y - a.y) + c.x(a.y - b.y)) / 2.00;
    return (res);
}