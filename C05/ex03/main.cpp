#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	intern	somerandomintern;
	Form*	form;
	Bureaucrat	boss("boss", 0);

	form = somerandomintern.makeForm("Shrubbery Form", "hello");
	try
	{
		form->getName();
		// form->beSigned(boss);// when its not signed the error msg is wrong
		form->execute(boss);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}
	return (0);
}
