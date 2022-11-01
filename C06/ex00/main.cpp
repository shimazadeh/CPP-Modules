//#include "conversion.hpp"
#include <iostream>

int main(int ac, char **av)
{


    if (av[1])
    {
        float   num_f;

        num_f = atof(av[1]);
        std::cout << "int: " << atoi(av[1]) << std::endl;
        std::cout << "double: " << atol(av[1]) << std::endl;
        std::cout << "float: " << num_f << std::endl;
        std::cout << "char: " << '*' << std::endl;
        std::cout << av[1] << std::endl;
    }
}