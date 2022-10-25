#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat default constructor is called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor is called" << std::endl;
	return ;
}

void	Cat::makeSound(void)const
{
	std::cout << "Meeeeeeeow" << std::endl;
}
