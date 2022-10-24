#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	test("test1");
	ScavTrap	test2("test2");

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
	return (0);
}
