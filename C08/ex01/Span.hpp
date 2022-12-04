#ifndef _SPAN_HPP
# define _SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>

class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &other);
		~Span(void);

		Span &operator=(const Span &src);

		void				addNumber(unsigned int add);
		long int			shortestSpan(void)const;
		long int			longestSpan(void)const;
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
		class	CannotSpan: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("cannot span!");
				}
		};
		template<class iterator>
		void	addNumber(iterator start, iterator end)
		{
			if ((long unsigned int)(end - start) <= size && (long unsigned int)(end - start) <= size - storage.size())
				std::copy(start, end, std::back_inserter(storage));
			else
				throw Span::ExceptionError();
		}

	private:
		long unsigned int	size;
		std::vector<int>	storage;
};

std::ostream	&operator<<(std::ostream &o, const Span &src);

# endif
