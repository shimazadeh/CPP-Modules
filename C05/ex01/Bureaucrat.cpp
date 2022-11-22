#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name(""), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &str, int _grade): name(str)
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
	std::cout << "Bureaucrat destructor is called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &src)
{
	this->grade = src.getGrade();
	return (*this);
}

const std::string	&Bureaucrat::getName()const
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

void	Bureaucrat::increment()
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

void	Bureaucrat::decrement()
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

void	Bureaucrat::signForm(Form &other)const
{
	if (other.ifSigned())
	{
		std::cout << this->getName() << " signed " << other.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " couldn't sign " << other.getName() << " because the grade is not high enough" << std::endl;
}

std::ostream	&operator<<(std::ostream &o,const Bureaucrat &src)
{
	o << src.getName() << " " << src.getGrade();
	return o;
}
