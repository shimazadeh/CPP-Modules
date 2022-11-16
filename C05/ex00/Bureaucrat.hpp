#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string str, int grade);
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

		std::string	getName()const;
		int			getGrade()const;
		void		increment();
		void		decrement();
		void		checkGrade(int grade);

	private:
		const std::string		 	name;
		int							grade;
};

std::ostream	&operator<<(std::ostream &o,const Bureaucrat &src);

#endif
