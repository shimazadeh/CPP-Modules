#ifndef _SCAVTRAP_HPP
# define _SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
	ScavTrap(void);
	ScavTrap(std::string str);
	~ScavTrap(void);

	void	guardGate();

};
#endif
