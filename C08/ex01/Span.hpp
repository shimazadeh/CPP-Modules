#ifndef _SPAN_HPP
# define _SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &other);
		~Span(void);

		Span &operator=(const Span &src);

		void				range(int start, int end);
		void				addNumber(unsigned int add);
		int					shortestSpan(void)const;
		int					longestSpan(void)const;
		int					getSize()const;
		std::vector<int>	getArray()const;
		void				display()const;

		class	ExceptionError: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Cannot add more members!");
				}
		};

	private:
		long unsigned int	size;
		std::vector<int>	storage;
};

std::ostream	&operator<<(std::ostream &o, const Span &src);
// void	display_v(std::vector<int>	g1);

# endif
