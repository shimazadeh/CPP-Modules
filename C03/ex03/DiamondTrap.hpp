#ifndef _DIAMONDTRAP_HPP
# define _DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
	DiamondTrap(std::string str);
	~DiamondTrap(void);

	void	whoAmI();
	void	attack(const std::string &target);

	using FragTrap::Hit;
	using ScavTrap::Energy;
	using FragTrap::damage;

	private:
	std::string name;
	DiamondTrap(void);

};
#endif
