#ifndef	_EASYFIND_HPP
#define _EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class NoMatchFound: public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Match not found!");
		}
};

template<typename T>
typename T::iterator	easyfind(T	&array, int a)
{
	typename T::iterator	p;

	p = std::find(array.begin(), array.end(), a);
	if (p == array.end())
		throw NoMatchFound();
	return (p);
}

#endif
