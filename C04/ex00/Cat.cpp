#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat default constructor is called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Cat copy constructor is called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor is called" << std::endl;
}

void	Cat::makeSound(void)const
{
	std::cout << "Meeeeeeeow" << std::endl;
}
