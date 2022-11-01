#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
{
	std::cout << "default constructor is called" << std::endl;
	this->_size = 0;
	this->table = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "size constructor is called" << std::endl;
	this->_size = n;
	this->table = new T[this->_size];
}

template<typename T>
Array<T>::Array(const Array &src)
{
	std::cout << "copy constructor is called" << std::endl;
	*this = src;
}

template<typename T>
Array<T>::~Array(void)
{
	std::cout << "destructor is called" << std::endl;
	if (this->_size > 0)
		delete [] (this->table);
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &src)
{
	std::cout << "assignment constructor is called" << std::endl;

	this->_size = src.size();
	this->table = new T[this->_size];
	for (int i =0 ; i < this->_size; i++)
		this->table[i] = src.table[i];
	return (*this);
}

template<typename T>
T 	&Array<T>::operator[](const int src)const
{
	if (src >= this->_size || src < 0)
		throw	(Array<T>::OutofBoundException());
	return (this->table[src]);
}

template<typename T>
int	Array<T>::size(void)const
{
	return (this->_size);
}

