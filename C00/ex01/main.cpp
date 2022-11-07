/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabibol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:58:09 by shabibol          #+#    #+#             */
/*   Updated: 2022/11/07 12:58:10 by shabibol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	fill_in(contact	*new_member)
{
	std::string	buffer;
	int			flag = 0;
	int			i = 0;
	std::string	questions[5] = {"enter the firstname",
								"enter the nickname",
								"enter the lastname",
								"enter the phone number",
								"enter your darkest secret"};

	while(i < 5)
	{
		flag = 0;
		while(!flag)
		{
			std::cout << questions[i] << std::endl;
			std::cin >> buffer;
			if (buffer.length())
			{
				new_member->update(buffer, i);
				flag = 1;
			}
			else
				std::cout << "entry cannot be empty, try again!" << std::endl;
		}
		i++;
	}
	return ;
}

int  main(void)
{
	phonebook	book;
	std::string	buffer;
	contact		new_member;

	while(1)
	{
		std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> buffer;
		if (!buffer.compare("ADD"))
		{
			fill_in(&new_member);
			book.add_contact(new_member);
		}
		else if (!buffer.compare("SEARCH"))
		{
			book.display_all();
			std::cout << "Enter contact index" << std::endl;
			std::cin >> buffer;
			book.search_cmd(buffer);
		}
		else if (!buffer.compare("EXIT"))
			return (0);
		else
			std::cout <<"invalid entry! try again!" <<std::endl;
	}
	return (0);
}
