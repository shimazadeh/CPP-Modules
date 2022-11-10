#include "Sed.hpp"

Sed::Sed(void)
{
}

Sed::~Sed(void)
{
}

int	Sed::replace_file(std::string filename, std::string s1, std::string s2)
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
