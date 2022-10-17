#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int a)
{
	this->number = a;
}

Fixed::Fixed(const float a)
{
	// this->number = a;
	this->number = roundf(a * (1 << Fixed::frac_bites));
}

Fixed &	Fixed::operator=(Fixed const &a){

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

float	Fixed::toFloat(void)const{

	return ((float)(this->number));
}

int	Fixed::toInt(void)const{

	return (roundf(this->number));
}

std::ostream & operator<<(std::ostream & o, Fixed const &x){
	o << x.toFloat();
	return (o);
}
