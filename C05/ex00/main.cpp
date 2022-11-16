#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "=============================================" << std::endl;
	{
		Bureaucrat	test();

		try
		{
			test.increment();
			std::cout << test << std::endl;
			test.decrement();
			std::cout << test << std::endl;
			test.increment();
			std::cout << test << std::endl;
			test.increment();
			std::cout << test << std::endl;
			test.increment();
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "=============================================" << std::endl;

	{
		Bureaucrat	test1("test2", -1);
		Bureaucrat	test2("test3", 151);
	}

	return (0);
}
