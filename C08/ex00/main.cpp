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
	try
	{
		std::cout << "----displaying the list----" << std::endl;
		display(g1);
		std::cout << "----findings----" << std::endl;

		vector<int>::iterator	p = easyfind(g1 , 5);
		std::cout << *p << std::endl;
		vector<int>::iterator	b = easyfind(g1, 1);
		std::cout << *b << std::endl;
		vector<int>::iterator	a = easyfind(g1, 9);
		std::cout << *a << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
