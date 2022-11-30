#include "Span.hpp"

int main()
{
	{
		std::cout << "---------basic test---------" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.display();
		std::cout << sp << std::endl;
	}
	{
		std::cout << "---------basic test: default constructor---------" << std::endl;
		Span sp = Span();
		sp.addNumber(6);
		sp.addNumber(3);
		sp.display();
		std::cout << sp << std::endl;
	}
	{
		std::cout << "---------range function test---------" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.range(20, 22);
		sp.display();
		std::cout << sp << std::endl;
	}
	{
		std::cout << "---------range function when there is no space---------" << std::endl;
		Span sp = Span(5);
		sp.range(1, 5);
		sp.range(20, 22);
		sp.display();
		std::cout << sp << std::endl;
	}
	return 0;
}
