#ifndef _ARRAY_HPP
# define _ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>

class Array
{
	public:
		Array<T>(void)
		{
			std::cout << "default constructor is called" << std::endl;
			_size = 0;
			table = 0;
		}
		Array<T>(unsigned int n)
		{
			std::cout << "size constructor is called" << std::endl;
			_size = n;
			table = new T[_size];
		}
		Array<T>(const Array<T> &src)
		{
			std::cout << "copy constructor is called" << std::endl;
			*this = src;
		}
		~Array<T>(void)
		{
			std::cout << "destructor is called" << std::endl;
			if (_size > 0)
				delete [] (table);
		}

		Array<T>	&operator=(const Array<T> &src)
		{
			std::cout << "assignment constructor is called" << std::endl;

			_size = src.getSize();
			table = new T[_size];
			for (int i =0 ; i < _size; i++)
				table[i] = src.table[i];
			return (*this);
		}

		T 			&operator[](const int idx)const
		{
			if (idx >= _size || idx < 0)
				throw	(Array<T>::OutofBoundException());
			return (table[idx]);
		}

		class	OutofBoundException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("index is out of bound!");
				}
		};
		int		getSize()const
		{
			return (_size);
		}

	private:
		int		_size;
		T 		*table;
};

#endif
