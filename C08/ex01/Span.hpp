#ifndef _SPAN_HPP
# define _SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span &other);
		~Span(void);

		Span &operator=(const Span &src);

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

		template<class iterator>
		void	addNumber(iterator start, iterator end)
		{
			if ((long unsigned int)(end - start) <= size && (long unsigned int)(end - start) <= size - storage.size())
				std::copy(start, end, std::back_inserter(storage));
			else
				std::cout << "There is not enough space to add the range" << std::endl;
		}

	private:
		long unsigned int	size;
		std::vector<int>	storage;
};

std::ostream	&operator<<(std::ostream &o, const Span &src);

# endif
