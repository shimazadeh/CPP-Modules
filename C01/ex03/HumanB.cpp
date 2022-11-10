#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string human_name): name(human_name), weapon(NULL)
{
	std::cout << "HB constructor is called" << std::endl;
	return ;
}

HumanB::~HumanB(void){
	std::cout << "HB destructor is called" << std::endl;
	return ;
}

void	HumanB::attack(void)
{
	if (this->weapon)
	{
		std::cout << this->name;
		std::cout << " attack with ";
		std::cout << this->weapon->getType() <<std::endl;
	}
	else
	{
		std::cout << this->name;
		std::cout << " cannot attack because it aint got no weapon!" <<std::endl;
	}
}

void	HumanB::setWeapon(Weapon &name)
{
	std::cout << "HB setting weapon" << std::endl;
	this->weapon = &name;
	return ;
}
