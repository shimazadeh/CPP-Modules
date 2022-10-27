#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), target("")
{
	// std::cout << "default constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &_target) : Form("PresidentialPardonForm", 25, 5), target(_target)
{
	// std::cout << "Name constructor is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
	// std::cout << "Copy constructor is called" << std::endl;
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "destructor is called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	return (*this);
}

const std::string	PresidentialPardonForm::getTarget()
{
	return (this->target);
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->ifexecutable(executor))
	{
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		return (1);
	}
	return (0);
}

