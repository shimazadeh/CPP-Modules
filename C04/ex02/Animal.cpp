#include "Animal.hpp"

Animal::~Animal(void)
{
	std::cout << "Animal destructor is called" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &src)
{
	if (this != &src)
	{
		std::cout << "Animal assignment operator is called" << std::endl;
		this->type = src.getType();
		this->animal_brain = src.getBrain();
	}
	return (*this);
}

std::string	Animal::getType(void)const
{
	return(this->type);
}

Brain	*Animal::getBrain(void)const
{
	return(this->animal_brain);
}

std::ostream & operator<<(std::ostream & o, Animal const &x){
	o << x.getType();
	return (o);
}
