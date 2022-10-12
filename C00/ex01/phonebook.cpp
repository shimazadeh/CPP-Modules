#include <iostream>
#include <cstring>
#include "phonebook.hpp"

phonebook:: phonebook(void){
	memset(this->header, 0, 6);
	memset(this->lists, 0, 8);
	memset(this->questions, 0, 5);

	this->header[0] = "Firstname ";
	this->header[1] = "Nickname  ";
	this->header[2] = "Lastname ";
	this->header[3] = "Phone Numb";
	this->header[4] = "DarkSecret";
	this->header[5] = "index     ";

	this->questions[0] = "enter the firstname:";
	this->questions[1] = "enter the nickname:";
	this->questions[2] = "enter the lastname:";
	this->questions[3] = "enter the phone number:";
	this->questions[4] = "enter your darkest secret!:";
	return ;
}

phonebook::~phonebook(void){
	return ;
}

void	phonebook::display_all(int count){

	int	i;

	i = 0;
	std::cout << this->header[5] << " |";
	std::cout << this->header[0] << " |";
	std::cout << this->header[1] << " |";
	std::cout << this->header[2] << " |";
	std::cout << this->header[3] << " |";
	std::cout << this->header[4] << std::endl;

	while (i < count)
	{
		std::cout << i << "         " << " |";
		std::cout << this->lists[i].firstname << " |";
		std::cout << this->lists[i].nickname << " |";
		std::cout << this->lists[i].lastname << " |";
		std::cout << this->lists[i].phone_num << " |";
		std::cout << this->lists[i].secret << std::endl;
		i++;
	}
}


void	phonebook::display_index(int index){

	std::cout << this->header[5] << " |";
	std::cout << this->header[0] << " |";
	std::cout << this->header[1] << " |";
	std::cout << this->header[2] << " |";
	std::cout << this->header[3] << " |";
	std::cout << this->header[4] << std::endl;

	std::cout << index << "         " << " |";
	std::cout << this->lists[index].firstname << " |";
	std::cout << this->lists[index].nickname << " |";
	std::cout << this->lists[index].lastname << " |";
	std::cout << this->lists[index].phone_num << " |";
	std::cout << this->lists[index].secret << std::endl;
}
