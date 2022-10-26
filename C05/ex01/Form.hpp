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
		~Form(void);

		Form	&operator=(const Form &src);

		void					beSigned(Bureaucrat &other);
		bool					ifSigned()const;
		const std::string 		&getName()const;
		int						getSignGrade()const;
		int						getExecuteGrade()const;

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

	private:
		const std::string	name;
		bool				sign;
		const int			gradeToSign;
		const int			gradeToExecute;
};

std::ostream	&operator<<(std::ostream & o , const Form &src);
#endif
