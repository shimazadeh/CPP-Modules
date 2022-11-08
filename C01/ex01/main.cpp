#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*array = zombieHorde(10, "shim shima");

	for (int i = 0; i < 10; i++)
		array->announce();

	delete [] array;
}
