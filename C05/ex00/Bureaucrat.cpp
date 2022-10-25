#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	this->name = "";
	this->grade = 2;
	std::cout << "default constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string str)
{
	this->name = str;
	this->grade = 2;
	std::cout << "Name constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = other;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "default destructor is called" << std::endl;
}

std::string	Bureaucrat::getName()
{
	std::cout << "getName is called" << std::endl;
	return (this->name);
}

int	Bureaucrat::getGrade()
{
	std::cout << "getGrade is called" << std::endl;
	return(this->grade);
}

void	Bureaucrat::checkGrade()
{
	if (this->grade < 0)
		throw (Bureaucrat::GradeTooHighException());
	if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void	Bureaucrat::increment(int amount)
{
	this->grade = this->grade - amount;
}

void	Bureaucrat::decrement(int amount)
{
	this->grade = this->grade + amount;
}
