#ifndef CONTACT_H
# define CONTACT_H

class contact{

public:
	contact(void);
	~contact(void);
	char	firstname[512];
	char	nickname[512];
	char	lastname[512];
	char	phone_num[512];
	char	secret[512];

	void	update(int element, int index, char *buffer);
};

#endif
