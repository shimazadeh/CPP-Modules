#ifndef _FRAGTRAP_H
# define _FRAGTRAP_H

#include "ClapTrap.hpp"

class	FragTrap: virtual public	ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &other);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap &a);

		void	highFivesGuys(void);

	protected:
		const static	int default_damage = 30;
		const static	int default_hit = 100;
		const static	int default_energy = 100;
};
#endif
