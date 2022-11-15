#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str)
{
	std::cout << "DiamondTrap constructor is called" << std::endl;
	this->_name = str;
	ClapTrap::Name = str + "_clap_name";
	this->Hit = FragTrap::default_hit;
	this->Energy = ScavTrap::default_energy;
	this->damage = FragTrap::default_damage;
}

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &src)
{
	std::cout << "DiamondTrap copy constructor is called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor is calledd" << std::endl;
}

void	DiamondTrap::whoAmI(void)const
{
	std::cout << "the name is " << this->_name << " with ClapTrap name of " << ClapTrap::Name <<std::endl;
	std::cout << "hit point: " << this->Hit <<std::endl;
	std::cout << "energy point: " << this->Energy << std::endl;
	std::cout << "damage point: " << this->damage << std::endl;
	return ;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
