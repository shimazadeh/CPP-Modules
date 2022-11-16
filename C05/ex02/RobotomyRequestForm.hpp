#ifndef _ROBOTOMYREQUESTFORM_HPP
#define _ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm &other);
		~RobotomyRequestForm(void);

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &src);

		bool				execute(Bureaucrat const &executor)const;
		const std::string	getTarget();


	private:
		const std::string	target;
};

#endif
