#include <iostream>

int main(void)
{
	std::string	str;
	std::string	*stringPTR;
	std::string	&stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;

	std::cout << "the address of str: " << &str << std::endl;
	std::cout << "the address of stringPTR: " << &stringPTR << std::endl;
	std::cout << "the address of stringREF: " << &stringREF << std::endl;

	std::cout << "the value of str: " << str << std::endl;
	std::cout << "the value of stringREF: " << stringREF << std::endl;
	std::cout << "the value of stringPTR: " << *stringPTR << std::endl;

}
