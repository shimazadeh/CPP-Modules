#ifndef _DIAMONDTRAP_HPP
# define _DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string str);
		DiamondTrap(DiamondTrap &other);
		~DiamondTrap(void);

		void	whoAmI()const;
		void	attack(const std::string &target);

	private:
		std::string _name;
		DiamondTrap(void);

};
#endif
