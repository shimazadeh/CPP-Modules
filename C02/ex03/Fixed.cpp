#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	this->number = 0;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(Fixed const &a)
{
	*this = a;
}

Fixed::Fixed(const int a)
{
	this->number = (a << Fixed::bites);
}

Fixed::Fixed(const float a)
{
	this->number = roundf(a * (1 << Fixed::bites));
}

Fixed &	Fixed::operator=(Fixed const &a){

	this->number = a.getRawBites();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &a)const{

	return ((Fixed) (this->toFloat() + a.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &a)const{

	return ((Fixed) (this->toFloat() - a.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &a)const{

	return ((Fixed) (this->toFloat() * a.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &a)const{

	return ((Fixed) (this->toFloat() / a.toFloat()));
}

bool	Fixed::operator>(Fixed const &a)const{

	if (this->number > a.getRawBites())
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed const &a)const{

	if (this->number < a.getRawBites())
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed const &a)const{

	if (this->number <= a.getRawBites())
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed const &a)const{

	if (this->number >= a.getRawBites())
		return (1);
	return (0);
}

bool	Fixed::operator==(Fixed const &a)const{

	if (this->number == a.getRawBites())
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed const &a)const{

	if (this->number != a.getRawBites())
		return (1);
	return (0);
}

int	Fixed::getRawBites(void)const{
	return (this->number);
}

void	Fixed::setRawBites(int const raw){

	this->number = raw;
	return ;
}

float	Fixed::toFloat(void)const{

	return ((float)(this->number) / (float) (1 << Fixed::bites));
}

int		Fixed::toInt(void)const{

	return (this->number >> Fixed::bites);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	Fixed::operator++(){

	this->number++;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed	tmp;
	tmp = *this;

	this->number++;
	return (tmp);
}

Fixed	Fixed::operator--(){

	this->number--;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed	tmp;
	tmp = *this;

	this->number--;
	return (tmp);
}

std::ostream & operator<<(std::ostream & o, Fixed const &x){
	o << x.toFloat();
	return (o);
}
