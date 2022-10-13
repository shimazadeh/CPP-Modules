#ifndef _HUMANA_H
# define _HUMANA_H
#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(const char	*str1, Weapon	str2);
		~HumanA(void);

		const char	*name;
		Weapon	weapon;
		void	attack(void);
};
#endif
