#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), target("")
{
	std::cout << "default constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) : Form("ShrubberyCreationForm", 145, 137), target(_target)
{
	std::cout << "Name constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
	std::cout << "Copy constructor is called" << std::endl;
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "destructor is called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	return (*this);
}

const std::string	ShrubberyCreationForm::getTarget()
{
	return (this->target);
}

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		file_name = this->target + "_shrubbery";
	if (this->ifexecutable(executor))
	{
		std::ofstream	outfile;

		outfile.open(file_name);
		outfile << "          .     .  .      +     .      .          ." << std::endl;
		outfile << "     .       .      .     #       .           ." << std::endl;
		outfile << "        .      .         ###            .      .      ." << std::endl;
		outfile << "      .      .   \"#:. .:##\"##:. .:#\"  .      ." << std ::endl;
		outfile << "          .      . \"####\"###\"####\"  ." << std::endl;
		outfile << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
		outfile << "  .             \"#########\"#########\"        .        ." << std::endl;
		outfile << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
		outfile << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std:: endl;
		outfile << "                .\"##\"#####\"#####\"##\"           .      ." << std:: endl;
		outfile << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
		outfile << "      .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
		outfile << "    .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
		outfile << "            .     \"      000      \"    .     ." << std::endl;
		outfile << "       .         .   .   000     .        .       ." << std::endl;
		outfile << ".. .. ..................O000O........................ ......" << std::endl;
		outfile.close();
		return (1);
	}
	return (0);
}

