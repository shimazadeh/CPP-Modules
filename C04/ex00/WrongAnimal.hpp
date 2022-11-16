#ifndef _WRONGANIMAL_HPP
#define _WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
	WrongAnimal(void);
	virtual ~WrongAnimal(void);


	void			makeSound()const;
	std::string		getType()const;

	protected:
	std::string type;
};

#endif
