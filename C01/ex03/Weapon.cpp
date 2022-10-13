#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(const char *name){

	this->type = name;
	return ;
}

Weapon::~Weapon(void){

	return ;
}

const char	*Weapon::getType(void)
{
	const char	*result;

	result = this->type;
	return (result);
}

void	Weapon::setType(const char *new_type)
{
	this->type = new_type;
	return ;
}

