#include <iostream>

int main(void)
{
	char	*str;
	char	**stringPTR;
	char	*&stringREF = str;

	str = (char *)"HI THIS IS BRAIN";
	stringPTR = &str;

	std::cout << "the address of str: " << &str << std::endl;
	std::cout << "the address of stringPTR: " << &stringPTR << std::endl;
	std::cout << "the address of stringREF: " << &stringREF << std::endl;

	std::cout << "the value of str: " << str << std::endl;
	std::cout << "the value of stringREF: " << stringREF << std::endl;
	std::cout << "the value of stringPTR: " << *stringPTR << std::endl;

}
