#ifndef _HUMANB_H
# define _HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class	HumanB
{
public:

	HumanB(const std::string _name);
	~HumanB(void);

	void	setWeapon(Weapon &name);
	void	attack(void);

private:
	Weapon				*weapon;
	const std::string			name;
};

#endif
