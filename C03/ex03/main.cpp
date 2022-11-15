
#include "DiamondTrap.hpp"

int	main(void)
{

	ClapTrap	test1("test1");

	test1.attack("me");
	test1.takeDamage(7);
	test1.beRepaired(8);

	std::cout << "--------------------------------------" << std::endl;

	ScavTrap	test2("test2");

	test2.attack("you");
	test2.takeDamage(2);
	test2.beRepaired(1);
	test2.guardGate();

	std::cout << "--------------------------------------" << std::endl;

	FragTrap	test3("test3");

	test3.attack("them");
	test3.takeDamage(2);
	test3.beRepaired(1);
	test3.highFivesGuys();

	std::cout << "--------------------------------------" << std::endl;


	DiamondTrap	test4("test4");

	test4.whoAmI();
	test4.attack("them");
	test4.takeDamage(2);
	test4.beRepaired(1);
	test4.highFivesGuys();
	test4.guardGate();
	return (0);
}
