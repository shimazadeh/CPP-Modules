#ifndef _ZOMBIE_H
# define _ZOMBIE_H

#include <iostream>

class Zombie{

public:
	Zombie(void);
	Zombie(std::string _name);
	~Zombie(void);

	void	announce(void);

private:

	std::string	name;
};

#endif
