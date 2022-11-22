#include "Intern.hpp"
#include "Form.hpp"

intern::intern(void)
{
}

intern::intern(const intern &src)
{
	*this = src;
}

intern::~intern(void)
{
	std::cout << "intern destructor is called" << std::endl;
}

intern	&intern::operator=(const intern &src)
{
	(void)src;
	return (*this);
}

Form	*intern::makeForm(const std::string form_name, const std::string form_target)
{
	std::string	ref[3] = {"Shrubbery Form", "Presidential Form", "RobotomyRequest Form"};
	int			res;

	res = -1;
	for (int i = 0;  i < 3 ; i++)
	{
		if (ref[i].find(form_name) == 0)
		{
			res = i;
			break;
		}
	}

	switch(res)
	{
		case(0):
			return (new ShrubberyCreationForm(form_target));
		case(1):
			return (new PresidentialPardonForm(form_target));
		case(2):
			return (new RobotomyRequestForm(form_target));
	}
	throw intern::FormError();
	return (NULL);
}


