#include <iostream>
#include <fstream>
#include <cstring>

// int	main()
// {
// 	std::ifstream	ifs("numbers");
// 	unsigned int	dst;
// 	unsigned int	dst2;
// 	ifs >> dst >> dst2;

// 	std::cout << dst << " " << dst2 <<std::endl;
// 	ifs.close();

// 	std::ofstream	ofs("test.out");
// 	ofs << "i like ponies a whole damn lot" << std::endl;
// 	return (0);
// }

int	replace_file(char	*filename, char *s1, char *s2)
{
	std::ifstream	ifs(filename);
	char			*new_filename;
	char			buffer[512];

	new_filename = strdup(filename);
	strcat(new_filename, ".replace");
	std::ofstream	ofs(new_filename);

	memset(buffer, 0, 512);
	while (ifs.peek() != EOF)
	{
		ifs >> buffer;
		if (strcmp(buffer, s1) == 0)
			ofs << s2;
		else
			ofs << buffer;
		memset(buffer, 0, 512);
		ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}

int	main()
{
	replace_file((char *)"numbers", (char *)"sara", (char *)"shima");
}
