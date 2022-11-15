#ifndef _FRAGTRAP_H
# define _FRAGTRAP_H

#include "ClapTrap.hpp"

class	FragTrap: public	ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap &other);
		~FragTrap(void);

		FragTrap &	operator=(FragTrap &a);

		void	highFivesGuys(void);

};
#endif
