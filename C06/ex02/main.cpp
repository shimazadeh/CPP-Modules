#include "Base.hpp"

Base	*generate(void)
{
	srand(time(0));
	int 	num = rand() % 3;
	Base	*result;

	result = NULL;
	if (num == 0)
		result = new A;
	else if (num == 1)
		result = new B;
	else if (num == 2)
		result = new C;
	return (result);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "the type doesnt exist!" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;

		std::cout << "A" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;

		std::cout << "B" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;

		std::cout << "C" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main()
{
	Base	*test;
	Base	*null_test = NULL;

	test = generate();
	identify(test);
	identify(*test);

	identify(null_test);
	identify(*null_test);

	delete test;
	delete null_test;
}
