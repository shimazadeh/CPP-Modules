#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	test("test1");

	try
	{
		test.increment(3);
		test.checkGrade();
		std::cout << test.getGrade() << " " << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
