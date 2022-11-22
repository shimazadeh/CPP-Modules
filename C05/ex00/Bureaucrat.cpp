#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("")
{
	this->grade = 2;
}

Bureaucrat::Bureaucrat(std::string str, int _grade): name(str)
{
	try
	{
		checkGrade(_grade);
		this->grade = _grade;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "default destructor is called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	this->grade = src.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o,const Bureaucrat &src)
{
	o << src.getName() << " " << src.getGrade();
	return (o);
}

std::string	Bureaucrat::getName()const
{
	return (this->name);
}

int	Bureaucrat::getGrade()const
{
	return(this->grade);
}

void	Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	return ;
}

void	Bureaucrat::increment(void)
{
	try
	{
		checkGrade(this->grade - 1);
		this->grade--;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrement(void)
{
	try
	{
		checkGrade(this->grade + 1);
		this->grade++;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
