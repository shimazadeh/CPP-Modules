#include "Span.hpp"

Span::Span(void)
{
}

Span::Span(unsigned int N)
{
	fill(storage.begin(), this->storage.end(), N);
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
	storage = other.getArray();
	size = other.getSize();
	return (*this);
}

std::vector<int>	Span::getArray()
{
	return (storage);
}

int	Span::getSize()
{
	return (size);
}

void	Span::addNumber(unsigned int add)
{
	storage.push_back(add);
}

void	Span::shortestSpan(void)
{
	int	min;
	int	max;
}

void	Span::longestSpan(void)
{
	int min;

}
