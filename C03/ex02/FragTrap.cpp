#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor is called" << std::endl;
	this->Name = "";
	this->Hit = 100;
	this->Energy = 100;
	this->damage = 30;
	return ;
}

FragTrap::FragTrap(std::string str)
{
	std::cout << "FragTrap Name constructor is called" << std::endl;
	this->Name = str;
	this->Hit = 100;
	this->Energy = 100;
	this->damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap &src)
{
	std::cout << "FragTrap copy constructor is called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor is called" <<std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap &a)
{
	std::cout << "FragTrap assignment operator is called" << std::endl;
	this->Name = a.getName();
	this->Hit = a.getHit();
	this->Energy = a.getEnergy();
	this->damage = a.getDamage();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap (" << this->Name << ") says high five!!!" << std::endl;
	return ;
}
