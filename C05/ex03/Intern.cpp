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
	std::string	ref = "Shrubbery Form Presidential Form RobotomyRequest Form";
	int			res;


	res = ref.find(form_name);
	switch(res)
	{
		case(0):
			return (new ShrubberyCreationForm());
		case(15):
			return (new PresidentialPardonForm());
		case(33):
			return (new RobotomyRequestForm());
		default:
			throw intern::FormError();
	}
	return (NULL);
}


