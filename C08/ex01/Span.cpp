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
}

void	Span::range(int start, int end)
{
	std::vector<int>	result(end - start + 1);

	std::iota(result.begin(), result.end(), start);
	if (storage.size() < size && ((long unsigned int)(end - start + 1) <= size - storage.size()))
		std::copy(result.begin(), result.end(), std::back_inserter(storage));
	else
		std::cout << "There is not enough space to add the range" << std::endl;
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

int	Span::shortestSpan(void)const
{
	int	result = 0;

	if (size > 0)
	{
		std::vector<int> tmp = storage;

		std::sort(tmp.begin(), tmp.end());
		result = *(tmp.begin() + 1) - *(tmp.begin());
	}
	return (result);
}

int	Span::longestSpan(void)const
{
	int	result = 0;

	if (size > 0)
	{
		std::vector<int> tmp = storage;

		std::sort(tmp.begin(), tmp.end());
		result = *(tmp.end() - 1) - *(tmp.begin());
	}
	return (result);
}

std::ostream	&operator<<(std::ostream &o, const Span &src)
{
	o << "shortest span of: " << src.shortestSpan() << " and the longest span of: " << src.longestSpan() << " with size of:" << src.getSize();
	return o;
}


// void	display_v(std::vector<int>	g1)
// {
// 	for (auto i = g1.begin(); i != g1.end(); ++i)
// 		std::cout << *i << std::endl;
// }
