#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA:: HumanA(const std::string str1, Weapon &str2): name(str1), weapon(&str2)
{
	std::cout << "HA constructor is called" << std::endl;
	return ;
}

HumanA::~HumanA(void){
	std::cout << "HA destructor is called" << std::endl;
	return ;
}

void	HumanA::attack(void)
{
	std::cout << this->name;
	std::cout << " attack with  ";
	std::cout << this->weapon->getType() <<std::endl;
}
