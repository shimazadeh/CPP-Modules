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

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int a)
{
	std::cout << "calling int constructor" << std::endl;
	this->number = (a << Fixed::frac_bites);
}

Fixed::Fixed(const float a)
{
	std::cout << "calling float constructor " << (1 << Fixed::frac_bites) << std::endl;
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

	return ((float)(this->number) / (float) (1 << Fixed::frac_bites));
}

int	Fixed::toInt(void)const{

	return (this->number >> Fixed::frac_bites);
}

std::ostream & operator<<(std::ostream & o, Fixed const &x){
	o << x.toFloat();
	return (o);
}
