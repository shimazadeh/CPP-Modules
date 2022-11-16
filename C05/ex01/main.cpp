#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "---------------------------------" << std::endl;
	try
	{
		Bureaucrat	test("Bureaucrat", 1);
		Form		test1("Form1", 1, 1);
		std::cout << "first test: should say the form was signed" << std::endl;
		std::cout << "initial values: " << std::endl;
		std::cout << "              Bureaucrat type info: " << test << std::endl;
		std::cout << "              Form type info:" << test1 << std::endl;
		test.signForm(test1);
		std::cout << "Form type info after first test:" << test1 << std::endl;
		std::cout << "Bureaucrat type info after first test: " << test << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Second test: should say the form was not signed with reason" << std::endl;
	try
	{
		Bureaucrat	test("Bureaucrat", 1);
		Form		test1("Form1", 1, 1);

		test.decrement();
		test.decrement();
		test.decrement();
		test.signForm(test1);
		std::cout << "Form type info after second test:" << test1 << std::endl;
		std::cout << "Bureaucrat type info after first test: " << test << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------------------" << std::endl;
	std::cout << "Third test: should throw exception for the limits" << std::endl;
	try
	{
		Form		test3("Form2", 155, 155);
		Form		test4("Form3", 155, 2);
		Form		test5("Form4", 2, 155);
		Form		test6("Form5", -5, -5);
		Form		test7("Form6", 149, -5);
		Form		test8("Form7", -5, 149);
		Form		test11("Form11", 1, 150);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
