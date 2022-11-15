#ifndef _SCAVTRAP_H
# define _SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string str);
		ScavTrap(ScavTrap &other);
		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap &a);

		void	attack(const std::string &target);
		void	guardGate(void);

};
#endif
