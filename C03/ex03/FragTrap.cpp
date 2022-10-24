#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str)
{
	std::cout << "FragTrap constructor is called" <<std::endl;
	this->Name = str;
	this->Hit = 100;
	this->Energy = 100;
	this->damage = 30;
	return ;
}

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor is called" <<std::endl;
	this->Name = "";
	this->Hit = 100;
	this->Energy = 100;
	this->damage = 30;
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
