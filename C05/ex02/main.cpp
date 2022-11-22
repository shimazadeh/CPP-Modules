#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	{
		Form					*test1 = new ShrubberyCreationForm("28C");
		Form					*test2 = new PresidentialPardonForm("25B");
		Form					*test3 = new RobotomyRequestForm("20A");
		const Bureaucrat				test("Bureaucrat", 1); //should be signed for all

		std::cout << "first test: should execute all forms" << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "ShrubberyCreationForm before: " << *test1 << std::endl;
		try
		{
			test1->beSigned(test);
			test.executeForm(*test1);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "ShrubberyCreationForm after: " << *test1 << std::endl;

		std::cout << "-------------------------------------" << std::endl;
		std::cout << "presidential pardon form before: " << *test2 << std::endl;
		try
		{
			test2->beSigned(test);
			test.executeForm(*test2);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "presidential pardon form after: " << *test2 << std::endl;

		std::cout << "-------------------------------------" << std::endl;
		std::cout << "RobotomyRequestForm" << *test3 << std::endl;
		try
		{
			test3->beSigned(test);
			test.executeForm(*test3);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "RobotomyRequestForm" << *test3 << std::endl;
		delete test1;
		delete test2;
		delete test3;
	}


	{
		Form					*test1 = new ShrubberyCreationForm("28C");
		Form					*test2 = new PresidentialPardonForm("25B");
		Form					*test3 = new RobotomyRequestForm("20A");
		const Bureaucrat				test11("Bureaucrat1", 149); //should not be signed for all

		std::cout << "===================================================================" << std::endl;

		std::cout << "second test: should not execute all forms" << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "ShrubberyCreationForm" << *test1 << std::endl;
		try
		{
			test1->beSigned(test11);
			test11.executeForm(*test1);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "presidential pardon form" << *test2 << std::endl;
		try
		{
			test2->beSigned(test11);
			test11.executeForm(*test2);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "RobotomyRequestForm" << *test3 << std::endl;
		try
		{
			test3->beSigned(test11);
			test11.executeForm(*test3);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete test1;
		delete test2;
		delete test3;
	}


	{
		Form					*test1 = new ShrubberyCreationForm("28C_2nd");
		Form					*test2 = new PresidentialPardonForm("25B");
		Form					*test3 = new RobotomyRequestForm("20A");
		const Bureaucrat				test22("Bureaucrat2", 30); //shhould be signed for two only

		std::cout << "===================================================================" << std::endl;

		std::cout << "third test: should execute two forms" << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "ShrubberyCreationForm" << *test1 << std::endl;
		try
		{
			test1->beSigned(test22);
			test22.executeForm(*test1);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << "-------------------------------------" << std::endl;
		std::cout << "presidential pardon form" << *test2 << std::endl;
		try
		{
			test2->beSigned(test22);
			test22.executeForm(*test2);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "RobotomyRequestForm" << *test3 << std::endl;
		try
		{
			test3->beSigned(test22);
			test22.executeForm(*test3);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete test1;
		delete test2;
		delete test3;
	}

	return (0);
}
