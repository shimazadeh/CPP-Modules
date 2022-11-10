#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	Harl	test;

	std::cout << "[DEBUG]" <<std::endl;
	test.complain("DEBUG");
	std::cout << "------------------------------------------------" <<std::endl;


	std::cout << "[INFO]" <<std::endl;
	test.complain("INFO");
	std::cout << "------------------------------------------------" <<std::endl;

	std::cout << "[WARNING]" <<std::endl;
	test.complain("WARNING");
	std::cout << "------------------------------------------------" <<std::endl;

	std::cout << "[ERROR]" <<std::endl;
	test.complain("ERROR");
	std::cout << "------------------------------------------------" <<std::endl;

	test.complain("RANDOM");
	std::cout << "------------------------------------------------" <<std::endl;
	return (0);
}
