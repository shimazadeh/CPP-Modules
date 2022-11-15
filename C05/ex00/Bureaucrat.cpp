#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("")
{
	this->grade = 2;
	std::cout << "default constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string str): name (str)
{
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

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << "Bureaucrat assignment operator is called" << std::endl;
	this->grade = src.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName()const
{
	std::cout << "getName is called" << std::endl;
	return (this->name);
}

int	Bureaucrat::getGrade()const
{
	std::cout << "getGrade is called" << std::endl;
	return(this->grade);
}

void	Bureaucrat::checkGradeHigh()
{
	if (this->grade < 0)
		throw (Bureaucrat::GradeTooHighException());

}

void	Bureaucrat::checkGradeLow()
{
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
