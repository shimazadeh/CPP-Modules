#include "Point.hpp"

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

Point &	Point::operator=(Point const &a){

	this->x = a.x;
    this->y = a.y;
	return (*this);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float   area1;
    float   area2;
    float   area3;
    float   area0;
    float   area4;

    area0 = a.area(b, c);
    area1 = point.area(a, b);
    area2 = point.area(b, c);
    area3 = point.area(a, c);
    area4 == (area1 + area2 + area3);

    std::cout << area0 <<std::endl;
    std::cout << area1 <<std::endl;
    std::cout << area2 <<std::endl;
    std::cout << area3 <<std::endl;
    std::cout << "sum is " << area4 <<std::endl;
    return (area0 == area4);
}

float   Point::area(Point const b1, Point const c1)const
{
    Fixed   res;
    Point   b(b1);
    Point   c(c1);
    Fixed   d(2.0f);

    res = ((this->x) * (b.y - c.y) + b.x * (c.y - this->y) + c.x * (this->y - b.y)) / d;
    return (res.toFloat());
}
