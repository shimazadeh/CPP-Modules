#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor is called" <<std::endl;
	this->number = 0;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed &a)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = a;
}

Fixed &	Fixed::operator=(Fixed &a){

	std::cout << "Copy assignment operator is called" << std::endl;
	this->number = a.getRawBites();
	return (*this);
}

int	Fixed::getRawBites(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->number);
}

void	Fixed::setRawBites(int const raw){

	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
	return ;
}
