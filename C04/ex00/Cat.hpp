#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
	public:
	Cat(void);
	~Cat(void);

	virtual void	makeSound(void)const;
};

#endif
