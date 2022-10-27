#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{

	std::cout << "---------------------------------" << std::endl;
	Bureaucrat	test("Bureaucrat", 0);
	Form		test1("Form1", 2, 2);
	std::cout << "first test: should say the form was signed" << std::endl;
	std::cout << "initial values" << std::endl;
	std::cout << "Bureaucrat type info:" << test << std::endl;
	std::cout << "Form type info:" << test1 << std::endl;
	try
	{
		test.signForm(test1);
		std::cout << "Form type info after first test:" << test1 << std::endl;
		std::cout << "Bureaucrat type info after first test:" << test << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Second test: should say the form was not signed with reason" << std::endl;
	try
	{
		test.decrement(3);
		test.signForm(test1);
		std::cout << "Form type info after second test:" << test1 << std::endl;
		std::cout << "Bureaucrat type info after first test:" << test << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------------------" << std::endl;
	std::cout << "Third test: should throw exception for the limits" << std::endl;
	Form		test3("Form2", 155, 155);
	Form		test4("Form3", 155, 2);
	Form		test5("Form4", 2, 155);
	Form		test6("Form5", -5, -5);
	Form		test7("Form6", 149, -5);
	Form		test8("Form7", -5, 149);
	try
	{
		test3.checkGrade();//both are too low
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test4.checkGrade();//one is too low
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test5.checkGrade();//one is too low
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test6.checkGrade();//both are too high
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test7.checkGrade();//one is too high
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test8.checkGrade();//one is too high
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------------------------------" << std::endl;
	std::cout << "Forth test: should sign with no exception thrown" << std::endl;
	Bureaucrat	test9("Bureaucrat", 0);
	Form		test10("Form1", 1, 1);
	std::cout << "Form type info before:" << test10 << std::endl;
	std::cout << "Bureaucrat type info before:" << test9 << std::endl;
	test10.beSigned(test9);
	std::cout << "Form type info after:" << test10 << std::endl;
	std::cout << "Bureaucrat type info after:" << test9 << std::endl;

	std::cout << "---------------------------------" << std::endl;
	std::cout << "Fifth test: should not sign with no exception thrown" << std::endl;
	std::cout << "Form type info before:" << test10 << std::endl;
	std::cout << "Bureaucrat type info before:" << test9 << std::endl;
	test9.decrement(3);
	test10.beSigned(test9);
	std::cout << "Form type info after:" << test10 << std::endl;
	std::cout << "Bureaucrat type info after:" << test9 << std::endl;

	return (0);
}
