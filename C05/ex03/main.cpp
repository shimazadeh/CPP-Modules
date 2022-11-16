#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	{
		intern		somerandomintern;
		Form		*form1;
		Form		*form2;
		Form		*form3;
		Bureaucrat	boss("boss", 1);


		form1 = NULL;
		form2 = NULL;
		form3 = NULL;

		try
		{
			form1 = somerandomintern.makeForm("Shrubbery Form", "form1");
			form2 = somerandomintern.makeForm("Presidential Form", "form2");
			form3 = somerandomintern.makeForm("RobotomyRequest Form", "form3");

			std::cout << *form1 << std::endl;
			std::cout << *form2 << std::endl;
			std::cout << *form3 << std::endl;

			form1->beSigned(boss);
			form1->execute(boss);
			form2->beSigned(boss);
			form2->execute(boss);
			form3->beSigned(boss);
			form3->execute(boss);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() <<std::endl;
		}
		delete form1;
		delete form2;
		delete form3;
	}

	{
		std::cout << "----------------------" << std::endl;
		intern		somerandomintern;
		Form		*form4;
		Bureaucrat	boss("boss", 1);

		form4 = NULL;
		try
		{
			form4 = somerandomintern.makeForm("Form", "form4");
			std::cout << *form4 << std::endl;
			form4->beSigned(boss);
			form4->execute(boss);
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		delete form4;

	}
	return (0);
}
