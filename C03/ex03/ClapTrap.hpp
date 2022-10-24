#ifndef _CLAPTRAP_HPP
# define _CLAPTRAP_HPP

#include <iostream>

class	ClapTrap{
	public:
	ClapTrap(void);
	ClapTrap(std::string str);
	~ClapTrap(void);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		Name;
	int				Hit;
	int				Energy;
	int				damage;
};

#endif
