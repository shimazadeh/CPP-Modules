#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
		Bureaucrat	test("Bureaucrat", 1);
		Form		test1("Form1", 1, 1);

		try
		{
			std::cout << "first test: Bureaucrat signing the form(calling signForm)" << std::endl;
			std::cout << "Form info before first test:" << test1 << std::endl;
			std::cout << "Bureaucrat info before first test: " << test << std::endl;
			test1.beSigned(test);
			test.signForm(test1);
			std::cout << "Form info after first test:" << test1 << std::endl;
			std::cout << "Bureaucrat info after first test: " << test << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------------" << std::endl;
	{
		Bureaucrat	test("Bureaucrat", 1);
		Form		test1("Form1", 1, 1);
		try
		{
			std::cout << "Third test: Bureaucrat cannot sign the form (should print the reason)" << std::endl;
			test.decrement();
			test.decrement();
			test.decrement();
			test.signForm(test1);
			std::cout << "Form info after second test:" << test1 << std::endl;
			std::cout << "Bureaucrat info after first test: " << test << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------------" << std::endl;
	{
		Bureaucrat	test("Bureaucrat", 1);
		Form		test1("Form1", 1, 1);
		try
		{
			std::cout << "Forth test: form is not signed (should throw an exception)" << std::endl;
			test.decrement();
			test.decrement();
			test.decrement();
			test1.beSigned(test);
			std::cout << "Form info after second test:" << test1 << std::endl;
			std::cout << "Bureaucrat info after first test: " << test << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "---------------------------------" << std::endl;
	{
		try
		{
			std::cout << "Fifth test: should throw exception for the limits" << std::endl;
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
	}
	return (0);
}
