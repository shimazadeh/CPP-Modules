#ifndef _ARRAY_HPP
# define _ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>

class Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(const Array<T> &tab);

		~Array<T>(void);

		Array<T>	&operator=(const Array<T> &src);
		T 			&operator[](const int idx)const;

		class	OutofBoundException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("index is out of bound!");
				}
		};
		int		size()const;

	private:
		int		_size;
		T 		*table;
};

#endif
