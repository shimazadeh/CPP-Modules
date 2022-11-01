#include "Base.hpp"

Base	*generate(void)
{
	srand(time(0));
	int 	num = rand() % 3;
	Base	*result;

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
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A *>(p);
	if (a)
		std::cout << "A" << std::endl;

	b = dynamic_cast<B *>(p);
	if (b)
		std::cout << "B" << std::endl;

	c = dynamic_cast<C *>(p);
	if (c)
		std::cout << "C" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception &e)
	{
		// std::cout << e.what() << std::endl;
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception &e)
	{
		// std::cout << e.what() << std::endl;
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::exception &e)
	{
		// std::cout << e.what() << std::endl;
	}
}

int	main()
{
	Base	*test;

	test = generate();
	// identify(test);
	identify(*test);
	delete test;
}
