#include <iostream>
#include <cstring>
#include "contact.hpp"

contact:: contact(void){
	memset(this->firstname, 0, 9);
	memset(this->nickname, 0, 9);
	memset(this->lastname, 0, 9);
	memset(this->phone_num, 0, 9);
	memset(this->secret, 0, 9);
	return ;
}

contact:: ~contact(void){
	return ;
}

char	*contact::create(char *str, char *buffer){
	int i;

	i = 0;
	while(i < strlen(buffer))
	{
		str[i] = buffer[i];
		i++;
	}
	if (!buffer[i])
	{
		while(i < 9)
		{
			str[i] = ' ';
			i++;
		}
	}
	return (str);
}

void	contact::update(int element, int index, char *buffer){

	if (element == 0)
	{
		if (strlen(buffer) < 11)
		{
			strcpy(this->firstname, buffer);
		}
		else
		{
			memcpy(this->firstname, buffer, 8);
			this->firstname[9] = '.';
		}
	}
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
