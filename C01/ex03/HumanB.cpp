#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string human_name): name(human_name)
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
	std::cout << this->name;
	std::cout << " attack with ";
	std::cout << this->weapon->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon &name)
{
	std::cout << "HB setting weapon" << std::endl;
	this->weapon = &name;
	return ;
}
