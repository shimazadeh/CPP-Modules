#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "ScavTrap constructor is called" << std::endl;
	this->Name = str;
	this->Hit = 100;
	this->Energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor is called" << std::endl;
	this->Name = "";
	this->Hit = 100;
	this->Energy = 50;
	this->damage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor is called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap with name: " <<
	this->Name << " is in Gate keeper mode" << std::endl;
	return ;
}

