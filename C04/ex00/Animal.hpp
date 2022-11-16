#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(std::string name);
		Animal(const Animal &src);
		virtual ~Animal(void);

		Animal	&operator=(const Animal &src);

		virtual void	makeSound()const;
		std::string		getType()const;

	protected:
		std::string type;
};

#endif
