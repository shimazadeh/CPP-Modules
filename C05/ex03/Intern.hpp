#ifndef _INTERN_HPP
#define _INTERN_HPP

#include "Form.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class intern
{
	public:
		intern(void);
		intern(const intern &src);
		~intern(void);

		intern	&operator=(const intern &other);
		Form	*makeForm(const std::string form_name, const std::string form_target);

		class FormError : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Invalid form name for intern to create");
				}
		};

};
#endif
