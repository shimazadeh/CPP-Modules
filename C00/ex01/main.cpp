#include <iostream>
#include "phonebook.hpp"
#include <cstring>

int  main(void)
{
	phonebook	book;
	char		buffer[512];
	int			index;
	int			j;

	j = 0;
	while(1)
	{
		std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> buffer;
		if (buffer && strcmp(buffer, "ADD") == 0)
		{
			if (j == 7)
				j = 0;
			for (int i = 0; i < 5; i)
			{
				std::cout << "Enter the " << book.header[i] << ":" << std::endl;
				std::cin >> buffer;
				if (buffer)
				{
					book.lists[j].update(i, j, buffer);
					i++;
				}
				else
					std::cout << "entry cannot be empty try again!" << std::endl;
			}
			j++;
		}
		else if (buffer && strcmp(buffer, "SEARCH") == 0)
		{
			book.display_all();
			std::cout << "Enter contact index" << std::endl;
			std::cin >> index;
			//diplay the phonebook index
		}
		else if (buffer && strcmp(buffer, "EXIT") == 0)
			return (0);
		else
			std::cout <<"invalid entry! try again!" <<std::endl;
	}
	return (0);
}
