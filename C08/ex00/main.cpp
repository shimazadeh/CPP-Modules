// #include "easyfind.hpp"
#include <vector>
#include <iostream>
using namespace std;

void	display(vector<int>	g1)
{
	for (auto i = g1.begin(); i != g1.end(); ++i)
		std::cout << *i << std::endl;
}

int	main()
{
	vector<int>	g1= {1, 2, 3, 4, 5};
	int			a;

	// for (auto i = g1.begin(); i != g1.end(); ++i)
	// 	*i = 1;

	display(g1);

	return (0);
}
