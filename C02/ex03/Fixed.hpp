#ifndef _FIXED_H
# define _FIXED_H
#include <iostream>

class	Fixed{

	public:
	Fixed(void);
	Fixed(const int a);
	Fixed(const float a);
	Fixed(Fixed const &a);

	Fixed &			operator=(Fixed const &a);

	Fixed 			operator+(Fixed const &a) const;
	Fixed 			operator-(Fixed const &a) const;
	Fixed 			operator*(Fixed const &a) const;
	Fixed 			operator/(Fixed const &a) const;

	Fixed			operator++();
	Fixed			operator++(int);
	Fixed			operator--();
	Fixed			operator--(int a);

	bool			operator!=(Fixed const &a) const;
	bool			operator==(Fixed const &a) const;
	bool			operator<=(Fixed const &a) const;
	bool			operator>=(Fixed const &a) const;
	bool			operator<(Fixed const &a) const;
	bool			operator>(Fixed const &a) const;

	~Fixed(void);

	int					getRawBites(void) const;
	void				setRawBites(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed const	&min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static Fixed const	&max(const Fixed &a, const Fixed &b);

	private:
	int					number;
	static const int	bites = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const &x);
#endif
