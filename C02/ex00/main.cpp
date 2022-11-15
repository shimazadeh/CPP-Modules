#include "Fixed.hpp"

int	main(void){
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBites() << std::endl;
	std::cout << b.getRawBites() << std::endl;
	std::cout << c.getRawBites() << std::endl;

	return (0);
}
