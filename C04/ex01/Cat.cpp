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
	delete this->CatBrain;
	return ;
}

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		std::cout << "Cat assignment operator is called" << std::endl;
		this->type = src.getType();
		this->CatBrain = src.getBrain();
	}
	return (*this);
}

void	Cat::makeSound(void)const
{
	std::cout << "Meeeeeeeow" << std::endl;
}

Brain	*Cat::getBrain(void)const
{
	return (this->CatBrain);
}
