#inlcude "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	result;

	result->name = name;

	return (result);
}
