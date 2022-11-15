#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		virtual ~Cat(void);

		Cat				&operator=(const Cat &other);

		virtual void	makeSound(void)const;
		virtual	Brain	*getBrain(void)const;

	private:
		Brain	*CatBrain;
};

#endif
