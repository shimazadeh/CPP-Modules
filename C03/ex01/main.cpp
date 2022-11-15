#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	test1("test1");

	test1.attack("me");
	test1.beRepaired(1);
	test1.takeDamage(7);
	test1.beRepaired(8);
	test1.takeDamage(18);

	std::cout << "--------------------------------------" << std::endl;

	ScavTrap	test2("test2");

	test2.attack("you");
	test2.takeDamage(2);
	test2.beRepaired(1);
	test2.takeDamage(7);
	test2.beRepaired(8);
	test2.takeDamage(18);
	test2.guardGate();

	return (0);
}
