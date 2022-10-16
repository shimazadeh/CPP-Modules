#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	this->number = 0;
	std::cout << "Default constructor is called" <<std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed &a)
{
	Fixed	b;

	b.number = a.number;
	std::cout << "Copy constructor is called" << std::endl;
}

Fixed	Fixed::operator+ (Fixed &a){

	Fixed	b;

	b.number = (this->number + a.number);
	std::cout << "Copy assignment operator is called" << std::endl;
	return (b);
}

int	Fixed::getRawBites(void)const{
	int	result;

	std::cout << "getRawBits member function called" << std::endl;
	result = this->number;
	return (result);
}

void	Fixed::setRawBites(int const raw){

	this->number = raw;

	return ;
}
