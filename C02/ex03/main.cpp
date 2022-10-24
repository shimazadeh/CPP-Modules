#include "Fixed.hpp"
#include <iostream>
#include "Point.hpp"

int	main(void){
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point p(10, 15);
	Point p1(90, 90);

	std::cout << bsp(a, b, c, p) << std::endl;
	std::cout << bsp(a, b, c, p1) << std::endl;

	return 0;
}

