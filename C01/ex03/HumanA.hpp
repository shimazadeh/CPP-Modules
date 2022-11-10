#ifndef _HUMANA_HPP
# define _HUMANA_HPP
#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(const std::string str1, Weapon &str2);
		~HumanA(void);

		void	attack(void);

	private:
		const std::string 		name;
		Weapon					*weapon;
};
#endif
