#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Dog : public Animal
{
	public:
	Dog(void);
	Dog(const Dog &other);
	~Dog(void);

	Dog				&operator=(const Dog &other);
	virtual Animal	&operator=(const Animal &other);
	virtual void	makeSound(void)const;
	virtual	Brain	*getBrain(void)const;

	private:
	Brain	*DogBrain;
};

#endif
