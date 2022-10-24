#ifndef _CLAPTRAP_H
# define _CLAPTRAP_H

#include <iostream>

class	ClapTrap{
	public:
	ClapTrap(std::string str);
	ClapTrap(void);
	~ClapTrap(void);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private:
	std::string		Name;
	int				Hit;
	int				Energy;
	int				damage;
};

#endif
