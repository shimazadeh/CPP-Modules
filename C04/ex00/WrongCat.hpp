#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:
	WrongCat(void);
	virtual ~WrongCat(void);

	void	makeSound(void)const;
};

#endif
