#ifndef _ZOMBIE_H
# define _ZOMBIE_H

class Zombie{

public:
	Zombie(void);
	~Zombie(void);
	void	announce(void);

private:

	char	*name;
};

#endif
