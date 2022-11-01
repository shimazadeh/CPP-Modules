#include "iter.hpp"

int main()
{
	std::string	test1[3] = {"SHIMA", "HELLO", "WHATS UP"};
	int			test2[5] =  {1, 2 ,3 , 4 ,5};

	iter(test1, 3, &function);
	iter(test2, 5, &function);
}
