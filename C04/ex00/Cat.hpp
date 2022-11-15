#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		virtual ~Cat(void);

		virtual void	makeSound(void)const;
};

#endif
