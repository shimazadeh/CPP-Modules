#ifndef	_EASYFIND_HPP
#define _EASYFIND_HPP

#include <iostream>
#include <vector>

using	namespace	std;

template<typename T>
void	easyfind(T	array, int a)
{
	for (int i = 0; i < ; i++)
	{
		if (array[i] == a)
			return (i);
	}
	throw	NoMatchFound();
}

#endif
