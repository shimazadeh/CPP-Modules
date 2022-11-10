#ifndef _FIXED_H
# define _FIXED_H

#include <iostream>

class	Fixed{

	public:
	Fixed(void);
	Fixed(Fixed &a);
	~Fixed(void);

	Fixed &	operator=(Fixed &a);

	int		getRawBites(void) const;
	void	setRawBites(int const raw);

	private:
	int					number;
	static const int	frac_bites = 8;

};
#endif
