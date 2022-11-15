#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	test("test1");

	try
	{
		test.increment(3);
		test.checkGradeLow();
		std::cout << test.getGrade() << " " << std::endl;
		test.checkGradeHigh();
		std::cout << test.getGrade() << " " << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		test.decrement(153);
		test.checkGradeHigh();
		std::cout << test.getGrade() << " " << std::endl;
		test.checkGradeLow();
		std::cout << test.getGrade() << " " << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
