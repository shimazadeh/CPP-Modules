int main(void)
{
	char	*str;
	void	*stringPTR;
	char	*stringREF;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = str;

	std::cout << &str <<std::endl;
	std::cout << &stringPTR <<std::endl;
	std::cout << &stringREF <<std::endl;

	std::cout << str <<std::endl;
	std::cout << *stringPTR <<std::endl;
	std::cout << *stringREF <<std::endl;

}
