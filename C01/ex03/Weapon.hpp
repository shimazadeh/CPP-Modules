#ifndef _WEAPON_H
# define _WEAPON_H

class Weapon{

public:
	Weapon(const char *name);
	~Weapon(void);
	const char	*getType(void);
	void	setType(const char *new_type);

private:
	const char	*type;
};

#endif
