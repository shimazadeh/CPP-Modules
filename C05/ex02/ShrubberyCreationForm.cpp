#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) : Form("ShrubberyCreationForm", 145, 137), target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor is called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	(void)src;
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

		outfile.open(file_name.c_str());
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

