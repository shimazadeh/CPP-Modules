#ifndef _SPAN_HPP
# define _SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &other);
		~Span(void);

		Span &operator=(const Span &src);

		void	addNumber(unsigned int add);
		void	shortestSpan(void);
		void	longestSpan(void);

		class	ExceptionError: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("blah blah blah");
				}
		};

	private:
		Span(void);
		int					size;
		std::vector<int>	storage;

};

std::ostream	&operator<<(std::ostream &o,const Span &src);

# endif
