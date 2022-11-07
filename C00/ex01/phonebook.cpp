/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabibol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:58:19 by shabibol          #+#    #+#             */
/*   Updated: 2022/11/07 12:58:20 by shabibol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook:: phonebook(void){

	this->pos = 0;
	this->count = -1;
	return ;
}

phonebook::~phonebook(void){
	return ;
}

void	phonebook::add_contact(contact	&new_member){

	if (this->count < 8)
		this->count++;
	if (this->pos > 7)
		this->pos = 0;
	this->lists[this->pos] = new_member;
	this->pos++;
	return ;
}

void	phonebook::display_header(void){

	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "firstname" << "|";
	std::cout << std::setw(10) << "nickname" << "|";
	std::cout << std::setw(10) << "lastname" << "|";
	std::cout << std::setw(10) << "phone numb" <<"|";
	std::cout << std::setw(10) << "secret" << "|" << std::endl;
}

std::string	phonebook::reshape(std::string src){

	if (src.length() > 10)
	{
		src.resize(9);
		src = src + '.';
	}
	return (src);
}

void	phonebook::display_member(int index){

	std::string	to_display;

	to_display = this->lists[index].get_firstname();
	std::cout << std::setw(10) << this->reshape(to_display) << "|";

	to_display = this->lists[index].get_nickname();
	std::cout << std::setw(10) << this->reshape(to_display) << "|";

	to_display = this->lists[index].get_lastname();
	std::cout << std::setw(10) << this->reshape(to_display) << "|";

	to_display = this->lists[index].get_phonenum();
	std::cout << std::setw(10) << this->reshape(to_display) << "|";

	to_display = this->lists[index].get_secret();
	std::cout << std::setw(10) << this->reshape(to_display) << "|" << std::endl;

}

void	phonebook::display_all(void){

	int	i = 0;

	this->display_header();
	while (this->lists[i].get_firstname().length())
	{
		std::cout << std::setw(10) << i << "|";
		this->display_member(i);
		i++;
	}
}

int	phonebook::is_digit(std::string	src){

	int	i = 0;

	while (i < src.length())
	{
		if (src[i] < '0' || src[i] > '9')
			return 1;
		i++;
	}
	return 0;
}

void	phonebook::search_cmd(std::string _index){

	int	index = atoi(_index.c_str());

	if (this->is_digit(_index))
		std::cout << "entry must be a valid digit" << std::endl;
	else if (index > this->count)
		std::cout << "the requested member does not exist!" << std::endl;
	else
	{
		this->display_header();
		std::cout << std::setw(10) << index << "|";
		this->display_member(index);
	}
	return ;
}
