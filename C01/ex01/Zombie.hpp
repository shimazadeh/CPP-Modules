#ifndef _ZOMBIE_H
# define _ZOMBIE_H

#include <string>
#include <iostream>

class Zombie{

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
	void	setname(std::string _name);

private:

	std::string	name;
};

#endif
