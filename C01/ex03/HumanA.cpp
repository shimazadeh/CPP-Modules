#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA:: HumanA(const char *str1, Weapon (const char str2)){
	this->name = str1;
	this->weapon = str2;
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
	std::cout << this->weapon.getType();
}
