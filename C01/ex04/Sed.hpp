#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>
#include <cstring>

class Sed
{
	public:
		Sed(void);
		~Sed(void);

		static int	replace_file(std::string filename, std::string to_find, std::string to_replace);
};

#endif
