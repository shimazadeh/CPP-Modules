#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->CatBrain = new Brain();
	std::cout << "Cat default constructor is called" << std::endl;
	return ;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Cat copy constructor is called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor is called" << std::endl;
	delete CatBrain;
	return ;
}

void	Cat::makeSound(void)const
{
	std::cout << "Meeeeeeeow" << std::endl;
}

Brain	*Cat::getBrain(void)const
{
	return (this->CatBrain);
}
