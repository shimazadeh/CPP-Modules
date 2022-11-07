/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabibol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:57:52 by shabibol          #+#    #+#             */
/*   Updated: 2022/11/07 12:57:53 by shabibol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact:: contact(void){

	this->firstname = "";
	this->nickname = "";
	this->lastname = "";
	this->phone_num = "";
	this->secret = "";
}

contact:: ~contact(void){
	return ;
}

std::string	contact::get_firstname(){
	return (this->firstname);
}

std::string	contact::get_nickname(){
	return (this->nickname);
}

std::string	contact::get_lastname(){
	return (this->lastname);
}

std::string	contact::get_phonenum(){
	return (this->phone_num);
}

std::string	contact::get_secret(){
	return (this->secret);
}

void		contact::update(std::string	name, int i){

	if (i == 0)
		this->firstname = name;
	else if (i == 1)
		this->nickname = name;
	else if (i == 2)
		this->lastname = name;
	else if (i == 3)
		this->phone_num = name;
	else if (i == 4)
		this->secret = name;
}

contact	&contact::operator=(contact src){

	this->firstname = src.get_firstname();
	this->lastname = src.get_lastname();
	this->nickname = src.get_nickname();
	this->phone_num = src.get_phonenum();
	this->secret = src.get_secret();
	return (*this);
}
