#include "Form.hpp"

Form::Form(void): name(""), sign(0), gradeToSign(150), gradeToExecute(150)
{
}

Form::Form(const std::string &str, int _gradeToSign, int _gradeToExecute): name(str), sign(0), gradeToExecute(_gradeToExecute), gradeToSign(_gradeToSign)
{
	try
	{
		checkGrade(_gradeToSign);
		checkGrade(_gradeToExecute);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(const Form &other): name(other.getName()), sign(other.ifSigned()), gradeToSign(other.getSignGrade()), gradeToExecute(other.getExecuteGrade())
{
	*this = other;
}

Form::~Form(void)
{
	std::cout << "destructor is called" << std::endl;
}

Form	&Form::operator=(const Form &src)
{
	this->sign = src.ifSigned();
	return (*this);
}

const std::string &Form::getName()const
{
	return (this->name);
}

bool	Form::ifSigned()const
{
	return (this->sign);
}

int	Form::getSignGrade()const
{
	return (this->gradeToSign);
}

int	Form::getExecuteGrade()const
{
	return (this->gradeToExecute);
}

void	Form::checkGrade(int grade)const
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
}

bool	Form::beSigned(const Bureaucrat &other)
{
	if (other.getGrade() <= this->gradeToSign)
	{
		this->sign = 1;
		return true;
	}
	else
	{
		this->sign = 0;
		return false;
	}
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	o << src.getName() << " " << src.ifSigned() << " " << src.getSignGrade() << " " << src.getExecuteGrade() << " ";

	return o;
}
