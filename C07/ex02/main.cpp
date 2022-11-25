#include "Array.hpp"

int	main()
{
	Array<int>			table1(3);
	Array<std::string>	table2(2);
	Array<std::string>	table3;
	int					*table4 = new int[3];

	for (int i = 0; i < table1.getSize(); i++)
	{
		table1[i] = i;
		table4[i] = i;
	}
	table2[0] = "hi";
	table2[1] = "what up";

	table3 = table2;

	std::cout << "=====================================" << std::endl;
	std::cout << "table1" << std::endl;
	for (int i = 0; i < table1.getSize(); i++)
		std::cout << table1[i] << std::endl;

	std::cout << "=====================================" << std::endl;
	std::cout << "table2" << std::endl;
	for (int i = 0; i < table2.getSize(); i++)
		std::cout << table2[i] << std::endl;

	std::cout << "=====================================" << std::endl;
	std::cout << "table3" << std::endl;
	for (int i = 0; i < table2.getSize(); i++)
		std::cout << table2[i] << std::endl;

	std::cout << "=====================================" << std::endl;
	std::cout << "table4" << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << table4[i] << std::endl;

	std::cout << "=====================================" << std::endl;

	delete []table4;
}

