#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string human_name): name(human_name)
{
	// this->weapon = "";
	return ;
}

HumanB::~HumanB(void){
	std::cout << "HB destructor is called" << std::endl;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->name;
	std::cout << "attack with their";
	std::cout << this->weapon->getType();
}

void	HumanB::setWeapon(Weapon &name)
{
	this->weapon = &name;
	return ;
}
