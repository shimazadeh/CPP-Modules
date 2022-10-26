#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name(""), grade(150)
{
	std::cout << "default constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &str, int _grade): name(str), grade(_grade)
{
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

const std::string	&Bureaucrat::getName()const
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

void	Bureaucrat::signForm(const Form &other)const
{
	if (other.beSigned(*this))
	{
		std::cout << this->getName() << " signed " << other.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " couldn't sign " << other.getName() << std::endl;
}

std::ostream	&operator<<(std::ostream &o,const Bureaucrat &src)
{
	o << src.getName() << ", Bureaucrat grade " << src.getGrade();
	return o;
}
