#ifndef _SCAVTRAP_H
# define _SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	ScavTrap(std::string str);
	~ScavTrap(void);

	void	guardGate();

};
#endif
