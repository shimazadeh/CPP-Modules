#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Dog default constructor is called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "Dog copy constructor is called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor is called" << std::endl;
}

void	Dog::makeSound(void)const
{
	std::cout << "Bark Bark" << std::endl;
}
