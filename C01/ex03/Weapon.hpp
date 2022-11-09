#ifndef _WEAPON_H
# define _WEAPON_H

#include <iostream>

class Weapon{

public:
	Weapon(void);
	Weapon(const std::string name);
	~Weapon(void);


	const std::string	&getType(void);
	void				setType(const std::string &new_type);

private:
	std::string	type;
};

#endif
