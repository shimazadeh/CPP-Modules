#include <iostream>
#include "phonebook.hpp"
#include <cstring>
#include <string>

int  main(void)
{
	phonebook	book;
	char		buffer[512];
	int			index;
	int			j;
	int			count;
	int			k;
	char		temp[9];

	k = 0;
	j = 0;
	count = 0;
	while(1)
	{
		memset(buffer, 0, 512);
		std::cout << "Enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> buffer;
		if (buffer && strcmp(buffer, "ADD") == 0)
		{
			if (j == 7)
				j = 0;
			for (int i = 0; i < 5; i)
			{
				memset(buffer, 0, 512);
				std::cout << book.questions[i] << std::endl;
				std::cin >> buffer;
				if (buffer && strlen(buffer) < 9)
				{
					memset(temp, ' ', 9 - strlen(buffer));
					buffer.append(temp);
					book.lists[j].update(i, j, buffer);
					i++;
				}
				else
					std::cout << "entry cannot be empty try again!" << std::endl;
			}
			j++;
			if (count < 9)
				count++;
		}
		else if (buffer && strcmp(buffer, "SEARCH") == 0)
		{
			book.display_all(count);
			std::cout << "Enter contact index" << std::endl;
			std::cin >> index;
			book.display_index(index);
		}
		else if (buffer && strcmp(buffer, "EXIT") == 0)
			return (0);
		else
			std::cout <<"invalid entry! try again!" <<std::endl;
	}
	return (0);
}
