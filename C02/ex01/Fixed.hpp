#ifndef _FIXED_H
# define _FIXED_H
#include <iostream>

class	Fixed{

	public:
	Fixed(void);
	Fixed(const int a);
	Fixed(const float a);
	Fixed(Fixed const &a);
	~Fixed(void);

	Fixed &	operator=(Fixed const &a);


	int		getRawBites(void) const;
	void	setRawBites(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private:
	int		number;
	static const int	frac_bites = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const &x);
#endif
