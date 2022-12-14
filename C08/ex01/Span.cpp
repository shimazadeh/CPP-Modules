#include "Span.hpp"

Span::Span(void): size(0)
{
}

Span::Span(unsigned int N): size(N)
{
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span(void)
{
}

Span	&Span::operator=(const Span &other)
{
	this->storage = other.getArray();
	this->size = other.getSize();
	return (*this);
}

std::vector<int>	Span::getArray() const
{
	return (storage);
}

int	Span::getSize() const
{
	return (size);
}

void	Span::addNumber(unsigned int add)
{
	if (size > 0 && storage.size() == size)
		std::cout << "impossible to add more numbers!" << std::endl;
	else if (size > 0)
		storage.push_back(add);
	else if (size <= 0)
		throw Span::ExceptionError();
}

void	Span::display(void)const
{
	std::cout << "displaying the array: ";
	for (auto j = storage.begin(); j != storage.end(); ++j)
	{
		std::cout << *j << " ";
	}
	std::cout << std::endl;
}

long int	Span::shortestSpan(void)const
{
	long int	result = 2147483647;

	if (size > 0)
	{
		std::vector<int> tmp = storage;

		std::sort(tmp.begin(), tmp.end());
		int tmp2;
		for (auto i = tmp.begin(); i != tmp.end() - 1; i++)
		{
			tmp2 = *(i + 1) - *i;
			if (std::less<int>{}(tmp2, result))
				result = tmp2;
		}
		return (result);
	}
	else if (size <= 0)
		throw Span::CannotSpan();	
	return (0);
}

long int	Span::longestSpan(void)const
{
	long int	result = 0;

	if (size > 0)
	{
		std::vector<int> tmp = storage;

		std::sort(tmp.begin(), tmp.end());
		result = *(tmp.end() - 1) - *(tmp.begin());
	}
	else if (size <= 0)
		throw Span::CannotSpan();
	return (result);
}

std::ostream	&operator<<(std::ostream &o, const Span &src)
{
	o << "shortest span of: " << src.shortestSpan() << " and the longest span of: " << src.longestSpan() << " with size of:" << src.getSize();
	return o;
}
