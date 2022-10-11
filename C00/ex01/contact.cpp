#include <iostream>
#include <cstring>
#include "contact.hpp"

contact:: contact(void){
	std::cout << "constructor is called" <<std::endl;
	memset(this->firstname, 0, 512);
	memset(this->nickname, 0, 512);
	memset(this->lastname, 0, 512);
	memset(this->phone_num, 0, 512);
	memset(this->secret, 0, 512);
	return ;
}

contact:: ~contact(void){
	std::cout <<"destructor is called" << std::endl;
	return ;
}

void	contact::update(int element, int index, char *buffer){

	if (element == 0)
		strcpy(this->firstname, buffer);
	else if (element == 1)
		strcpy(this->nickname, buffer);
	else if (element == 2)
		strcpy(this->lastname, buffer);
	else if (element == 3)
		strcpy(this->phone_num, buffer);
	else if (element == 4)
		strcpy(this->secret, buffer);
	return ;
}
