#ifndef _WRONGANIMAL_HPP
#define _WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
	WrongAnimal(void);
	// Animal(const Animal &src);
	~WrongAnimal(void);

	// Animal	&operator=(const Animal &src);

	virtual void	makeSound()const;
	std::string		getType()const;

	protected:
	std::string type;
};

#endif
