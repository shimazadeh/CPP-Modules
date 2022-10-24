#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	test("test1");
	ScavTrap	test2("test2");
	FragTrap	test3("test3");

	test.attack("me");
	test.takeDamage(2);
	test.beRepaired(1);
	test.takeDamage(7);
	test.beRepaired(8);
	test.takeDamage(18);

	test2.attack("you");
	test2.takeDamage(2);
	test2.beRepaired(1);
	test2.takeDamage(7);
	test2.beRepaired(8);
	test2.takeDamage(18);
	test2.guardGate();

	test3.attack("them");
	test3.takeDamage(2);
	test3.beRepaired(1);
	test3.takeDamage(7);
	test3.beRepaired(8);
	test3.takeDamage(18);
	test3.highFivesGuys();
	return (0);
}
