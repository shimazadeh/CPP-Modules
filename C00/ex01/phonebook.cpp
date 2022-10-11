#include <iostream>
#include <cstring>
#include "phonebook.hpp"

phonebook:: phonebook(void){
	std::cout << "constructor is called" <<std::endl;
	memset(this->header, 0, 5);
	memset(this->lists, 0, 8);
	this->header[0] = "firstname";
	this->header[1] = "nickname";
	this->header[2] = "lastname";
	this->header[3] = "phone#";
	this->header[4] = "Secret";
	return ;
}

phonebook::~phonebook(void){
	std::cout <<"destructor is called" << std::endl;
	return ;
}

void	phonebook::display_all(void){

	int	i;

	i = 0;
	while (i < 8)
	{
		std::cout << this->header[i] << ":" << this->lists[i].firstname << "|";
		std::cout << this->header[i] << ":" << this->lists[i].nickname << "|";
		std::cout << this->header[i] << ":" << this->lists[i].lastname << "|";
		std::cout << this->header[i] << ":" << this->lists[i].phone_num << "|";
		std::cout << this->header[i] << ":" << this->lists[i].secret << std::endl;
		i++;
	}
}
