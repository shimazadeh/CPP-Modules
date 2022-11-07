/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabibol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:58:02 by shabibol          #+#    #+#             */
/*   Updated: 2022/11/07 12:58:03 by shabibol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class contact{

public:
	contact(void);
	~contact(void);

	contact	&operator=(contact src);

	void		update(std::string name, int i);
	std::string	get_firstname();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_phonenum();
	std::string get_secret();

private:
	std::string	firstname;
	std::string	nickname;
	std::string	lastname;
	std::string	phone_num;
	std::string	secret;
};

#endif
