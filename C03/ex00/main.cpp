#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	test("test1");

	// test1//testing the limits
	test.attack("you");
	test.attack("you");
	test.attack("you");
	test.attack("you");
	test.attack("you");
	test.attack("you");
	test.attack("you");
	test.attack("you");
	test.attack("you");
	test.attack("you");
	test.attack("you");

	std::cout << "--------------------------------------" << std::endl;
	// test2//testing copy constructor
	ClapTrap	test2(test);

	test2.attack("you");
	test2.beRepaired(1);
	test2.takeDamage(7);
	test2.beRepaired(8);
	test2.takeDamage(18);

	std::cout << "--------------------------------------" << std::endl;
	//test3// testing the default/name/assignment constructor
	ClapTrap	test3;
	ClapTrap	test4("test4");

	test3 = test4;
	test3.attack("you");
	test3.beRepaired(1);
	test3.takeDamage(7);
	test3.beRepaired(8);
	test3.takeDamage(18);
	return (0);
}
