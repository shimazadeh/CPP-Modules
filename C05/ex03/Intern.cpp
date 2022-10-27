#include "Intern.hpp"
#include "Form.hpp"

intern::intern(void)
{
	std::cout << "default constructor of intern is called" << std::endl;
}

intern::intern(const intern &src)
{
	*this = src;
	std::cout << "copy constructor of intern is called" << std::endl;
}

intern::~intern(void)
{
	std::cout << "intern destructor is called" << std::endl;
	return ;
}

intern	&intern::operator=(const intern &src)
{
	(void)src;
	std::cout << "assignment operator is called" << std::endl;
	return (*this);
}

Form	*intern::makeForm(const std::string form_name, const std::string form_target)
{
	s_all_forms		forms[4] = {{"Shrubbery Form", new ShrubberyCreationForm(form_target)},
							{"Presidential Form", new PresidentialPardonForm(form_target)},
							{"RobotomyRequest Form", new RobotomyRequestForm(form_target)},
							{"", NULL}};

	Form	*result;

	result = NULL;
	for(int i = 0; i < 3; i++)
	{
		if (forms[i].name == form_name)
			result = forms[i].formtype;
		// else
		// 	delete forms[i].formtype;
	}
	if (!result)
		std::cout << "Invalid form name for intern to create" << std::endl;
	return (result);
}


