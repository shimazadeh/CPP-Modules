#include "Weapon.hpp"

Weapon::Weapon(void){
	std::cout << "default constructor is called" << std::endl;
	return ;
}

Weapon::Weapon(std::string name): type(name)
{
	std::cout << "name constructor is called" << std::endl;
	return ;
}

Weapon::~Weapon(void){

	std::cout << "default destructor is called" << std::endl;
	return ;
}

const std::string &Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(const std::string&	new_type)
{
	this->type = new_type;
	return ;
}

