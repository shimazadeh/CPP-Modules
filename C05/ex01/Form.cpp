#include "Form.hpp"

Form::Form(void): name(""), sign(0), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "default constructor is called" << std::endl;
}

Form::Form(const std::string &str, int _gradeToSign, int _gradeToExecute): name(str), sign(0), gradeToSign(_gradeToSign), gradeToExecute(_gradeToExecute)
{
	std::cout << "name constructor is called" << std::endl;
}

Form::Form(const Form &other): name(other.getName()), sign(other.ifSigned()), gradeToSign(other.getSignGrade()), gradeToExecute(other.getExecuteGrade())
{
	*this = other;
	std::cout << "copy constructor is called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "destructor is called" << std::endl;
}

Form	&Form::operator=(const Form &src)
{
	std::cout << "Form assignment operator is called" << std::endl;
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

bool	Form::beSigned(Bureaucrat &other)
{
	if (other.getGrade() < this->gradeToSign)
	{
		this->sign = 1;
		return 1;
	}
	else
	{
		this->sign = 0;
		return 0;
	}
}

std::ostream	&operator<<(std::ostream &o, Form const &src)
{
	o << src.getName() << " " << src.getSignGrade() << " " << src.getExecuteGrade() << " ";

	return o;
}
