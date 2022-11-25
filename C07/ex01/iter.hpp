#ifndef _ITER_HPP
#define _ITER_HPP

#include <iostream>

template<typename T>
void	function(T &element)
{
	std::cout << element << std::endl;
}

template<typename T>
void	iter(T *array, int len, void function(const T &element))
{
	for (int i = 0; i < len; i++)
		function(array[i]);
}

#endif
