#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor is called" << std::endl;
}

Brain::Brain(const Brain & src)
{
	std::cout << "copy constructor is called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor is called" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "brain ideas assignment is called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

