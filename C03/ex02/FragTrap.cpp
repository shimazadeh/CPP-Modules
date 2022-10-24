#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str)
{
	this->Name = str;
	this->Hit = 100;
	this->Energy = 100;
	this->damage = 30;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor is called" <<std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "high five!!!" << std::endl;
	return ;
}
