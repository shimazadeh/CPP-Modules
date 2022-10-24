#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
{
	std::cout << "ClapTrap constructor is called" << std::endl;
	this->Name = str;
	this->Hit = 10;
	this->Energy = 10;
	this->damage = 0;
	return ;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "default ClapTrap constructor is called" << std::endl;
	this->Name = "";
	this->Hit = 10;
	this->Energy = 10;
	this->damage = 0;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor is called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->Energy > 0 && this->Hit > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target <<
		" causing " << this->damage << " points of damage " << std::endl;
		this->Energy--;
	}
	else
	{
		std::cout << "ClapTrap cannot do anything with energy point of"
		<< this->Energy << " and hit points of: " << this->damage << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	old;

	old = this->damage;
	this->damage = this->damage - amount;
	std::cout << "ClapTrap " << this->Name << " damaging " << " from damage points: "
	<< old << " to: " << this->damage << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy > 0 && this->Hit > 0)
	{
		this->Hit = this->Hit + amount;
		this->Energy--;
		std::cout << "ClapTrap " << this->Name << " repairs with hit points of: "
		<< this->Hit << " and energy point of: " << this->Energy << std::endl;
	}
	else
	{
		std::cout << "ClapTrap cannot repair with energy points of: " << this->Energy
		<< " and hit point of " << this->Hit << std::endl;
	}
	return ;
}
