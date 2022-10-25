#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string str);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat(void);

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

		std::string	getName();
		int		getGrade();
		void	increment(int amount);
		void	decrement(int amount);
		void	checkGrade();

	private:
		std::string		 	name;
		int					grade;
};

#endif
