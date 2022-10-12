#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	result[N];

	i = 0;
	while(i < N)
	{
		result[i].name = name;
		i++;
	}
	return (result);
}
