#include "Array.hpp"

int	main()
{
	Array<int>			table1(3);
	Array<std::string>	table2(2);
	Array<std::string>	table3;
	// Array<int>			*table4 = new int(); //this does not compile

	for (int i = 0; i < table1.size(); i++)
		table1[i] = i;

	table2[0] = "hi";
	table2[1] = "what up";

	table3 = table2;

	std::cout << "table1" << std::endl;
	for (int i = 0; i < table1.size(); i++)
		std::cout << table1[i] << std::endl;

	std::cout << "table2" << std::endl;
	for (int i = 0; i < table2.size(); i++)
		std::cout << table2[i] << std::endl;

	std::cout << "table3" << std::endl;
	for (int i = 0; i < table2.size(); i++)
		std::cout << table2[i] << std::endl;

}
