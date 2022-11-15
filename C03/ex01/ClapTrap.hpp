#ifndef _CLAPTRAP_H
# define _CLAPTRAP_H

#include <iostream>

class	ClapTrap{
	public:
		ClapTrap(void);
		ClapTrap(std::string str);
		ClapTrap(ClapTrap &other);
		~ClapTrap(void);

		ClapTrap &			operator=(ClapTrap &a);

		std::string 	getName(void)const;
		int				getHit(void)const;
		int				getEnergy(void)const;
		int				getDamage(void)const;

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	protected:
		std::string		Name;
		int				Hit;
		int				Energy;
		int				damage;
};

std::ostream	&operator<<(std::ostream &ostream, const ClapTrap &src);

#endif
