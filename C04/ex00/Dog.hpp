#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
	public:
	Dog(void);
	~Dog(void);

	virtual void	makeSound(void)const;
};

#endif
