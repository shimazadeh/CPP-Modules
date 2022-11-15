#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		virtual ~Dog(void);

		virtual void	makeSound(void)const;
};

#endif
