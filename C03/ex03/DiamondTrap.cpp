#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str)
{
	std::cout << "DiamondTrap constructor is called" << std::endl;
	this->name = str;
	this->ClapTrap::Name = str + "_clap_name";
	// this->Hit = FragTrap::Hit;
	// this->Energy = ScavTrap::Energy;
	// this->damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor is calledd" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "the name is " << this->name << " with ClapTrap name of " << this->ScavTrap::Name <<std::endl;
	std::cout << "hit point: " << this->FragTrap::Hit <<std::endl;
	std::cout << "energy point: " << this->ScavTrap::Energy << std::endl;
	std::cout << "damage point: " << this->FragTrap::damage << std::endl;
	return ;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
