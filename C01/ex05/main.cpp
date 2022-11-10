#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl	test;

	test.complain("ERROR");
	std::cout << "------------------------------------------------" <<std::endl;
	test.complain("INFO");
	std::cout << "------------------------------------------------" <<std::endl;
	test.complain("WARNING");
	std::cout << "------------------------------------------------" <<std::endl;
	test.complain("DEBUG");
	std::cout << "------------------------------------------------" <<std::endl;
	test.complain("RANDOM");
	std::cout << "------------------------------------------------" <<std::endl;

	return (0);
}
