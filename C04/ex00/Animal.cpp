#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Animal default constructor is called" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor is called" << std::endl;
	return ;
}

std::string	Animal::getType(void)const
{
	return(this->type);
}

void	Animal::makeSound(void)const
{
	std::cout << "All the possible animal sound in the world!" << std::endl;
}
