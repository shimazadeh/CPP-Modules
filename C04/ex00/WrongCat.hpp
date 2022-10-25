#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	public:
	WrongCat(void);
	~WrongCat(void);

	virtual void	makeSound(void)const;
};

#endif
