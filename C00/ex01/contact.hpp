#ifndef CONTACT_H
# define CONTACT_H

class contact{

public:
	contact(void);
	~contact(void);
	char	firstname[9];
	char	nickname[9];
	char	lastname[9];
	char	phone_num[9];
	char	secret[9];

	void	update(int element, int index, char *buffer);
	char	*create(char *str, char *buffer);
};

#endif
