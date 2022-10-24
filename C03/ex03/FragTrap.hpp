#ifndef _FRAGTRAP_HPP
# define _FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: public	ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);

		void	highFivesGuys(void);

};
#endif
