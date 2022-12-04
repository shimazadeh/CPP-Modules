#include "Span.hpp"

int main()
{
	{
		try
		{
			std::cout << "---------basic test---------" << std::endl;
			Span sp = Span(5);
			sp.addNumber(2147483647);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(12);
			sp.display();
			std::cout << sp << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "---------basic test: default constructor---------" << std::endl;
			Span sp = Span();
			sp.addNumber(6);
			sp.addNumber(3);
			sp.display();
			std::cout << sp << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "---------range function test---------" << std::endl;
			Span sp = Span(12);
			std::vector<int>	sp2(10, 1);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(sp2.begin(), sp2.end());
			sp.display();
			std::cout << sp << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "---------range function when there is no space---------" << std::endl;
			Span sp = Span(5);
			std::vector<int> sp2{0, 1, 2, 3, 4};
			std::vector<int> sp3{5, 6, 7, 8, 9};
			sp.addNumber(sp3.begin(), sp3.end());
			sp.addNumber(sp2.begin(), sp2.end());
			sp.display();
			std::cout << sp << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::cout << "---------test with large numbers---------" << std::endl;
			Span sp = Span(20000);
			std::vector<int>	sp2(10000);
			sp.addNumber(sp2.begin(), sp2.end());
			sp.display();
			std::cout << sp << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}
