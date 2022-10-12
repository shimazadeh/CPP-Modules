#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class phonebook {

public:
	phonebook(void);
	~phonebook(void);

	contact	lists[8];
	const char	*header[6];
	const char	*questions[5];

	void	display_all(int count);
	void	display_space(int count);
	void	display_index(int index);
};

#endif
