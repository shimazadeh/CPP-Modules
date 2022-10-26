#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	test("test1", 5);

	try
	{
		test.increment(3);
		test.checkGradeHigh();
		std::cout << test.getGrade() << " " << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
