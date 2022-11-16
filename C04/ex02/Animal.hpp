#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include "Brain.hpp"

class Animal
{
	public:
		virtual	~Animal(void);

		Animal	&operator=(const Animal &src);

		virtual Brain	*getBrain()const;
		virtual void	makeSound()const = 0;
		std::string		getType()const;

	protected:
		std::string type;
		Brain		*animal_brain;
};

std::ostream & operator<<( std::ostream & o, Animal const &x);

#endif
