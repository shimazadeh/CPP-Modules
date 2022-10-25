#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
	virtual	~Animal(void);

	Animal	&operator=(const Animal &src);

	virtual Brain	*getBrain()const;
	virtual void	makeSound()const;
	std::string		getType()const;

	protected:
	// Animal(void);
	// Animal(const Animal &src);
	std::string type;
	Brain	*animal_brain = NULL;
};

std::ostream & operator<<( std::ostream & o, Animal const &x);

#endif
