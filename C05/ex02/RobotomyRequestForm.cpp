#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("PresidentialPardonForm", 72, 45), target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &_target) : Form("PresidentialPardonForm", 72, 45), target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor is called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	(void)src;
	return (*this);
}

const std::string	RobotomyRequestForm::getTarget()
{
	return (this->target);
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(0));
	if (this->ifexecutable(executor))
	{
		std::cout << "unbearable drilling noise!!!" << std::endl;
		std::cout << this->getName();
		if (rand() % 2)
			std::cout << " : robotomy failed!" << std::endl;
		else
			std::cout << " : has been robotimized!" << std::endl;
		return (1);
	}
	return (0);
}

