#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor is called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor is called" << std::endl;
	return ;
}

void	WrongCat::makeSound(void)const
{
	std::cout << "COU COU" << std::endl;
}
