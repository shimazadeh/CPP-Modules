#ifndef _HUMANB_H
# define _HUMANB_H

#include "Weapon.hpp"

class	HumanB
{
	public:

	HumanB(const char *human_name);
	~HumanB(void);

	Weapon	weapon;
	const char	*name;
	void	setWeapon(Weapon name);
	void	attack(void);

};

#endif
