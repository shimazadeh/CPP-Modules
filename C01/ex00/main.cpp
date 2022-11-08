#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << "testing the class" << std::endl;
	Zombie	test2("test2");
	test2.announce();

	std::cout << "testing the random champ function" << std::endl;
	randomChump("test1");

	std::cout << "testing the newZombie" << std::endl;
	Zombie	*test3 = newZombie("test3");
	test3->announce();
	delete test3;

	return (0);
}
