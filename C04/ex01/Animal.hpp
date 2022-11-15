#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &src);
		virtual	~Animal(void);

		Animal	&operator=(const Animal &src);

		virtual Brain	*getBrain()const;
		virtual void	makeSound()const;
		std::string		getType()const;

	protected:
		std::string type;
		Brain	*animal_brain;
};

std::ostream & operator<<( std::ostream & o, Animal const &x);

#endif
