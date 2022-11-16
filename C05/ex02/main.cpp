#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Form					*test1 = new ShrubberyCreationForm("28C");
	Form					*test2 = new PresidentialPardonForm("25B");
	Form					*test3 = new RobotomyRequestForm("20A");
	Bureaucrat				test("Bureaucrat", 1); //should be signed for all
	Bureaucrat				test11("Bureaucrat1", 149); //should not be signed for all
	Bureaucrat				test22("Bureaucrat2", 30); //shhould be signed for two only

	std::cout << "first test: should execute all forms" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "ShrubberyCreationForm" << std::endl;
	try
	{
		test.signForm(*test1);
		test.executeForm(*test1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------------------------" << std::endl;
	std::cout << "presidential pardon form" << std::endl;
	try
	{
		test.signForm(*test2);
		test.executeForm(*test2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------------------------" << std::endl;
	std::cout << "RobotomyRequestForm" << std::endl;
	try
	{
		test.signForm(*test3);
		test.executeForm(*test3);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "===================================================================" << std::endl;

	std::cout << "second test: should not execute all forms" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "ShrubberyCreationForm" << std::endl;
	try
	{
		test11.signForm(*test1);
		test11.executeForm(*test1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "presidential pardon form" << std::endl;
	try
	{
		test11.signForm(*test2);
		test11.executeForm(*test2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "RobotomyRequestForm" << std::endl;
	try
	{
		test11.signForm(*test3);
		test11.executeForm(*test3);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "===================================================================" << std::endl;

	std::cout << "third test: should execute two forms" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "ShrubberyCreationForm" << std::endl;
	try
	{
		test22.signForm(*test1);
		test22.executeForm(*test1);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "-------------------------------------" << std::endl;
	std::cout << "presidential pardon form" << std::endl;
	try
	{
		test22.signForm(*test2);
		test22.executeForm(*test2);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "RobotomyRequestForm" << std::endl;
	try
	{
		test22.signForm(*test3);
		test22.executeForm(*test3);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete test1;
	delete test2;
	delete test3;
	return (0);
}
