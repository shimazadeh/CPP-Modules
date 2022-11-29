#include "easyfind.hpp"

using namespace std;

void	display(vector<int>	g1)
{
	for (auto i = g1.begin(); i != g1.end(); ++i)
		std::cout << *i << std::endl;
}

int	main()
{
	vector<int>	g1{1, 2, 3, 4, 5};
	vector<int>::iterator	p;

	try
	{
		std::cout << "----before----" << std::endl;
		display(g1);
		p = easyfind(g1 , 9);
		std::cout << "----after----" << std::endl;
		std::cout << *p << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
