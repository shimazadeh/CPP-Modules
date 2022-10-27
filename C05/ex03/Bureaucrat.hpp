#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &str, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat(void);

		Bureaucrat	&operator=(const Bureaucrat &src);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("the grade is too high!");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("the grade is too low!");
				}
		};

		const std::string	&getName()const;
		int					getGrade()const;
		void				increment(int amount);
		void				decrement(int amount);
		void				checkGradeHigh();
		void				checkGradeLow();
		void				signForm(Form &other)const;
		void				executeForm(const Form &form)const;

	private:
		const std::string	name;
		int					grade;
		// Bureaucrat(void);
		// void				checkGradeHigh();
		// void				checkGradeLow();
};

std::ostream	&operator<<(std::ostream &o,const Bureaucrat &src);
#endif
