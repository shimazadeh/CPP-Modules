#ifndef _FORM_HPP
#define _FORM_HPP

#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(const Form &other);
		Form(const std::string &str, int gradetosign, int gradetoexecute);
		virtual ~Form(void);

		Form	&operator=(const Form &src);

		bool					beSigned(const Bureaucrat &other);
		bool					ifSigned()const;
		const std::string 		&getName()const;
		int						getSignGrade()const;
		int						getExecuteGrade()const;
		void					checkGrade(int grade)const;

		virtual bool	execute(Bureaucrat const &executor) const= 0;
		bool			ifexecutable(Bureaucrat const &executor) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("the grade is too high!");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("the grade is too low!");
				}
		};

		class BureaucratErrorMsg : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Bureaucrat grade is too low to sign the form!");
				}
		};

	protected:
		const std::string	name;
		bool				sign;
		const int			gradeToSign;
		const int			gradeToExecute;
};

std::ostream	&operator<<(std::ostream & o , const Form &src);
#endif
