#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor is called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal destructor is called" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void)const
{
	return(this->type);
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "wrong animal sound!" << std::endl;
}
