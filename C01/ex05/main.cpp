#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl	test;

	test.complain("ERROR");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("DEBUG");
	test.complain("RANDOM");
	return (0);
}
