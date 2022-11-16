#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &_target) : Form("PresidentialPardonForm", 25, 5), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor is called" << std::endl;
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

