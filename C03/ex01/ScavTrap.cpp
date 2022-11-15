#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap calling default constructor" << std::endl;
	this->Name = "";
	this->Hit = 100;
	this->Energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << "ScavTrap calling Name constructor" << std::endl;
	this->Name = str;
	this->Hit = 100;
	this->Energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor is called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: " << this->Name << " is calling destructor" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap &a)
{
	std::cout << "ScavTrap assignment operator is called" << std::endl;
	this->Name = a.getName();
	this->Hit = a.getHit();
	this->Energy = a.getEnergy();
	this->damage = a.getDamage();
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap with name: " <<
	this->Name << " is in Gate keeper mode" << std::endl;
	return ;
}


void	ScavTrap::attack(const std::string &target)
{
	if (this->Energy > 0 && this->Hit > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target <<
		" causing " << this->damage << " points of damage " << std::endl;
		this->Energy--;
	}
	else
	{
		std::cout << "ScavTrap: " << this->Name <<  " cannot do anything with energy point of "
		<< this->Energy << " and hit points of: " << this->damage << std::endl;
	}
	return ;
}
