
#include "Sed.hpp"

int	main(int ac, char  **argv)
{
	if (ac != 4)
		std::cout << "invalid number of arguments" << std::endl;
	else
		Sed::replace_file(argv[1], argv[2], argv[3]);
	return (0);
}
