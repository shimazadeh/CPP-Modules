#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class phonebook {

public:
	phonebook(void);
	~phonebook(void);

	contact	lists[8];
	const char	*header[5];

	void	display_all();
};

#endif
