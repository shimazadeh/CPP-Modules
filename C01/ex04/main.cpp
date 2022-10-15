#include <iostream>
#include <fstream>
#include <cstring>

int	replace_file(char	*filename, char *s1, char *s2)
{
	std::ifstream	ifs(filename);
	std::string		new_filename(filename);
	std::string		buffer;

	new_filename += ".replace";
	std::ofstream	ofs(new_filename);

	while (getline(ifs, buffer))
	{
		if (buffer.compare(s1) == 0)
			ofs << s2 << std::endl;
		else
			ofs << buffer << std::endl;
		buffer = "";
	}
	ifs.close();
	ofs.close();
	return (0);
}

int	main()
{
	replace_file((char *)"numbers", (char *)"sara", (char *)"shima");
}
