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

	private:

	typedef struct s_all_forms
	{
		std::string		name;
		Form			*formtype;
	}				t_all_forms;
};
#endif
