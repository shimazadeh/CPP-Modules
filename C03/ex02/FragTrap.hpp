#ifndef _FRAGTRAP_H
# define _FRAGTRAP_H

#include "ClapTrap.hpp"

class	FragTrap: public	ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap(void);

		void	highFivesGuys(void);

};
#endif
