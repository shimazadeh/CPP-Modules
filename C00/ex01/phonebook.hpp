/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabibol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:58:24 by shabibol          #+#    #+#             */
/*   Updated: 2022/11/07 12:58:26 by shabibol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include "contact.hpp"
#include <iostream>
#include <iomanip>

class phonebook {

public:
	phonebook(void);
	~phonebook(void);

	void		add_contact(contact &new_member);
	void		display_all(void);
	void		search_cmd(std::string index);
	void		display_member(int index);
	void		display_header(void);
	std::string	reshape(std::string src);
	int			is_digit(std::string src);

private:
	contact		lists[8];
	int			pos;
	int			count;
};

#endif
