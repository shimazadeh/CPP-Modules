#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA:: HumanA(const std::string str1, Weapon str2): name(str1) , weapon(&str2)
{
	return ;
}

HumanA::~HumanA(void){
	std::cout << "HA destructor is called" << std::endl;
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->name;
	std::cout << "attack with their";
	std::cout << this->weapon->getType();
}
