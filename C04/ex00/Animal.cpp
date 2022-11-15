#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Animal default constructor is called" << std::endl;
	return ;
}

Animal::Animal(std::string name)
{
	this->type = name;
	std::cout << "Animal name constructor is called" << std::endl;
	return ;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal copy constructor is called" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor is called" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

std::string	Animal::getType(void)const
{
	return(this->type);
}

void	Animal::makeSound(void)const
{
	std::cout << "All the possible animal sound in the world!" << std::endl;
}
