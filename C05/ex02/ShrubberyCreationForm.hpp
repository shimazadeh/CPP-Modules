#ifndef _SHRUBBERYCREARIONFORM_HPP
#define _SHRUBBERYCREARIONFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(ShrubberyCreationForm &other);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &src);

		bool				execute(Bureaucrat const &executor)const;
		const std::string	getTarget();


	private:
		const std::string	target;
};

#endif
