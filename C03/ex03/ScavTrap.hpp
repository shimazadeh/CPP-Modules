#ifndef _SCAVTRAP_H
# define _SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string str);
		ScavTrap(ScavTrap &other);
		~ScavTrap(void);

		ScavTrap &	operator=(ScavTrap &a);

		void	attack(const std::string &target);
		void	guardGate(void);

	protected:
		const static	int default_damage = 20;
		const static	int default_hit = 100;
		const static	int default_energy = 50;
};
#endif
